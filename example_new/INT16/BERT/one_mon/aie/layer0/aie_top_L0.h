#include "aie_graph_L0.h"

using namespace adf;

const int L0_A=12;
const int L0_B=3;
const int L0_C=8;
const int L0_A_BRO=4;
const int L0_C_BRO=2;

const int L0_NUM_INSTANCES=L0_A*L0_C;
const int L0_NUM_PACK_OUT=L0_NUM_INSTANCES/2;

class mm_x12_x3_x8_graph0 : public adf::graph {
public:
    input_port in_lhs[(L0_A*L0_C/L0_A_BRO)][L0_NUM_PACK_IN];
    input_port in_rhs[(L0_A*L0_C/L0_C_BRO)][L0_NUM_PACK_IN];
    adf::pktmerge<2>  mg_out[L0_NUM_PACK_OUT];
	output_port out[L0_NUM_PACK_OUT];

    
    mm_k1_B3_L0 <7, 0>  mm_0_0;
    mm_k1_B3_L0 <9, 1>  mm_0_4;
    mm_k1_B3_L0 <7, 2>  mm_0_1;
    mm_k1_B3_L0 <9, 3>  mm_0_5;
    mm_k1_B3_L0 <7, 4>  mm_0_2;
    mm_k1_B3_L0 <9, 5>  mm_0_6;
    mm_k1_B3_L0 <7, 6>  mm_0_3;
    mm_k1_B3_L0 <9, 7>  mm_0_7;
    mm_k1_B3_L0 <10, 0>  mm_1_0;
    mm_k1_B3_L0 <12, 1>  mm_1_4;
    mm_k1_B3_L0 <10, 2>  mm_1_1;
    mm_k1_B3_L0 <12, 3>  mm_1_5;
    mm_k1_B3_L0 <10, 4>  mm_1_2;
    mm_k1_B3_L0 <12, 5>  mm_1_6;
    mm_k1_B3_L0 <10, 6>  mm_1_3;
    mm_k1_B3_L0 <12, 7>  mm_1_7;
    mm_k1_B3_L0 <13, 0>  mm_2_0;
    mm_k1_B3_L0 <15, 1>  mm_2_4;
    mm_k1_B3_L0 <13, 2>  mm_2_1;
    mm_k1_B3_L0 <15, 3>  mm_2_5;
    mm_k1_B3_L0 <13, 4>  mm_2_2;
    mm_k1_B3_L0 <15, 5>  mm_2_6;
    mm_k1_B3_L0 <13, 6>  mm_2_3;
    mm_k1_B3_L0 <15, 7>  mm_2_7;
    mm_k1_B3_L0 <16, 0>  mm_3_0;
    mm_k1_B3_L0 <18, 1>  mm_3_4;
    mm_k1_B3_L0 <16, 2>  mm_3_1;
    mm_k1_B3_L0 <18, 3>  mm_3_5;
    mm_k1_B3_L0 <16, 4>  mm_3_2;
    mm_k1_B3_L0 <18, 5>  mm_3_6;
    mm_k1_B3_L0 <16, 6>  mm_3_3;
    mm_k1_B3_L0 <18, 7>  mm_3_7;
    mm_k1_B3_L0 <19, 0>  mm_4_0;
    mm_k1_B3_L0 <21, 1>  mm_4_4;
    mm_k1_B3_L0 <19, 2>  mm_4_1;
    mm_k1_B3_L0 <21, 3>  mm_4_5;
    mm_k1_B3_L0 <19, 4>  mm_4_2;
    mm_k1_B3_L0 <21, 5>  mm_4_6;
    mm_k1_B3_L0 <19, 6>  mm_4_3;
    mm_k1_B3_L0 <21, 7>  mm_4_7;
    mm_k1_B3_L0 <22, 0>  mm_5_0;
    mm_k1_B3_L0 <24, 1>  mm_5_4;
    mm_k1_B3_L0 <22, 2>  mm_5_1;
    mm_k1_B3_L0 <24, 3>  mm_5_5;
    mm_k1_B3_L0 <22, 4>  mm_5_2;
    mm_k1_B3_L0 <24, 5>  mm_5_6;
    mm_k1_B3_L0 <22, 6>  mm_5_3;
    mm_k1_B3_L0 <24, 7>  mm_5_7;
    mm_k1_B3_L0 <25, 0>  mm_6_0;
    mm_k1_B3_L0 <27, 1>  mm_6_4;
    mm_k1_B3_L0 <25, 2>  mm_6_1;
    mm_k1_B3_L0 <27, 3>  mm_6_5;
    mm_k1_B3_L0 <25, 4>  mm_6_2;
    mm_k1_B3_L0 <27, 5>  mm_6_6;
    mm_k1_B3_L0 <25, 6>  mm_6_3;
    mm_k1_B3_L0 <27, 7>  mm_6_7;
    mm_k1_B3_L0 <28, 0>  mm_7_0;
    mm_k1_B3_L0 <30, 1>  mm_7_4;
    mm_k1_B3_L0 <28, 2>  mm_7_1;
    mm_k1_B3_L0 <30, 3>  mm_7_5;
    mm_k1_B3_L0 <28, 4>  mm_7_2;
    mm_k1_B3_L0 <30, 5>  mm_7_6;
    mm_k1_B3_L0 <28, 6>  mm_7_3;
    mm_k1_B3_L0 <30, 7>  mm_7_7;
    mm_k1_B3_L0 <31, 0>  mm_8_0;
    mm_k1_B3_L0 <33, 1>  mm_8_4;
    mm_k1_B3_L0 <31, 2>  mm_8_1;
    mm_k1_B3_L0 <33, 3>  mm_8_5;
    mm_k1_B3_L0 <31, 4>  mm_8_2;
    mm_k1_B3_L0 <33, 5>  mm_8_6;
    mm_k1_B3_L0 <31, 6>  mm_8_3;
    mm_k1_B3_L0 <33, 7>  mm_8_7;
    mm_k1_B3_L0 <34, 0>  mm_9_0;
    mm_k1_B3_L0 <36, 1>  mm_9_4;
    mm_k1_B3_L0 <34, 2>  mm_9_1;
    mm_k1_B3_L0 <36, 3>  mm_9_5;
    mm_k1_B3_L0 <34, 4>  mm_9_2;
    mm_k1_B3_L0 <36, 5>  mm_9_6;
    mm_k1_B3_L0 <34, 6>  mm_9_3;
    mm_k1_B3_L0 <36, 7>  mm_9_7;
    mm_k1_B3_L0 <37, 0>  mm_10_0;
    mm_k1_B3_L0 <39, 1>  mm_10_4;
    mm_k1_B3_L0 <37, 2>  mm_10_1;
    mm_k1_B3_L0 <39, 3>  mm_10_5;
    mm_k1_B3_L0 <37, 4>  mm_10_2;
    mm_k1_B3_L0 <39, 5>  mm_10_6;
    mm_k1_B3_L0 <37, 6>  mm_10_3;
    mm_k1_B3_L0 <39, 7>  mm_10_7;
    mm_k1_B3_L0 <40, 0>  mm_11_0;
    mm_k1_B3_L0 <42, 1>  mm_11_4;
    mm_k1_B3_L0 <40, 2>  mm_11_1;
    mm_k1_B3_L0 <42, 3>  mm_11_5;
    mm_k1_B3_L0 <40, 4>  mm_11_2;
    mm_k1_B3_L0 <42, 5>  mm_11_6;
    mm_k1_B3_L0 <40, 6>  mm_11_3;
    mm_k1_B3_L0 <42, 7>  mm_11_7;
    



    mm_x12_x3_x8_graph0 () {
        for (int i =0; i<L0_NUM_PACK_OUT; i++)  {
            mg_out[i] = adf::pktmerge<2>::create();
        }

        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[0][0],mm_0_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[0][0],mm_0_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[0][0],mm_0_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[0][0],mm_0_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[1][0],mm_0_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[1][0],mm_0_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[1][0],mm_0_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[1][0],mm_0_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[2][0],mm_1_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[2][0],mm_1_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[2][0],mm_1_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[2][0],mm_1_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[3][0],mm_1_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[3][0],mm_1_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[3][0],mm_1_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[3][0],mm_1_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[4][0],mm_2_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[4][0],mm_2_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[4][0],mm_2_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[4][0],mm_2_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[5][0],mm_2_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[5][0],mm_2_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[5][0],mm_2_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[5][0],mm_2_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[6][0],mm_3_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[6][0],mm_3_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[6][0],mm_3_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[6][0],mm_3_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[7][0],mm_3_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[7][0],mm_3_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[7][0],mm_3_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[7][0],mm_3_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[8][0],mm_4_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[8][0],mm_4_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[8][0],mm_4_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[8][0],mm_4_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[9][0],mm_4_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[9][0],mm_4_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[9][0],mm_4_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[9][0],mm_4_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[10][0],mm_5_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[10][0],mm_5_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[10][0],mm_5_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[10][0],mm_5_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[11][0],mm_5_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[11][0],mm_5_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[11][0],mm_5_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[11][0],mm_5_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[12][0],mm_6_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[12][0],mm_6_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[12][0],mm_6_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[12][0],mm_6_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[13][0],mm_6_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[13][0],mm_6_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[13][0],mm_6_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[13][0],mm_6_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[14][0],mm_7_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[14][0],mm_7_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[14][0],mm_7_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[14][0],mm_7_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[15][0],mm_7_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[15][0],mm_7_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[15][0],mm_7_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[15][0],mm_7_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[16][0],mm_8_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[16][0],mm_8_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[16][0],mm_8_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[16][0],mm_8_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[17][0],mm_8_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[17][0],mm_8_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[17][0],mm_8_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[17][0],mm_8_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[18][0],mm_9_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[18][0],mm_9_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[18][0],mm_9_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[18][0],mm_9_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[19][0],mm_9_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[19][0],mm_9_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[19][0],mm_9_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[19][0],mm_9_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[20][0],mm_10_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[20][0],mm_10_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[20][0],mm_10_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[20][0],mm_10_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[21][0],mm_10_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[21][0],mm_10_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[21][0],mm_10_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[21][0],mm_10_7.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[22][0],mm_11_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[22][0],mm_11_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[22][0],mm_11_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[22][0],mm_11_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[23][0],mm_11_4.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[23][0],mm_11_5.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[23][0],mm_11_6.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[23][0],mm_11_7.in0[0]);
        

        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[0][0],mm_0_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[0][0],mm_1_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[1][0],mm_2_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[1][0],mm_3_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[2][0],mm_4_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[2][0],mm_5_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[3][0],mm_6_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[3][0],mm_7_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[4][0],mm_8_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[4][0],mm_9_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[5][0],mm_10_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[5][0],mm_11_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[6][0],mm_0_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[6][0],mm_1_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[7][0],mm_2_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[7][0],mm_3_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[8][0],mm_4_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[8][0],mm_5_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[9][0],mm_6_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[9][0],mm_7_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[10][0],mm_8_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[10][0],mm_9_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[11][0],mm_10_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[11][0],mm_11_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[12][0],mm_0_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[12][0],mm_1_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[13][0],mm_2_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[13][0],mm_3_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[14][0],mm_4_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[14][0],mm_5_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[15][0],mm_6_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[15][0],mm_7_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[16][0],mm_8_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[16][0],mm_9_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[17][0],mm_10_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[17][0],mm_11_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[18][0],mm_0_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[18][0],mm_1_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[19][0],mm_2_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[19][0],mm_3_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[20][0],mm_4_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[20][0],mm_5_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[21][0],mm_6_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[21][0],mm_7_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[22][0],mm_8_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[22][0],mm_9_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[23][0],mm_10_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[23][0],mm_11_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[24][0],mm_0_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[24][0],mm_1_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[25][0],mm_2_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[25][0],mm_3_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[26][0],mm_4_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[26][0],mm_5_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[27][0],mm_6_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[27][0],mm_7_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[28][0],mm_8_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[28][0],mm_9_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[29][0],mm_10_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[29][0],mm_11_4.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[30][0],mm_0_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[30][0],mm_1_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[31][0],mm_2_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[31][0],mm_3_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[32][0],mm_4_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[32][0],mm_5_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[33][0],mm_6_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[33][0],mm_7_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[34][0],mm_8_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[34][0],mm_9_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[35][0],mm_10_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[35][0],mm_11_5.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[36][0],mm_0_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[36][0],mm_1_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[37][0],mm_2_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[37][0],mm_3_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[38][0],mm_4_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[38][0],mm_5_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[39][0],mm_6_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[39][0],mm_7_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[40][0],mm_8_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[40][0],mm_9_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[41][0],mm_10_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[41][0],mm_11_6.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[42][0],mm_0_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[42][0],mm_1_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[43][0],mm_2_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[43][0],mm_3_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[44][0],mm_4_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[44][0],mm_5_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[45][0],mm_6_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[45][0],mm_7_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[46][0],mm_8_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[46][0],mm_9_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[47][0],mm_10_7.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[47][0],mm_11_7.in1[0]);
        

        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_0.out,mg_out[0].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_1.out,mg_out[0].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_2.out,mg_out[1].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_3.out,mg_out[1].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_4.out,mg_out[2].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_5.out,mg_out[2].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_6.out,mg_out[3].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_7.out,mg_out[3].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_0.out,mg_out[4].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_1.out,mg_out[4].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_2.out,mg_out[5].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_3.out,mg_out[5].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_4.out,mg_out[6].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_5.out,mg_out[6].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_6.out,mg_out[7].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_7.out,mg_out[7].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_0.out,mg_out[8].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_1.out,mg_out[8].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_2.out,mg_out[9].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_3.out,mg_out[9].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_4.out,mg_out[10].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_5.out,mg_out[10].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_6.out,mg_out[11].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_7.out,mg_out[11].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_0.out,mg_out[12].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_1.out,mg_out[12].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_2.out,mg_out[13].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_3.out,mg_out[13].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_4.out,mg_out[14].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_5.out,mg_out[14].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_6.out,mg_out[15].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_7.out,mg_out[15].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_0.out,mg_out[16].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_1.out,mg_out[16].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_2.out,mg_out[17].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_3.out,mg_out[17].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_4.out,mg_out[18].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_5.out,mg_out[18].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_6.out,mg_out[19].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_7.out,mg_out[19].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_0.out,mg_out[20].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_1.out,mg_out[20].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_2.out,mg_out[21].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_3.out,mg_out[21].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_4.out,mg_out[22].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_5.out,mg_out[22].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_6.out,mg_out[23].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_7.out,mg_out[23].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_0.out,mg_out[24].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_1.out,mg_out[24].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_2.out,mg_out[25].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_3.out,mg_out[25].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_4.out,mg_out[26].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_5.out,mg_out[26].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_6.out,mg_out[27].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_7.out,mg_out[27].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_0.out,mg_out[28].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_1.out,mg_out[28].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_2.out,mg_out[29].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_3.out,mg_out[29].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_4.out,mg_out[30].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_5.out,mg_out[30].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_6.out,mg_out[31].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_7.out,mg_out[31].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_8_0.out,mg_out[32].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_8_1.out,mg_out[32].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_8_2.out,mg_out[33].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_8_3.out,mg_out[33].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_8_4.out,mg_out[34].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_8_5.out,mg_out[34].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_8_6.out,mg_out[35].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_8_7.out,mg_out[35].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_9_0.out,mg_out[36].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_9_1.out,mg_out[36].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_9_2.out,mg_out[37].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_9_3.out,mg_out[37].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_9_4.out,mg_out[38].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_9_5.out,mg_out[38].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_9_6.out,mg_out[39].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_9_7.out,mg_out[39].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_10_0.out,mg_out[40].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_10_1.out,mg_out[40].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_10_2.out,mg_out[41].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_10_3.out,mg_out[41].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_10_4.out,mg_out[42].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_10_5.out,mg_out[42].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_10_6.out,mg_out[43].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_10_7.out,mg_out[43].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_11_0.out,mg_out[44].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_11_1.out,mg_out[44].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_11_2.out,mg_out[45].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_11_3.out,mg_out[45].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_11_4.out,mg_out[46].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_11_5.out,mg_out[46].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_11_6.out,mg_out[47].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_11_7.out,mg_out[47].in[1]);
        

        for (int i=0; i<L0_NUM_PACK_OUT; i++)  {
            adf::connect<adf::pktstream> (mg_out[i].out[0], out[i]);
        }
    }
};