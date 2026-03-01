module bfs_top (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,
    input  logic        maze [0:99],        // 1=wall, 0=free

    output logic [3:0]  path [0:98],
    output logic [6:0]  path_length,
    output logic        path_ready,
    output logic        no_path
);

    localparam logic [6:0] INF = 7'd127;

    // internal
    logic dist_en, bt_en;
    logic dist_done;
    logic bt_done, bt_no_path;

    logic [6:0] dist_table [0:99];

    logic [6:0] bt_widx;
    logic [3:0] bt_wdata;
    logic bt_we;

    // Path storage
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i=0; i<99; i++) path[i] <= 4'b0000;
        end else if (bt_we) begin
            path[bt_widx] <= bt_wdata;
        end
    end

    bfs_fsm fsm (
        .clk(clk), .rst(rst), .start(start),
        .dist_done(dist_done),
        .bt_done(bt_done),
        .bt_no_path(bt_no_path),
        .dist_en(dist_en),
        .bt_en(bt_en),
        .path_ready(path_ready),
        .no_path(no_path)
    );

    bfs_distmap_10x10 distmap (
        .clk(clk), .rst(rst), .dist_en(dist_en),
        .maze(maze),
        .dist_table(dist_table),
        .dist_done(dist_done)
    );

    bfs_backtrace_dist bt (
        .clk(clk), .rst(rst), .bt_en(bt_en),
        .maze(maze),
        .dist_table(dist_table),
        .path_write_index(bt_widx),
        .path_write_data(bt_wdata),
        .path_write_en(bt_we),
        .path_length(path_length),
        .bt_done(bt_done),
        .bt_no_path(bt_no_path)
    );

endmodule
