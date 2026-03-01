module bfs_fsm (
    input  logic clk,
    input  logic rst,
    input  logic start,

    input  logic dist_done,
    input  logic bt_done,
    input  logic bt_no_path,

    output logic dist_en,
    output logic bt_en,
    output logic path_ready,
    output logic no_path
);

    localparam logic [1:0] IDLE = 2'd0;
    localparam logic [1:0] DIST = 2'd1;
    localparam logic [1:0] BT   = 2'd2;

    logic [1:0] st, st_n;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) st <= IDLE;
        else     st <= st_n;
    end

    always_comb begin
        st_n = st;
        case (st)
            IDLE: if (start)    st_n = DIST;
            DIST: if (dist_done) st_n = BT;
            BT:   if (bt_done)  st_n = IDLE;
            default: st_n = IDLE;
        endcase
    end

    assign dist_en    = (st == DIST);
    assign bt_en      = (st == BT);

    assign path_ready = (st == BT) && bt_done && !bt_no_path;
    assign no_path    = (st == BT) && bt_done && bt_no_path;

endmodule
