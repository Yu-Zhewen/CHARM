#include "layer0/aie_top_L0.h"
#include "layer1/aie_top_L1.h"
using namespace adf;

PLIO* LHS_in0_L0 = new PLIO("LHS_in0_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in1_L0 = new PLIO("LHS_in1_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in2_L0 = new PLIO("LHS_in2_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in3_L0 = new PLIO("LHS_in3_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in4_L0 = new PLIO("LHS_in4_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in5_L0 = new PLIO("LHS_in5_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in6_L0 = new PLIO("LHS_in6_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in7_L0 = new PLIO("LHS_in7_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in8_L0 = new PLIO("LHS_in8_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in9_L0 = new PLIO("LHS_in9_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in10_L0 = new PLIO("LHS_in10_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in11_L0 = new PLIO("LHS_in11_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in12_L0 = new PLIO("LHS_in12_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in13_L0 = new PLIO("LHS_in13_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in14_L0 = new PLIO("LHS_in14_L0", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in15_L0 = new PLIO("LHS_in15_L0", adf::plio_128_bits, "data/input0.txt",230);

PLIO* LHS_in0_L1 = new PLIO("LHS_in0_L1", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in1_L1 = new PLIO("LHS_in1_L1", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in2_L1 = new PLIO("LHS_in2_L1", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in3_L1 = new PLIO("LHS_in3_L1", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in4_L1 = new PLIO("LHS_in4_L1", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in5_L1 = new PLIO("LHS_in5_L1", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in6_L1 = new PLIO("LHS_in6_L1", adf::plio_128_bits, "data/input0.txt",230);
PLIO* LHS_in7_L1 = new PLIO("LHS_in7_L1", adf::plio_128_bits, "data/input0.txt",230);

PLIO* RHS_in0_L0 = new PLIO("RHS_in0_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in1_L0 = new PLIO("RHS_in1_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in2_L0 = new PLIO("RHS_in2_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in3_L0 = new PLIO("RHS_in3_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in4_L0 = new PLIO("RHS_in4_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in5_L0 = new PLIO("RHS_in5_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in6_L0 = new PLIO("RHS_in6_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in7_L0 = new PLIO("RHS_in7_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in8_L0 = new PLIO("RHS_in8_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in9_L0 = new PLIO("RHS_in9_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in10_L0 = new PLIO("RHS_in10_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in11_L0 = new PLIO("RHS_in11_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in12_L0 = new PLIO("RHS_in12_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in13_L0 = new PLIO("RHS_in13_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in14_L0 = new PLIO("RHS_in14_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in15_L0 = new PLIO("RHS_in15_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in16_L0 = new PLIO("RHS_in16_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in17_L0 = new PLIO("RHS_in17_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in18_L0 = new PLIO("RHS_in18_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in19_L0 = new PLIO("RHS_in19_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in20_L0 = new PLIO("RHS_in20_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in21_L0 = new PLIO("RHS_in21_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in22_L0 = new PLIO("RHS_in22_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in23_L0 = new PLIO("RHS_in23_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in24_L0 = new PLIO("RHS_in24_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in25_L0 = new PLIO("RHS_in25_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in26_L0 = new PLIO("RHS_in26_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in27_L0 = new PLIO("RHS_in27_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in28_L0 = new PLIO("RHS_in28_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in29_L0 = new PLIO("RHS_in29_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in30_L0 = new PLIO("RHS_in30_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in31_L0 = new PLIO("RHS_in31_L0", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in0_L1 = new PLIO("RHS_in0_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in1_L1 = new PLIO("RHS_in1_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in2_L1 = new PLIO("RHS_in2_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in3_L1 = new PLIO("RHS_in3_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in4_L1 = new PLIO("RHS_in4_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in5_L1 = new PLIO("RHS_in5_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in6_L1 = new PLIO("RHS_in6_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in7_L1 = new PLIO("RHS_in7_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in8_L1 = new PLIO("RHS_in8_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in9_L1 = new PLIO("RHS_in9_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in10_L1 = new PLIO("RHS_in10_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in11_L1 = new PLIO("RHS_in11_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in12_L1 = new PLIO("RHS_in12_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in13_L1 = new PLIO("RHS_in13_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in14_L1 = new PLIO("RHS_in14_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* RHS_in15_L1 = new PLIO("RHS_in15_L1", adf::plio_128_bits, "data/input1.txt",230);
PLIO* out0_L0 = new PLIO("out0_L0", adf::plio_128_bits, "data/output0.txt",230);
PLIO* out1_L0 = new PLIO("out1_L0", adf::plio_128_bits, "data/output1.txt",230);
PLIO* out2_L0 = new PLIO("out2_L0", adf::plio_128_bits, "data/output2.txt",230);
PLIO* out3_L0 = new PLIO("out3_L0", adf::plio_128_bits, "data/output3.txt",230);
PLIO* out4_L0 = new PLIO("out4_L0", adf::plio_128_bits, "data/output4.txt",230);
PLIO* out5_L0 = new PLIO("out5_L0", adf::plio_128_bits, "data/output5.txt",230);
PLIO* out6_L0 = new PLIO("out6_L0", adf::plio_128_bits, "data/output6.txt",230);
PLIO* out7_L0 = new PLIO("out7_L0", adf::plio_128_bits, "data/output7.txt",230);
PLIO* out8_L0 = new PLIO("out8_L0", adf::plio_128_bits, "data/output8.txt",230);
PLIO* out9_L0 = new PLIO("out9_L0", adf::plio_128_bits, "data/output9.txt",230);
PLIO* out10_L0 = new PLIO("out10_L0", adf::plio_128_bits, "data/output10.txt",230);
PLIO* out11_L0 = new PLIO("out11_L0", adf::plio_128_bits, "data/output11.txt",230);
PLIO* out12_L0 = new PLIO("out12_L0", adf::plio_128_bits, "data/output12.txt",230);
PLIO* out13_L0 = new PLIO("out13_L0", adf::plio_128_bits, "data/output13.txt",230);
PLIO* out14_L0 = new PLIO("out14_L0", adf::plio_128_bits, "data/output14.txt",230);
PLIO* out15_L0 = new PLIO("out15_L0", adf::plio_128_bits, "data/output15.txt",230);
PLIO* out16_L0 = new PLIO("out16_L0", adf::plio_128_bits, "data/output16.txt",230);
PLIO* out17_L0 = new PLIO("out17_L0", adf::plio_128_bits, "data/output17.txt",230);
PLIO* out18_L0 = new PLIO("out18_L0", adf::plio_128_bits, "data/output18.txt",230);
PLIO* out19_L0 = new PLIO("out19_L0", adf::plio_128_bits, "data/output19.txt",230);
PLIO* out20_L0 = new PLIO("out20_L0", adf::plio_128_bits, "data/output20.txt",230);
PLIO* out21_L0 = new PLIO("out21_L0", adf::plio_128_bits, "data/output21.txt",230);
PLIO* out22_L0 = new PLIO("out22_L0", adf::plio_128_bits, "data/output22.txt",230);
PLIO* out23_L0 = new PLIO("out23_L0", adf::plio_128_bits, "data/output23.txt",230);
PLIO* out24_L0 = new PLIO("out24_L0", adf::plio_128_bits, "data/output24.txt",230);
PLIO* out25_L0 = new PLIO("out25_L0", adf::plio_128_bits, "data/output25.txt",230);
PLIO* out26_L0 = new PLIO("out26_L0", adf::plio_128_bits, "data/output26.txt",230);
PLIO* out27_L0 = new PLIO("out27_L0", adf::plio_128_bits, "data/output27.txt",230);
PLIO* out28_L0 = new PLIO("out28_L0", adf::plio_128_bits, "data/output28.txt",230);
PLIO* out29_L0 = new PLIO("out29_L0", adf::plio_128_bits, "data/output29.txt",230);
PLIO* out30_L0 = new PLIO("out30_L0", adf::plio_128_bits, "data/output30.txt",230);
PLIO* out31_L0 = new PLIO("out31_L0", adf::plio_128_bits, "data/output31.txt",230);

PLIO* out0_L1 = new PLIO("out0_L1", adf::plio_128_bits, "data/output32.txt",230);
PLIO* out1_L1 = new PLIO("out1_L1", adf::plio_128_bits, "data/output33.txt",230);
PLIO* out2_L1 = new PLIO("out2_L1", adf::plio_128_bits, "data/output34.txt",230);
PLIO* out3_L1 = new PLIO("out3_L1", adf::plio_128_bits, "data/output35.txt",230);
PLIO* out4_L1 = new PLIO("out4_L1", adf::plio_128_bits, "data/output36.txt",230);
PLIO* out5_L1 = new PLIO("out5_L1", adf::plio_128_bits, "data/output37.txt",230);
PLIO* out6_L1 = new PLIO("out6_L1", adf::plio_128_bits, "data/output38.txt",230);
PLIO* out7_L1 = new PLIO("out7_L1", adf::plio_128_bits, "data/output39.txt",230);
PLIO* out8_L1 = new PLIO("out8_L1", adf::plio_128_bits, "data/output40.txt",230);
PLIO* out9_L1 = new PLIO("out9_L1", adf::plio_128_bits, "data/output41.txt",230);
PLIO* out10_L1 = new PLIO("out10_L1", adf::plio_128_bits, "data/output42.txt",230);
PLIO* out11_L1 = new PLIO("out11_L1", adf::plio_128_bits, "data/output43.txt",230);
PLIO* out12_L1 = new PLIO("out12_L1", adf::plio_128_bits, "data/output44.txt",230);
PLIO* out13_L1 = new PLIO("out13_L1", adf::plio_128_bits, "data/output45.txt",230);
PLIO* out14_L1 = new PLIO("out14_L1", adf::plio_128_bits, "data/output46.txt",230);
PLIO* out15_L1 = new PLIO("out15_L1", adf::plio_128_bits, "data/output47.txt",230);

simulation::platform<72, 48> platform(
LHS_in0_L0,
LHS_in1_L0,
LHS_in2_L0,
LHS_in3_L0,
LHS_in4_L0,
LHS_in5_L0,
LHS_in6_L0,
LHS_in7_L0,
LHS_in8_L0,
LHS_in9_L0,
LHS_in10_L0,
LHS_in11_L0,
LHS_in12_L0,
LHS_in13_L0,
LHS_in14_L0,
LHS_in15_L0,
LHS_in0_L1,
LHS_in1_L1,
LHS_in2_L1,
LHS_in3_L1,
LHS_in4_L1,
LHS_in5_L1,
LHS_in6_L1,
LHS_in7_L1,
RHS_in0_L0, 
RHS_in1_L0, 
RHS_in2_L0, 
RHS_in3_L0, 
RHS_in4_L0, 
RHS_in5_L0, 
RHS_in6_L0, 
RHS_in7_L0, 
RHS_in8_L0, 
RHS_in9_L0, 
RHS_in10_L0, 
RHS_in11_L0, 
RHS_in12_L0, 
RHS_in13_L0, 
RHS_in14_L0, 
RHS_in15_L0, 
RHS_in16_L0, 
RHS_in17_L0, 
RHS_in18_L0, 
RHS_in19_L0, 
RHS_in20_L0, 
RHS_in21_L0, 
RHS_in22_L0, 
RHS_in23_L0, 
RHS_in24_L0, 
RHS_in25_L0, 
RHS_in26_L0, 
RHS_in27_L0, 
RHS_in28_L0, 
RHS_in29_L0, 
RHS_in30_L0, 
RHS_in31_L0, 
RHS_in0_L1, 
RHS_in1_L1, 
RHS_in2_L1, 
RHS_in3_L1, 
RHS_in4_L1, 
RHS_in5_L1, 
RHS_in6_L1, 
RHS_in7_L1, 
RHS_in8_L1, 
RHS_in9_L1, 
RHS_in10_L1, 
RHS_in11_L1, 
RHS_in12_L1, 
RHS_in13_L1, 
RHS_in14_L1, 
RHS_in15_L1, 
out0_L0,
out1_L0,
out2_L0,
out3_L0,
out4_L0,
out5_L0,
out6_L0,
out7_L0,
out8_L0,
out9_L0,
out10_L0,
out11_L0,
out12_L0,
out13_L0,
out14_L0,
out15_L0,
out16_L0,
out17_L0,
out18_L0,
out19_L0,
out20_L0,
out21_L0,
out22_L0,
out23_L0,
out24_L0,
out25_L0,
out26_L0,
out27_L0,
out28_L0,
out29_L0,
out30_L0,
out31_L0,
out0_L1,
out1_L1,
out2_L1,
out3_L1,
out4_L1,
out5_L1,
out6_L1,
out7_L1,
out8_L1,
out9_L1,
out10_L1,
out11_L1,
out12_L1,
out13_L1,
out14_L1,
out15_L1 
);


mm_x8_x3_x8_graph0  mm_graph0;
mm_x4_x3_x8_graph1  mm_graph1;


connect<> net_lhs_in0_L0 (platform.src[0], mm_graph0.in_lhs[0][0]);
connect<> net_lhs_in1_L0 (platform.src[1], mm_graph0.in_lhs[1][0]);
connect<> net_lhs_in2_L0 (platform.src[2], mm_graph0.in_lhs[2][0]);
connect<> net_lhs_in3_L0 (platform.src[3], mm_graph0.in_lhs[3][0]);
connect<> net_lhs_in4_L0 (platform.src[4], mm_graph0.in_lhs[4][0]);
connect<> net_lhs_in5_L0 (platform.src[5], mm_graph0.in_lhs[5][0]);
connect<> net_lhs_in6_L0 (platform.src[6], mm_graph0.in_lhs[6][0]);
connect<> net_lhs_in7_L0 (platform.src[7], mm_graph0.in_lhs[7][0]);
connect<> net_lhs_in8_L0 (platform.src[8], mm_graph0.in_lhs[8][0]);
connect<> net_lhs_in9_L0 (platform.src[9], mm_graph0.in_lhs[9][0]);
connect<> net_lhs_in10_L0 (platform.src[10], mm_graph0.in_lhs[10][0]);
connect<> net_lhs_in11_L0 (platform.src[11], mm_graph0.in_lhs[11][0]);
connect<> net_lhs_in12_L0 (platform.src[12], mm_graph0.in_lhs[12][0]);
connect<> net_lhs_in13_L0 (platform.src[13], mm_graph0.in_lhs[13][0]);
connect<> net_lhs_in14_L0 (platform.src[14], mm_graph0.in_lhs[14][0]);
connect<> net_lhs_in15_L0 (platform.src[15], mm_graph0.in_lhs[15][0]);

connect<> net_lhs_in0_L1 (platform.src[16], mm_graph1.in_lhs[0][0]);
connect<> net_lhs_in1_L1 (platform.src[17], mm_graph1.in_lhs[1][0]);
connect<> net_lhs_in2_L1 (platform.src[18], mm_graph1.in_lhs[2][0]);
connect<> net_lhs_in3_L1 (platform.src[19], mm_graph1.in_lhs[3][0]);
connect<> net_lhs_in4_L1 (platform.src[20], mm_graph1.in_lhs[4][0]);
connect<> net_lhs_in5_L1 (platform.src[21], mm_graph1.in_lhs[5][0]);
connect<> net_lhs_in6_L1 (platform.src[22], mm_graph1.in_lhs[6][0]);
connect<> net_lhs_in7_L1 (platform.src[23], mm_graph1.in_lhs[7][0]);

connect<> net_rhs_in0_L0 (platform.src[24], mm_graph0.in_rhs[0][0]);
connect<> net_rhs_in1_L0 (platform.src[25], mm_graph0.in_rhs[1][0]);
connect<> net_rhs_in2_L0 (platform.src[26], mm_graph0.in_rhs[2][0]);
connect<> net_rhs_in3_L0 (platform.src[27], mm_graph0.in_rhs[3][0]);
connect<> net_rhs_in4_L0 (platform.src[28], mm_graph0.in_rhs[4][0]);
connect<> net_rhs_in5_L0 (platform.src[29], mm_graph0.in_rhs[5][0]);
connect<> net_rhs_in6_L0 (platform.src[30], mm_graph0.in_rhs[6][0]);
connect<> net_rhs_in7_L0 (platform.src[31], mm_graph0.in_rhs[7][0]);
connect<> net_rhs_in8_L0 (platform.src[32], mm_graph0.in_rhs[8][0]);
connect<> net_rhs_in9_L0 (platform.src[33], mm_graph0.in_rhs[9][0]);
connect<> net_rhs_in10_L0 (platform.src[34], mm_graph0.in_rhs[10][0]);
connect<> net_rhs_in11_L0 (platform.src[35], mm_graph0.in_rhs[11][0]);
connect<> net_rhs_in12_L0 (platform.src[36], mm_graph0.in_rhs[12][0]);
connect<> net_rhs_in13_L0 (platform.src[37], mm_graph0.in_rhs[13][0]);
connect<> net_rhs_in14_L0 (platform.src[38], mm_graph0.in_rhs[14][0]);
connect<> net_rhs_in15_L0 (platform.src[39], mm_graph0.in_rhs[15][0]);
connect<> net_rhs_in16_L0 (platform.src[40], mm_graph0.in_rhs[16][0]);
connect<> net_rhs_in17_L0 (platform.src[41], mm_graph0.in_rhs[17][0]);
connect<> net_rhs_in18_L0 (platform.src[42], mm_graph0.in_rhs[18][0]);
connect<> net_rhs_in19_L0 (platform.src[43], mm_graph0.in_rhs[19][0]);
connect<> net_rhs_in20_L0 (platform.src[44], mm_graph0.in_rhs[20][0]);
connect<> net_rhs_in21_L0 (platform.src[45], mm_graph0.in_rhs[21][0]);
connect<> net_rhs_in22_L0 (platform.src[46], mm_graph0.in_rhs[22][0]);
connect<> net_rhs_in23_L0 (platform.src[47], mm_graph0.in_rhs[23][0]);
connect<> net_rhs_in24_L0 (platform.src[48], mm_graph0.in_rhs[24][0]);
connect<> net_rhs_in25_L0 (platform.src[49], mm_graph0.in_rhs[25][0]);
connect<> net_rhs_in26_L0 (platform.src[50], mm_graph0.in_rhs[26][0]);
connect<> net_rhs_in27_L0 (platform.src[51], mm_graph0.in_rhs[27][0]);
connect<> net_rhs_in28_L0 (platform.src[52], mm_graph0.in_rhs[28][0]);
connect<> net_rhs_in29_L0 (platform.src[53], mm_graph0.in_rhs[29][0]);
connect<> net_rhs_in30_L0 (platform.src[54], mm_graph0.in_rhs[30][0]);
connect<> net_rhs_in31_L0 (platform.src[55], mm_graph0.in_rhs[31][0]);
connect<> net_rhs_in0_L1 (platform.src[56], mm_graph1.in_rhs[0][0]);
connect<> net_rhs_in1_L1 (platform.src[57], mm_graph1.in_rhs[1][0]);
connect<> net_rhs_in2_L1 (platform.src[58], mm_graph1.in_rhs[2][0]);
connect<> net_rhs_in3_L1 (platform.src[59], mm_graph1.in_rhs[3][0]);
connect<> net_rhs_in4_L1 (platform.src[60], mm_graph1.in_rhs[4][0]);
connect<> net_rhs_in5_L1 (platform.src[61], mm_graph1.in_rhs[5][0]);
connect<> net_rhs_in6_L1 (platform.src[62], mm_graph1.in_rhs[6][0]);
connect<> net_rhs_in7_L1 (platform.src[63], mm_graph1.in_rhs[7][0]);
connect<> net_rhs_in8_L1 (platform.src[64], mm_graph1.in_rhs[8][0]);
connect<> net_rhs_in9_L1 (platform.src[65], mm_graph1.in_rhs[9][0]);
connect<> net_rhs_in10_L1 (platform.src[66], mm_graph1.in_rhs[10][0]);
connect<> net_rhs_in11_L1 (platform.src[67], mm_graph1.in_rhs[11][0]);
connect<> net_rhs_in12_L1 (platform.src[68], mm_graph1.in_rhs[12][0]);
connect<> net_rhs_in13_L1 (platform.src[69], mm_graph1.in_rhs[13][0]);
connect<> net_rhs_in14_L1 (platform.src[70], mm_graph1.in_rhs[14][0]);
connect<> net_rhs_in15_L1 (platform.src[71], mm_graph1.in_rhs[15][0]);
connect<> net_out0_L0 (mm_graph0.out[0], platform.sink[0]);
connect<> net_out1_L0 (mm_graph0.out[1], platform.sink[1]);
connect<> net_out2_L0 (mm_graph0.out[2], platform.sink[2]);
connect<> net_out3_L0 (mm_graph0.out[3], platform.sink[3]);
connect<> net_out4_L0 (mm_graph0.out[4], platform.sink[4]);
connect<> net_out5_L0 (mm_graph0.out[5], platform.sink[5]);
connect<> net_out6_L0 (mm_graph0.out[6], platform.sink[6]);
connect<> net_out7_L0 (mm_graph0.out[7], platform.sink[7]);
connect<> net_out8_L0 (mm_graph0.out[8], platform.sink[8]);
connect<> net_out9_L0 (mm_graph0.out[9], platform.sink[9]);
connect<> net_out10_L0 (mm_graph0.out[10], platform.sink[10]);
connect<> net_out11_L0 (mm_graph0.out[11], platform.sink[11]);
connect<> net_out12_L0 (mm_graph0.out[12], platform.sink[12]);
connect<> net_out13_L0 (mm_graph0.out[13], platform.sink[13]);
connect<> net_out14_L0 (mm_graph0.out[14], platform.sink[14]);
connect<> net_out15_L0 (mm_graph0.out[15], platform.sink[15]);
connect<> net_out16_L0 (mm_graph0.out[16], platform.sink[16]);
connect<> net_out17_L0 (mm_graph0.out[17], platform.sink[17]);
connect<> net_out18_L0 (mm_graph0.out[18], platform.sink[18]);
connect<> net_out19_L0 (mm_graph0.out[19], platform.sink[19]);
connect<> net_out20_L0 (mm_graph0.out[20], platform.sink[20]);
connect<> net_out21_L0 (mm_graph0.out[21], platform.sink[21]);
connect<> net_out22_L0 (mm_graph0.out[22], platform.sink[22]);
connect<> net_out23_L0 (mm_graph0.out[23], platform.sink[23]);
connect<> net_out24_L0 (mm_graph0.out[24], platform.sink[24]);
connect<> net_out25_L0 (mm_graph0.out[25], platform.sink[25]);
connect<> net_out26_L0 (mm_graph0.out[26], platform.sink[26]);
connect<> net_out27_L0 (mm_graph0.out[27], platform.sink[27]);
connect<> net_out28_L0 (mm_graph0.out[28], platform.sink[28]);
connect<> net_out29_L0 (mm_graph0.out[29], platform.sink[29]);
connect<> net_out30_L0 (mm_graph0.out[30], platform.sink[30]);
connect<> net_out31_L0 (mm_graph0.out[31], platform.sink[31]);
connect<> net_out0_L1 (mm_graph1.out[0], platform.sink[32]);
connect<> net_out1_L1 (mm_graph1.out[1], platform.sink[33]);
connect<> net_out2_L1 (mm_graph1.out[2], platform.sink[34]);
connect<> net_out3_L1 (mm_graph1.out[3], platform.sink[35]);
connect<> net_out4_L1 (mm_graph1.out[4], platform.sink[36]);
connect<> net_out5_L1 (mm_graph1.out[5], platform.sink[37]);
connect<> net_out6_L1 (mm_graph1.out[6], platform.sink[38]);
connect<> net_out7_L1 (mm_graph1.out[7], platform.sink[39]);
connect<> net_out8_L1 (mm_graph1.out[8], platform.sink[40]);
connect<> net_out9_L1 (mm_graph1.out[9], platform.sink[41]);
connect<> net_out10_L1 (mm_graph1.out[10], platform.sink[42]);
connect<> net_out11_L1 (mm_graph1.out[11], platform.sink[43]);
connect<> net_out12_L1 (mm_graph1.out[12], platform.sink[44]);
connect<> net_out13_L1 (mm_graph1.out[13], platform.sink[45]);
connect<> net_out14_L1 (mm_graph1.out[14], platform.sink[46]);
connect<> net_out15_L1 (mm_graph1.out[15], platform.sink[47]);
#ifdef __AIESIM__
int main(int argc, char** argv) {
    mm_graph0.init();
    mm_graph1.init();
    mm_graph0.run(4);
    mm_graph1.run(4);
    mm_graph0.end();
    mm_graph1.end();
    return 0;
}
#endif