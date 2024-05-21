
module alu(input[3:0]a,b, input[2:0] select, output reg[3:0] z);
	always @(*) begin
		case (select)
			3'b000: z = a+b;
			3'b001: z = a-b;
			3'b010: z = a*b;
			3'b011: z = a/b;
			3'b100: z = a&b;
			3'b101: z = a|b;
			3'b110: z = a^b;
			3'b111: z = 0;
			default: z = 4'b0000;
		endcase

		
	end

endmodule
