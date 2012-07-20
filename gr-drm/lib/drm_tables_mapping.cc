/*
 * drm_tables.cpp
 *
 *  Created on: 14.06.2012
 *      Author: felixwunsch
 */

#include "drm_tables.h"

/* frequency reference cells [carrier index][phase_index(0,k)]
 * corresponds to 750 Hz, 2250 Hz and 3000 Hz */
const int tables::d_freq_A[NUM_FREQ_PILOTS][2] = {
					{18, 205},
					{54, 836},
					{72, 215}};

const int tables::d_freq_B[NUM_FREQ_PILOTS][2] = {
					{16, 331},
					{48, 651},
					{64, 555}};

const int tables::d_freq_C[NUM_FREQ_PILOTS][2] = {
		{11, 214},
		{33, 392},
		{44, 242}};

const int tables::d_freq_D[NUM_FREQ_PILOTS][2] = {
		{7,	788},
		{21, 1014},
		{28, 332}};

//TODO: define RM E freq reference cells

/* time reference cells [carrier index][phase_index(0,k)]
 * only in the first symbol of each transmission frame */
const int tables::d_time_A[RMA_NUM_TIME_PIL][2] = {
	{17, 973},
	{18, 205},
	{19, 717},
	{21, 264},
	{28, 357},
	{29, 357},
	{32, 952},
	{33, 440},
	{39, 856},
	{40, 88},
	{41, 88},
	{53, 68},
	{54, 836},
	{55, 836},
	{56, 836},
	{60, 1008},
	{61, 1008},
	{63, 752},
	{71, 215},
	{72, 215},
	{73, 727}};

const int tables::d_time_B[RMB_NUM_TIME_PIL][2] = {
	{14, 304},
	{16, 331},
	{18, 108},
	{20, 620},
	{24, 192},
	{26, 704},
	{32, 44},
	{36, 432},
	{42, 588},
	{44, 844},
	{48, 651},
	{49, 651},
	{50, 651},
	{54, 460},
	{56, 460},
	{62, 944},
	{64, 555},
	{66, 940},
	{68, 428}};

const int tables::d_time_C[RMC_NUM_TIME_PIL][2] = {
	{8, 722},
	{10, 466},
	{11, 214},
	{12, 214},
	{14, 479},
	{16, 516},
	{18, 260},
	{22, 577},
	{24, 662},
	{28, 3},
	{30, 771},
	{32, 392},
	{33, 392},
	{36, 37},
	{38, 37},
	{42, 474},
	{44, 242},
	{45, 242},
	{46, 754}};

const int tables::d_time_D[RMD_NUM_TIME_PIL][2] = {
	{5, 636},
	{6, 124},
	{7, 788},
	{8, 788},
	{9, 200},
	{11, 688},
	{12, 152},
	{14, 920},
	{15, 920},
	{17, 644},
	{18, 388},
	{20, 652},
	{21, 1014},
	{23, 176},
	{24, 176},
	{26, 752},
	{27, 496},
	{28, 332},
	{29, 432},
	{30, 964},
	{32, 452}};

// TODO: define RM E Time reference cells

/* Gain reference cells */
const int tables::d_gain_boost[NUM_RM][NUM_SO * 4] = {
		{2,6,98,102,  2,6,110,114,  -102,-98,98,102,  -114,-110,110,114,  -98,-94,310,314,  -110,-106,346,350},
		{1,3,89,91,  1,3,101,103,  -91,-89,89,91,  -103,-101,101,103,  -87,-85,277,279,  -99,-97,309,311},
		{0,0,0,0,  0,0,0,0,  0,0,0,0,  -69,-67,67,69,  0,0,0,0,  -67,-65,211,213},
		{0,0,0,0,  0,0,0,0,  0,0,0,0,  -44,-43,43,44,  0,0,0,0,  -43,-42,134,135},
		{-106,-102,102,106,  0,0,0,0,  0,0,0,0,  0,0,0,0,  0,0,0,0,  0,0,0,0}};
		
const int tables::d_gain_W_A[5][3] = {
	{228, 341, 455},
	{455, 569, 683},
	{683, 796, 910},
	{910,   0, 114},
	{114, 228, 341}
};
const int tables::d_gain_Z_A[5][3] = {
	{0,    81, 248},
	{18,  106, 106},
	{122, 116,  31},
	{129, 129,  39},
	{33,   32, 111}
};
const int tables::d_gain_Q_A = 36;

const int tables::d_gain_W_B[3][5] = {
	{512,   0, 512,   0, 512},
	{0,   512,   0, 512,   0},
	{512,   0, 512,   0, 512}
};
const int tables::d_gain_Z_B[3][5] = {
	{0,    57, 164,  64,  12},
	{168, 255, 161, 106, 118},
	{25,  232, 132, 233,  38}
};
const int tables::d_gain_Q_B = 12;

const int tables::d_gain_W_C[2][10] = {
	{465, 372, 279, 186,  93,   0, 931, 838, 745, 652},
	{931, 838, 745, 652, 559, 465, 372, 279, 186,  93}
};
const int tables::d_gain_Z_C[2][10] = {
	{0,    76, 29,  76,   9, 190, 161, 248,  33, 108},
	{179, 178, 83, 253, 127, 105, 101, 198, 250, 145}
};
const int tables::d_gain_Q_C = 12;

const int tables::d_gain_W_D[3][8] = {
	{366, 439, 512, 585, 658, 731, 805, 878},
	{731, 805, 878, 951,   0,  73, 146, 219},
	{73,  146, 219, 293, 366, 439, 512, 585}
};
const int tables::d_gain_Z_D[3][8] = {
	{0,   240,  17,  60, 220,  38, 151, 101},
	{110,   7,  78,  82, 175, 150, 106,  25},
	{165,   7, 252, 124, 253, 177, 197, 142}
};
const int tables::d_gain_Q_D = 14;

const int tables::d_gain_R_E[4][10] = {
	{  39, 118, 197, 276, 354, 433,  39, 118, 197, 276},
	{  37, 183, 402,  37, 183, 402,  37, 183, 402,  37},
	{ 110, 329, 475, 110, 329, 475, 110, 329, 475, 110},
	{  79, 158, 236, 315, 394, 473,  79, 158, 236, 315}
};
const int tables::d_gain_Z_E[4][10] = {
	{ 473, 394, 315, 236, 158,  79,   0,   0,   0,   0},
	{ 183, 914, 402,  37, 475, 841, 768, 768, 987, 183},
	{ 549, 622, 475, 110,  37, 622, 256, 768, 329, 549},
	{  79, 158, 236, 315, 394, 473, 158, 315, 473, 630}
};
const int tables::d_gain_Q_E[4][10] = {
	{ 329, 489, 894, 419, 607, 519,1020, 942, 817, 939},
	{ 824,1023,  74, 319, 225, 207, 348, 422, 395,  92},
	{ 959, 379,   7, 738, 500, 920, 440, 727, 263, 733},
	{ 907, 946, 924,  91, 189, 133, 910, 804,1022, 433}
};
		
void tables::calc_gain_cell_params(unsigned short rob_mode, int so, unsigned int n_sym, int k_min, int k_max)
{
	// for calculation details see DRM standard chapter 8.4.4
	
	/* carrier indices */
	std::vector< int > k_tmp; // this vector is used for calculation and for pushing to d_gain_pos.
	int c1, c2, c3, c4; //  constants needed for index calculation
	int p_min;
	switch(rob_mode) //  determine constants
	{
		case 0: // A
			c1 = 2;
			c2 = 4;
			c3 = 5;
			c4 = 20;
			break;
		case 1: // B
			c1 = 1;
			c2 = 2;
			c3 = 3;
			c4 = 6;
			break;
		case 2: // C
			c1 = 1;
			c2 = 2;
			c3 = 2;
			c4 = 4;
			break;
		case 3: // D
			c1 = 1;
			c2 = 1;
			c3 = 3;
			c4 = 3;
			break;
		case 4: // E
			c1 = 2;
			c2 = 4;
			c3 = 4;
			c4 = 16;
			break;
		default:
			break;
	}
	
	p_min = (k_min - c1 - c2 * c3) / c4 - 5; // calculate the lowest index that reaches all valid values for k
	int cur_k;
	for(int s = 0; s < n_sym; s++) // the pattern has a shorter periodicity than s but s is an integer multiple of the pattern length
	{
		k_tmp.clear();
	
		for(int p = p_min; p < -p_min; p++)
		{
			cur_k = c1 + c2 * (s % c3) + c4 * p; //  actual calculation
			
			if(cur_k <= k_max && cur_k >= k_min) // keep value if it's a valid index
			{
				k_tmp.push_back(cur_k);
			}
		}
		
		d_gain_pos.push_back(k_tmp);
	}
	
	/* cell phases (if the locations of gain cells coincide with other reference cells, the other phases take precedence) */
	std::vector< std::vector< int > > gain_phase_index;
	int x, y, k0; // constants needed for phase calculation
	int n, m , p; // variables needed for phase calculation
	std::vector< int > v_tmp; // this vector is used for phase calculation and for pushing to d_gain_phase.
	switch(rob_mode)
	{
		case 0: // A
			x = 4;
			y = 5;
			k0 = 2;
			break;
		case 1: // B
		{
			x = 2;
			y = 3;
			k0 = 1;
			break;
		}
		case 2: // C
			x = 2;
			y = 2;
			k0 = 1;
			break;
		case 3: // D
			x = 1;
			y = 3;
			k0 = 1;
			break;
		case 4: // E
			x = 4;
			y = 4;
			k0 = 2;
			break;
		default:
			break;
	}
	int v; // phase index
	for( int s = 0; s < n_sym; s++)
	{
		v_tmp.clear();
		n = s % y;
		m = std::floor( s/y );
		for( int i = 0; i < (d_gain_pos[s]).size(); i++)
		{
			p = ((d_gain_pos[s])[i] - k0 - n*x) / (x * y);
			if(rob_mode < 4) // DRM30
			{
				// use formula for DRM30
				switch(rob_mode)
				{
					case 0: // A
						v = ( 4*d_gain_Z_A[n][m] + p*d_gain_W_A[n][m] + (int) std::pow(p,2) * (1 + s) * d_gain_Q_A ) % 1024;
						break;
					case 1: // B
						v = ( 4*d_gain_Z_B[n][m] + p*d_gain_W_B[n][m] + (int) std::pow(p,2) * (1 + s) * d_gain_Q_B ) % 1024;						
						break;
					case 2: // B
						v = ( 4*d_gain_Z_C[n][m] + p*d_gain_W_C[n][m] + (int) std::pow(p,2) * (1 + s) * d_gain_Q_C ) % 1024;
						break;
					case 3: // B
						v = ( 4*d_gain_Z_D[n][m] + p*d_gain_W_D[n][m] + (int) std::pow(p,2) * (1 + s) * d_gain_Q_D ) % 1024;
						break;
					default:
						break;
				}
				if(v<0) // wrap around
				{
					v = 1024+v;
				}
				v_tmp.push_back(v);		
			}
			else
			{
				// use formula for DRM+
				v = ( (int) std::pow(p,2) * d_gain_R_E[n][m] + p * d_gain_Z_E[n][m] + d_gain_Q_E[n][m] ) % 1024;
				v_tmp.push_back(v);
			}
		}
		gain_phase_index.push_back(v_tmp); // push indices for one symbol to d_gain_phase
	}
	
	/* calculate cell values */
	// cell value is sqrt(2) * exp( j*2*pi*phase_index/1024 )
	std::vector< std::complex<double> > gain_cells_tmp;
	double boost = sqrt(2);
	const double pi = M_PI;
	std::complex<double> j(0,1); // imaginary unit
	std::ofstream out;
	out.open("gain_cells.txt");
	for(int s = 0; s < n_sym; s++)
	{
		gain_cells_tmp.clear();
		for(int n = 0; n < (d_gain_pos[s]).size(); n++)
		{
			if(d_gain_pos[s][n] == d_gain_boost[rob_mode][4*so] || 
			   d_gain_pos[s][n] == d_gain_boost[rob_mode][4*so + 1] || 
			   d_gain_pos[s][n] == d_gain_boost[rob_mode][4*so + 2] ||
			   d_gain_pos[s][n] == d_gain_boost[rob_mode][4*so + 3])
			{
				gain_cells_tmp.push_back( boost * boost *( cos(2 * pi * gain_phase_index[s][n] / 1024) + j * sin(2 * pi * gain_phase_index[s][n] / 1024) ) );
			}
			else
			{ 
				gain_cells_tmp.push_back( boost * ( cos(2 * pi * gain_phase_index[s][n] / 1024) + j * sin(2 * pi * gain_phase_index[s][n] / 1024) ) );
			}
			out << gain_cells_tmp[n] << ",";
		}
		d_gain_cells.push_back(gain_cells_tmp); // push tmp vector to actual class member
	}
	
	/* boost border cells */
	
}

/* FAC positions. The two numbers denote {symbol no, carrier no} */
const int tables::d_FAC_A[N_FAC_DRM][2] = {
		{2, 26}, {2, 46}, {2, 66}, {2, 86},
		{3, 10}, {3, 30}, {3, 50}, {3, 70}, {3, 90},
		{4, 14}, {4, 22}, {4, 34}, {4, 62}, {4, 74}, {4, 94},
		{5, 26}, {5, 38}, {5, 58}, {5, 66}, {5, 78},
		{6, 22}, {6, 30}, {6, 42}, {6, 62}, {6, 70}, {6, 82},
		{7, 26}, {7, 34}, {7, 46}, {7, 66}, {7, 74}, {7, 86},
		{8, 10}, {8, 30}, {8, 38}, {8, 50}, {8, 58}, {8, 70}, {8, 78}, {8, 90},
		{9, 14}, {9, 22}, {9, 34}, {9, 42}, {9, 62}, {9, 74}, {9, 82}, {9, 94},
		{10, 26}, {10, 38}, {10, 46}, {10, 66}, {10, 86},
		{11, 10}, {11, 30}, {11, 50}, {11, 70}, {11, 90},
		{12, 14}, {12, 34}, {12, 74}, {12, 94},
		{13, 38}, {13, 58}, {13, 78}};

const int tables::d_FAC_B[N_FAC_DRM][2] = {
		{2, 13}, {2, 25}, {2, 43}, {2, 55}, {2, 67},
		{3, 15}, {3, 27}, {3, 45}, {3, 57}, {3, 69},
		{4, 17}, {4, 29}, {4, 47}, {4, 59}, {4, 71},
		{5, 19}, {5, 31}, {5, 49}, {5, 61}, {5, 73},
		{6, 9}, {6, 21}, {6, 33}, {6, 51}, {6, 63}, {6, 75},
		{7, 11}, {7, 23}, {7, 35}, {7, 53}, {7, 65}, {7, 77},
		{8, 13}, {8, 25}, {8, 37}, {8, 55}, {8, 67}, {8, 79},
		{9, 15}, {9, 27}, {9, 39}, {9, 57}, {9, 69}, {9, 81},
		{10, 17}, {10, 29}, {10, 41}, {10, 59}, {10, 71}, {10, 83},
		{11, 19}, {11, 31}, {11, 43}, {11, 61}, {11, 73},
		{12, 21}, {12, 33}, {12, 45}, {12, 63}, {12, 75},
		{13, 23}, {13, 35}, {13, 47}, {13, 65}, {13, 77},};

const int tables::d_FAC_C[N_FAC_DRM][2] = {
		{3, 9}, {3, 21}, {3, 45}, {3, 57},
		{4, 23}, {4, 35}, {4, 47},
		{5, 13}, {5, 25}, {5, 37}, {5, 49},
		{6, 15}, {6, 27}, {6, 39}, {6, 51},
		{7, 5}, {7, 17}, {7, 29}, {7, 41}, {7, 53},
		{8, 7}, {8, 19}, {8, 31}, {8, 43}, {8, 55},
		{9, 9}, {9, 21}, {9, 45}, {9, 57},
		{10, 23}, {10, 35}, {10, 47},
		{11, 13}, {11, 25}, {11, 37}, {11, 49},
		{12, 15}, {12, 27}, {12, 39}, {12, 51},
		{13, 5}, {13, 17}, {13, 29}, {13, 41}, {13, 53},
		{14, 7}, {14, 19}, {14, 31}, {14, 43}, {14, 55},
		{15, 9}, {15, 21}, {15, 45}, {15, 57},
		{16, 23}, {16, 35}, {16, 47},
		{17, 13}, {17, 25}, {17, 37}, {17, 49},
		{18, 15}, {18, 27}, {18, 39}, {18, 51}};

const int tables::d_FAC_D[N_FAC_DRM][2] = {
		{3, 9}, {3, 18}, {3, 27},
		{4, 10}, {4, 19},
		{5, 11}, {5, 20}, {5, 29},
		{6, 12}, {6, 30},
		{7, 13}, {7, 22}, {7, 31},
		{8, 5}, {8, 14}, {8, 23}, {8, 32},
		{9, 6}, {9, 15}, {9, 24}, {9, 33},
		{10, 16}, {10, 25}, {10, 34},
		{11, 8}, {11, 17}, {11, 26}, {11, 35},
		{12, 9}, {12, 18}, {12, 27}, {12, 36},
		{13, 10}, {13, 19}, {13, 37},
		{14, 11}, {14, 20}, {14, 29},
		{15, 12}, {15, 30},
		{16, 13}, {16, 22}, {16, 31},
		{17, 5}, {17, 14}, {17, 23}, {17, 32},
		{18, 6}, {18, 15}, {18, 24}, {18, 33},
		{19, 16}, {19, 25}, {19, 34},
		{20, 8}, {20, 17}, {20, 26}, {20, 35},
		{21, 9}, {21, 18}, {21, 27}, {21, 36},
		{22, 10}, {22, 19}, {22, 37}};

//int d_FAC_E[N_FAC_DRMPLUS][2] = ... // TODO: define RM E FAC positions

/* QAM mapping
 * Input bits are collected in bytes separately for imaginary and real part.
 * The order is: [i_0, i_1, i_2] and [q_0, q_1, q_2] -> {i, q}
 * All entries are normalized according to the DRM-standard */

const float tables::d_QAM64SM[8][2] = {
	{ 1.0801234497f,  1.0801234497f},
	{-0.1543033499f, -0.1543033499f},
	{ 0.4629100498f,  0.4629100498f},
	{-0.7715167498f, -0.7715167498f},
	{ 0.7715167498f,  0.7715167498f},
	{-0.4629100498f, -0.4629100498f},
	{ 0.1543033499f,  0.1543033499f},
	{-1.0801234497f, -1.0801234497f}
};

const float tables::d_QAM64HMsym[8][2] = {
	{ 1.0801234497f,  1.0801234497f},
	{ 0.4629100498f,  0.4629100498f},
	{ 0.7715167498f,  0.7715167498f},
	{ 0.1543033499f,  0.1543033499f},
	{-0.1543033499f, -0.1543033499f},
	{-0.7715167498f, -0.7715167498f},
	{-0.4629100498f, -0.4629100498f},
	{-1.0801234497f, -1.0801234497f}
};

const float tables::d_QAM64HMmix[8][2] = {
	{ 1.0801234497f,  1.0801234497f},
	{ 0.4629100498f, -0.1543033499f},
	{ 0.7715167498f,  0.4629100498f},
	{ 0.1543033499f, -0.7715167498f},
	{-0.1543033499f,  0.7715167498f},
	{-0.7715167498f, -0.4629100498f},
	{-0.4629100498f,  0.1543033499f},
	{-1.0801234497f, -1.0801234497f}
};

const float tables::d_QAM16[4][2] = {
	{ 0.9486832980f,  0.9486832980f},
	{-0.3162277660f, -0.3162277660f},
	{ 0.3162277660f,  0.3162277660f},
	{-0.9486832980f, -0.9486832980f}
};

const float tables::d_QAM4[2][2] = {
	{ 0.7071067811f,  0.7071067811f},
	{-0.7071067811f, -0.7071067811f}
};

