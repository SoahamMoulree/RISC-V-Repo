# CONFIGURE THE GPIO PINS ACCORDING TO YOUR SPECIFICATIONS

- Change the input and output pins according to the applications:

#### IN THE PROCESSOR.V FILE

- Change the input and output pins according to you specification(I had 2 input pins and 3 output pins for my specification).


 ![image](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/c86d2cf6-427d-4b15-9a98-e3e200ce63b6)

![image](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/03218e67-6b9d-414b-80b8-157847e4738d)
  
- Make similar changes for the testbench and also specify the input bits : input wires = 2'b11 (This means providing an input of 1 to both input pins.)

![image](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/0bef1902-6e93-41d6-9053-eeb92d0e0c3f)

- Also bypass the UART protocol to Protocol to reduce the time required for GTKWave simulations by commenting out all the @(posedgelow_clk);write_instruction(32'h00000000); after  uart_rx_en = 1'b1 (You can see it in the testbench) and setting writing_inst_done = 1 in the processor.v file(inside the wrapper module).

- ## GTK VERILOG SIMULATIONS

- command to generate simulations:
  
![WhatsApp Image 2024-06-30 at 17 05 11_fec9d743](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/c325a033-2c2c-482d-a06d-812f8700d4d3)

### SIMULATION: 

1) WHEN INPUT = 11;

   ![WhatsApp Image 2024-06-30 at 17 04 14_d57b10c7](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/a1ff48db-0e3e-44b5-8a5f-37a7cecfab0d)

2) WHEN INPUT = 10;

   ![WhatsApp Image 2024-06-30 at 17 04 14_c4d703ab](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/02fb4ee8-dfe5-4abc-92f7-f49a469c34c1)



