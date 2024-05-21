module alu_tb;

reg[3:0] a,b;
reg[2:0] select;
wire[3:0]c;

alu i1(.a(a),.b(b),.select(select),.z(c));

initial begin
$dumpfile("test_alu.vcd");
$dumpvars(0,alu_tb);

#1 a = 4'b0010;
#2 b = 4'b0001;
#4 select = 3'b000;
#5 select = 3'b001;
#10 select = 3'b010;
#15 select = 3'b011;
#20 select = 3'b100;
#25 select = 3'b101;
#30 select = 3'b110;
#35 select = 3'b111;

#50 $finish;

end


endmodule 
