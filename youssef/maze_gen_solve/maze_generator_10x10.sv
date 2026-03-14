module maze_generator_10x10 (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,
    input  logic [15:0] seed,

    output logic        done,
    output logic [31:0] grid0,
    output logic [31:0] grid1,
    output logic [31:0] grid2,
    output logic [31:0] grid3
);
    localparam int OPEN_THRESHOLD = 5; // lower = denser walls, higher = more openings

    typedef enum logic [2:0] {
        G_IDLE,
        G_CLEAR,
        G_PATH_MARK,
        G_PATH_STEP,
        G_FILL,
        G_DONE
    } gstate_t;

    gstate_t state;

    logic [127:0] grid_flat;
    logic [15:0]  rng_value;
    logic         rng_enable;
    logic         rng_load_seed;

    logic [3:0] row;
    logic [3:0] col;
    logic [6:0] fill_idx;

    logic [6:0] bit_idx;

    lfsr16 u_rng (
        .clk(clk),
        .rst(rst),
        .enable(rng_enable),
        .load_seed(rng_load_seed),
        .seed(seed),
        .value(rng_value)
    );

    always_ff @(posedge clk) begin
        if (rst) begin
            state         <= G_IDLE;
            done          <= 1'b0;
            grid_flat     <= 128'd0;
            row           <= 4'd0;
            col           <= 4'd0;
            fill_idx      <= 7'd0;
            rng_enable    <= 1'b0;
            rng_load_seed <= 1'b0;
        end else begin
            done          <= 1'b0;
            rng_enable    <= 1'b0;
            rng_load_seed <= 1'b0;

            case (state)
                G_IDLE: begin
                    if (start) begin
                        grid_flat     <= 128'd0;
                        row           <= 4'd0;
                        col           <= 4'd0;
                        fill_idx      <= 7'd0;
                        rng_load_seed <= 1'b1;
                        state         <= G_CLEAR;
                    end
                end

                G_CLEAR: begin
                    grid_flat <= 128'd0;
                    row       <= 4'd0;
                    col       <= 4'd0;
                    state     <= G_PATH_MARK;
                end

                G_PATH_MARK: begin
                    bit_idx = ({3'd0, row} * 7'd10) + {3'd0, col};
                    grid_flat[bit_idx] <= 1'b1;
                    state <= G_PATH_STEP;
                end

                G_PATH_STEP: begin
                    rng_enable <= 1'b1;

                    if ((row == 4'd9) && (col == 4'd9)) begin
                        fill_idx <= 7'd0;
                        state    <= G_FILL;
                    end else if (row == 4'd9) begin
                        col   <= col + 4'd1;
                        state <= G_PATH_MARK;
                    end else if (col == 4'd9) begin
                        row   <= row + 4'd1;
                        state <= G_PATH_MARK;
                    end else begin
                        // random choose: right or down
                        if (rng_value[0] == 1'b0)
                            col <= col + 4'd1;
                        else
                            row <= row + 4'd1;
                        state <= G_PATH_MARK;
                    end
                end

                G_FILL: begin
                    rng_enable <= 1'b1;
                    if (fill_idx < 7'd100) begin
                        if (grid_flat[fill_idx] == 1'b0) begin
                            if (rng_value[3:0] < OPEN_THRESHOLD[3:0])
                                grid_flat[fill_idx] <= 1'b1;
                        end
                        fill_idx <= fill_idx + 7'd1;
                    end else begin
                        // force endpoints open
                        grid_flat[0]  <= 1'b1;
                        grid_flat[99] <= 1'b1;
                        state <= G_DONE;
                    end
                end

                G_DONE: begin
                    done  <= 1'b1;
                    state <= G_IDLE;
                end

                default: state <= G_IDLE;
            endcase
        end
    end

    assign grid0 = grid_flat[31:0];
    assign grid1 = grid_flat[63:32];
    assign grid2 = grid_flat[95:64];
    assign grid3 = grid_flat[127:96];
endmodule