#include "aie_graph_L0.h"

using namespace adf;

const int L0_A=8;
const int L0_B=4;
const int L0_C=4;
const int L0_A_BRO=2;
const int L0_C_BRO=2;

const int L0_NUM_INSTANCES=L0_A*L0_C;
const int L0_NUM_PACK_OUT=L0_NUM_INSTANCES/2;

class mm_x8_x4_x4_graph0 : public adf::graph {
public:
    input_port in_lhs[(L0_A*L0_C/L0_A_BRO)][L0_NUM_PACK_IN];
    input_port in_rhs[(L0_A*L0_C/L0_C_BRO)][L0_NUM_PACK_IN];
    adf::pktmerge<2>  mg_out[L0_NUM_PACK_OUT];
	output_port out[L0_NUM_PACK_OUT];

    
    mm_k1_B4_L0 <9, 0>  mm_0_0;
    mm_k1_B4_L0 <12, 1>  mm_0_2;
    mm_k1_B4_L0 <9, 2>  mm_0_1;
    mm_k1_B4_L0 <12, 3>  mm_0_3;
    mm_k1_B4_L0 <13, 0>  mm_1_0;
    mm_k1_B4_L0 <16, 1>  mm_1_2;
    mm_k1_B4_L0 <13, 2>  mm_1_1;
    mm_k1_B4_L0 <16, 3>  mm_1_3;
    mm_k1_B4_L0 <17, 0>  mm_2_0;
    mm_k1_B4_L0 <20, 1>  mm_2_2;
    mm_k1_B4_L0 <17, 2>  mm_2_1;
    mm_k1_B4_L0 <20, 3>  mm_2_3;
    mm_k1_B4_L0 <21, 0>  mm_3_0;
    mm_k1_B4_L0 <24, 1>  mm_3_2;
    mm_k1_B4_L0 <21, 2>  mm_3_1;
    mm_k1_B4_L0 <24, 3>  mm_3_3;
    mm_k1_B4_L0 <25, 0>  mm_4_0;
    mm_k1_B4_L0 <28, 1>  mm_4_2;
    mm_k1_B4_L0 <25, 2>  mm_4_1;
    mm_k1_B4_L0 <28, 3>  mm_4_3;
    mm_k1_B4_L0 <29, 0>  mm_5_0;
    mm_k1_B4_L0 <32, 1>  mm_5_2;
    mm_k1_B4_L0 <29, 2>  mm_5_1;
    mm_k1_B4_L0 <32, 3>  mm_5_3;
    mm_k1_B4_L0 <33, 0>  mm_6_0;
    mm_k1_B4_L0 <36, 1>  mm_6_2;
    mm_k1_B4_L0 <33, 2>  mm_6_1;
    mm_k1_B4_L0 <36, 3>  mm_6_3;
    mm_k1_B4_L0 <37, 0>  mm_7_0;
    mm_k1_B4_L0 <40, 1>  mm_7_2;
    mm_k1_B4_L0 <37, 2>  mm_7_1;
    mm_k1_B4_L0 <40, 3>  mm_7_3;
    



    mm_x8_x4_x4_graph0 () {
        for (int i =0; i<L0_NUM_PACK_OUT; i++)  {
            mg_out[i] = adf::pktmerge<2>::create();
        }

        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[0][0],mm_0_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[0][1],mm_0_0.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[0][0],mm_0_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[0][1],mm_0_1.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[1][0],mm_0_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[1][1],mm_0_2.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[1][0],mm_0_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[1][1],mm_0_3.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[2][0],mm_1_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[2][1],mm_1_0.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[2][0],mm_1_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[2][1],mm_1_1.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[3][0],mm_1_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[3][1],mm_1_2.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[3][0],mm_1_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[3][1],mm_1_3.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[4][0],mm_2_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[4][1],mm_2_0.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[4][0],mm_2_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[4][1],mm_2_1.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[5][0],mm_2_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[5][1],mm_2_2.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[5][0],mm_2_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[5][1],mm_2_3.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[6][0],mm_3_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[6][1],mm_3_0.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[6][0],mm_3_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[6][1],mm_3_1.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[7][0],mm_3_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[7][1],mm_3_2.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[7][0],mm_3_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[7][1],mm_3_3.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[8][0],mm_4_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[8][1],mm_4_0.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[8][0],mm_4_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[8][1],mm_4_1.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[9][0],mm_4_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[9][1],mm_4_2.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[9][0],mm_4_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[9][1],mm_4_3.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[10][0],mm_5_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[10][1],mm_5_0.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[10][0],mm_5_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[10][1],mm_5_1.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[11][0],mm_5_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[11][1],mm_5_2.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[11][0],mm_5_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[11][1],mm_5_3.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[12][0],mm_6_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[12][1],mm_6_0.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[12][0],mm_6_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[12][1],mm_6_1.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[13][0],mm_6_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[13][1],mm_6_2.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[13][0],mm_6_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[13][1],mm_6_3.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[14][0],mm_7_0.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[14][1],mm_7_0.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[14][0],mm_7_1.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[14][1],mm_7_1.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[15][0],mm_7_2.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[15][1],mm_7_2.in0[1]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[15][0],mm_7_3.in0[0]);
        connect<pktstream,window<L0_h1*L0_w1*L0_Byte>>(in_lhs[15][1],mm_7_3.in0[1]);
        

        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[0][0],mm_0_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[0][1],mm_0_0.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[0][0],mm_1_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[0][1],mm_1_0.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[1][0],mm_2_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[1][1],mm_2_0.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[1][0],mm_3_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[1][1],mm_3_0.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[2][0],mm_4_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[2][1],mm_4_0.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[2][0],mm_5_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[2][1],mm_5_0.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[3][0],mm_6_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[3][1],mm_6_0.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[3][0],mm_7_0.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[3][1],mm_7_0.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[4][0],mm_0_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[4][1],mm_0_1.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[4][0],mm_1_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[4][1],mm_1_1.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[5][0],mm_2_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[5][1],mm_2_1.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[5][0],mm_3_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[5][1],mm_3_1.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[6][0],mm_4_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[6][1],mm_4_1.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[6][0],mm_5_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[6][1],mm_5_1.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[7][0],mm_6_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[7][1],mm_6_1.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[7][0],mm_7_1.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[7][1],mm_7_1.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[8][0],mm_0_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[8][1],mm_0_2.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[8][0],mm_1_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[8][1],mm_1_2.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[9][0],mm_2_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[9][1],mm_2_2.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[9][0],mm_3_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[9][1],mm_3_2.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[10][0],mm_4_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[10][1],mm_4_2.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[10][0],mm_5_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[10][1],mm_5_2.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[11][0],mm_6_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[11][1],mm_6_2.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[11][0],mm_7_2.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[11][1],mm_7_2.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[12][0],mm_0_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[12][1],mm_0_3.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[12][0],mm_1_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[12][1],mm_1_3.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[13][0],mm_2_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[13][1],mm_2_3.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[13][0],mm_3_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[13][1],mm_3_3.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[14][0],mm_4_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[14][1],mm_4_3.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[14][0],mm_5_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[14][1],mm_5_3.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[15][0],mm_6_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[15][1],mm_6_3.in1[1]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[15][0],mm_7_3.in1[0]);
        connect<pktstream,window<L0_w1*L0_w2*L0_Byte>>(in_rhs[15][1],mm_7_3.in1[1]);
        

        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_0.out,mg_out[0].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_1.out,mg_out[0].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_2.out,mg_out[1].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_0_3.out,mg_out[1].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_0.out,mg_out[2].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_1.out,mg_out[2].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_2.out,mg_out[3].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_1_3.out,mg_out[3].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_0.out,mg_out[4].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_1.out,mg_out[4].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_2.out,mg_out[5].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_2_3.out,mg_out[5].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_0.out,mg_out[6].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_1.out,mg_out[6].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_2.out,mg_out[7].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_3_3.out,mg_out[7].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_0.out,mg_out[8].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_1.out,mg_out[8].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_2.out,mg_out[9].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_4_3.out,mg_out[9].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_0.out,mg_out[10].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_1.out,mg_out[10].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_2.out,mg_out[11].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_5_3.out,mg_out[11].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_0.out,mg_out[12].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_1.out,mg_out[12].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_2.out,mg_out[13].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_6_3.out,mg_out[13].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_0.out,mg_out[14].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_1.out,mg_out[14].in[1]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_2.out,mg_out[15].in[0]);
        connect<window<L0_h1*L0_w2*L0_Byte>,pktstream>(mm_7_3.out,mg_out[15].in[1]);
        

        for (int i=0; i<L0_NUM_PACK_OUT; i++)  {
            adf::connect<adf::pktstream> (mg_out[i].out[0], out[i]);
        }
    }
};