#include "FUELMODELSPAIN.h"

#include <iostream>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

/*
	Global coefficients
*/  
std::unordered_map<int, std::vector<float>> p_coeff;
std::unordered_map<int, std::vector<float>> q_coeff;
 
/*
	Functions
*/

void initialize_coeff(int scenario)
{
	if (scenario == 1){
	    // -------------------- Rothermel Models -------------------- //
        // FM 1
	    int F1 = 1;
		std::vector<float> p_1;
		p_1.push_back(1.321);
		p_1.push_back(0.5026);
		p_1.push_back(0.006657);

		std::vector<float> q_1;
		q_1.push_back(-1.312);
		q_1.push_back(0.1564);
		q_1.push_back(1.747);

		p_coeff.insert(std::make_pair(F1, p_1));
		q_coeff.insert(std::make_pair(F1, q_1));

		// FM 2
	    int F2 = 2;
		std::vector<float> p_2;
		p_2.push_back(0.04996);
		p_2.push_back(0.08135);
		p_2.push_back(0.001065);

		std::vector<float> q_2;
		q_2.push_back(-3.575);
		q_2.push_back(0.02362);
		q_2.push_back(4.522);

		p_coeff.insert(std::make_pair(F2, p_2));
		q_coeff.insert(std::make_pair(F2, q_2));

		// FM 3
	    int F3 = 3;
		std::vector<float> p_3;
		p_3.push_back(0.02726);
		p_3.push_back(0.08229);
		p_3.push_back(0.001285);

		std::vector<float> q_3;
		q_3.push_back(-3.008);
		q_3.push_back(0.03766);
		q_3.push_back(4.356);

		p_coeff.insert(std::make_pair(F3, p_3));
		q_coeff.insert(std::make_pair(F3, q_3));

		// FM 4
	    int F4 = 4;
		std::vector<float> p_4;
		p_4.push_back(0.03017);
		p_4.push_back(0.07841);
		p_4.push_back(0.001203);

		std::vector<float> q_4;
		q_4.push_back(-4.261);
		q_4.push_back(0.03222);
		q_4.push_back(6.023);

		p_coeff.insert(std::make_pair(F4, p_4));
		q_coeff.insert(std::make_pair(F4, q_4));

		// FM 5
	    int F5 = 5;
		std::vector<float> p_5;
		p_5.push_back(0.109);
		p_5.push_back(0.08721);
		p_5.push_back(0.004464);

		std::vector<float> q_5;
		q_5.push_back(-2.259);
		q_5.push_back(0.03687);
		q_5.push_back(3.198);

		p_coeff.insert(std::make_pair(F5, p_5));
		q_coeff.insert(std::make_pair(F5, q_5));

		// FM 6
	    int F6 = 6;
		std::vector<float> p_6;
		p_6.push_back(0.2068);
		p_6.push_back(0.1425);
		p_6.push_back(0.008288);

		std::vector<float> q_6;
		q_6.push_back(-1.716);
		q_6.push_back(0.06436);
		q_6.push_back(2.523);

		p_coeff.insert(std::make_pair(F6, p_6));
		q_coeff.insert(std::make_pair(F6, q_6));

		// FM 7
	    int F7 = 7;
		std::vector<float> p_7;
		p_7.push_back(0.2112);
		p_7.push_back(0.1354);
		p_7.push_back(0.008423);

		std::vector<float> q_7;
		q_7.push_back(-1.745);
		q_7.push_back(0.06016);
		q_7.push_back(2.557);

		p_coeff.insert(std::make_pair(F7, p_7));
		q_coeff.insert(std::make_pair(F7, q_7));

		// FM 8
	    int F8 = 8;
		std::vector<float> p_8;
		p_8.push_back(9.049);
		p_8.push_back(0.297);
		p_8.push_back(0.3548);

		std::vector<float> q_8;
		q_8.push_back(-0.4453);
		q_8.push_back(0.1198);
		q_8.push_back(0.8447);

		p_coeff.insert(std::make_pair(F8, p_8));
		q_coeff.insert(std::make_pair(F8, q_8));

		// FM 9
	    int F9 = 9;
		std::vector<float> p_9;
		p_9.push_back(0.5313);
		p_9.push_back(0.1168);
		p_9.push_back(0.01201);

		std::vector<float> q_9;
		q_9.push_back(-1.73);
		q_9.push_back(0.03909);
		q_9.push_back(2.307);

		p_coeff.insert(std::make_pair(F9, p_9));
		q_coeff.insert(std::make_pair(F9, q_9));

		// FM 10
	    int F10 = 10;
		std::vector<float> p_10;
		p_10.push_back(0.2802);
		p_10.push_back(0.07786);
		p_10.push_back(0.01123);

		std::vector<float> q_10;
		q_10.push_back(-2.142);
		q_10.push_back(0.03045);
		q_10.push_back(3.078);

		p_coeff.insert(std::make_pair(F10, p_10));
		q_coeff.insert(std::make_pair(F10, q_10));

		// FM 11
	    int F11 = 11;
		std::vector<float> p_11;
		p_11.push_back(0.8929);
		p_11.push_back(0.1125);
		p_11.push_back(0.05442);

		std::vector<float> q_11;
		q_11.push_back(-1.132);
		q_11.push_back(0.05196);
		q_11.push_back(1.833);

		p_coeff.insert(std::make_pair(F11, p_11));
		q_coeff.insert(std::make_pair(F11, q_11));

        // FM 12
	    int F12 = 12;
		std::vector<float> p_12;
		p_12.push_back(0.2546);
		p_12.push_back(0.07656);
		p_12.push_back(0.01709);

		std::vector<float> q_12;
		q_12.push_back(-1.863);
		q_12.push_back(0.03771);
		q_12.push_back(3.049);

		p_coeff.insert(std::make_pair(F12, p_12));
		q_coeff.insert(std::make_pair(F12, q_12));

		// FM 13
	    int F13 = 13;
		std::vector<float> p_13;
		p_13.push_back(0.2105);
		p_13.push_back(0.07641);
		p_13.push_back(0.01401);

		std::vector<float> q_13;
		q_13.push_back(-2.136);
		q_13.push_back(0.03702);
		q_13.push_back(3.499);

		p_coeff.insert(std::make_pair(F13, p_13));
		q_coeff.insert(std::make_pair(F13, q_13));



        // ------------------------ Scottt & Burgan Models ------------------- //
		// Populate them
		// FM101
		int F101 = 101;
		std::vector<float> p_101;
		p_101.push_back(2.575);
		p_101.push_back(0.6665);
		p_101.push_back(0.1096);

		std::vector<float> q_101;
		q_101.push_back(-0.516);
		q_101.push_back(0.288);
		q_101.push_back(0.8972);

		p_coeff.insert(std::make_pair(F101, p_101));
		q_coeff.insert(std::make_pair(F101, q_101));
		
		
		// FM 102
		int F102 = 102;
		  std::vector<float> p_102;
		  p_102.push_back(0.4218);
		  p_102.push_back(0.2915);
		  p_102.push_back(0.01212);

		  std::vector<float> q_102;
		  q_102.push_back(-1.307);
		  q_102.push_back(0.1322);
		  q_102.push_back(1.887);

		  p_coeff.insert(std::make_pair(F102, p_102));
		  q_coeff.insert(std::make_pair(F102, q_102));

		  // FM 103
		  int F103 = 103;
		  std::vector<float> p_103;
		  p_103.push_back(0.1638);
		  p_103.push_back(0.2095);
		  p_103.push_back(0.007809);

		  std::vector<float> q_103;
		  q_103.push_back(-1.572);
		  q_103.push_back(0.1068);
		  q_103.push_back(2.409);

		  p_coeff.insert(std::make_pair(F103, p_103));
		  q_coeff.insert(std::make_pair(F103, q_103));


		  // FM 104
		  int F104 = 104;
		  std::vector<float> p_104;
		  p_104.push_back(0.07138);
		  p_104.push_back(0.1417);
		  p_104.push_back(0.002243);

		  std::vector<float> q_104;
		  q_104.push_back(-2.391);
		  q_104.push_back(0.05973);
		  q_104.push_back(3.334);

		  p_coeff.insert(std::make_pair(F104, p_104));
		  q_coeff.insert(std::make_pair(F104, q_104));

		  // FM 105
		  int F105 = 105;
		  std::vector<float> p_105;
		  p_105.push_back(0.03548);
		  p_105.push_back(0.07829);
		  p_105.push_back(0.001524);

		  std::vector<float> q_105;
		  q_105.push_back(-3.075);
		  q_105.push_back(0.03373);
		  q_105.push_back(4.391);

		  p_coeff.insert(std::make_pair(F105, p_105));
		  q_coeff.insert(std::make_pair(F105, q_105));

		  // FM 106
		  int F106 = 106;
		  std::vector<float> p_106;
		  p_106.push_back(0.02469);
		  p_106.push_back(0.08049);
		  p_106.push_back(0.0008245);

		  std::vector<float> q_106;
		  q_106.push_back(-4.006);
		  q_106.push_back(0.03019);
		  q_106.push_back(5.463);

		  p_coeff.insert(std::make_pair(F106, p_106));
		  q_coeff.insert(std::make_pair(F106, q_106));

		  // FM 107
		  int F107 = 107;
		  std::vector<float> p_107;
		  p_107.push_back(0.02329);
		  p_107.push_back(0.09086);
		  p_107.push_back(0.0009262);

		  std::vector<float> q_107;
		  q_107.push_back(-3.979);
		  q_107.push_back(0.03746);
		  q_107.push_back(5.587);

		  p_coeff.insert(std::make_pair(F107, p_107));
		  q_coeff.insert(std::make_pair(F107, q_107));

		  // FM 108
		  int F108 = 108;
		  std::vector<float> p_108;
		  p_108.push_back(0.02111);
		  p_108.push_back(0.07793);
		  p_108.push_back(0.001174);

		  std::vector<float> q_108;
		  q_108.push_back(-3.842);
		  q_108.push_back(0.03855);
		  q_108.push_back(5.817);

		  p_coeff.insert(std::make_pair(F108, p_108));
		  q_coeff.insert(std::make_pair(F108, q_108));

		  // FM 121
		  int F121 = 121;
		  std::vector<float> p_121;
		  p_121.push_back(0.613);
		  p_121.push_back(0.2139);
		  p_121.push_back(0.0187);

		  std::vector<float> q_121;
		  q_121.push_back(-1.267);
		  q_121.push_back(0.0922);
		  q_121.push_back(1.845);

		  p_coeff.insert(std::make_pair(F121, p_121));
		  q_coeff.insert(std::make_pair(F121, q_121));

		  // FM 122
		  int F122 = 122;
		  std::vector<float> p_122;
		  p_122.push_back(0.195);
		  p_122.push_back(0.1243);
		  p_122.push_back(0.006478);

		  std::vector<float> q_122;
		  q_122.push_back(-1.939);
		  q_122.push_back(0.05084);
		  q_122.push_back(2.706);

		  p_coeff.insert(std::make_pair(F122, p_122));
		  q_coeff.insert(std::make_pair(F122, q_122));

		  // FM 123
		  int F123 = 123;
		  std::vector<float> p_123;
		  p_123.push_back(0.06515);
		  p_123.push_back(0.07833);
		  p_123.push_back(0.002831);

		  std::vector<float> q_123;
		  q_123.push_back(-2.646);
		  q_123.push_back(0.03365);
		  q_123.push_back(3.788);

		  p_coeff.insert(std::make_pair(F123, p_123));
		  q_coeff.insert(std::make_pair(F123, q_123));

		  // FM 124
		  int F124 = 124;
		  std::vector<float> p_124;
		  p_124.push_back(0.07867);
		  p_124.push_back(0.07788);
		  p_124.push_back(0.003431);

		  std::vector<float> q_124;
		  q_124.push_back(-3.508);
		  q_124.push_back(0.03246);
		  q_124.push_back(5.098);

		  p_coeff.insert(std::make_pair(F124, p_124));
		  q_coeff.insert(std::make_pair(F124, q_124));

		  // FM 142
		  int F142 = 142;
		  std::vector<float> p_142;
		  p_142.push_back(0.3505);
		  p_142.push_back(0.07768);
		  p_142.push_back(0.01498);

		  std::vector<float> q_142;
		  q_142.push_back(-1.959);
		  q_142.push_back(0.0322);
		  q_142.push_back(2.819);

		  p_coeff.insert(std::make_pair(F142, p_142));
		  q_coeff.insert(std::make_pair(F142, q_142));

		  // FM 143
		  int F143 = 143;
		  std::vector<float> p_143;
		  p_143.push_back(1.748);
		  p_143.push_back(0.1589);
		  p_143.push_back(0.08249);

		  std::vector<float> q_143;
		  q_143.push_back(-0.938);
		  q_143.push_back(0.07674);
		  q_143.push_back(1.479);

		  p_coeff.insert(std::make_pair(F143, p_143));
		  q_coeff.insert(std::make_pair(F143, q_143));

		  // FM 144
		  int F144 = 144;
		  std::vector<float> p_144;
		  p_144.push_back(0.08116);
		  p_144.push_back(0.07849);
		  p_144.push_back(0.003353);

		  std::vector<float> q_144;
		  q_144.push_back(-2.452);
		  q_144.push_back(0.03347);
		  q_144.push_back(3.486);

		  p_coeff.insert(std::make_pair(F144, p_144));
		  q_coeff.insert(std::make_pair(F144, q_144));

		  // FM 145
		  int F145 = 145;
		  std::vector<float> p_145;
		  p_145.push_back(0.0483);
		  p_145.push_back(0.0781);
		  p_145.push_back(0.002783);

		  std::vector<float> q_145;
		  q_145.push_back(-2.796);
		  q_145.push_back(0.04029);
		  q_145.push_back(4.24);

		  p_coeff.insert(std::make_pair(F145, p_145));
		  q_coeff.insert(std::make_pair(F145, q_145));

		  // FM 146
		  int F146 = 146;
		  std::vector<float> p_146;
		  p_146.push_back(0.1248);
		  p_146.push_back(0.07783);
		  p_146.push_back(0.007999);

		  std::vector<float> q_146;
		  q_146.push_back(-2.121);
		  q_146.push_back(0.04111);
		  q_146.push_back(3.327);

		  p_coeff.insert(std::make_pair(F146, p_146));
		  q_coeff.insert(std::make_pair(F146, q_146));

		  // FM 146
		  int F147 = 147;
		  std::vector<float> p_147;
		  p_147.push_back(0.07431);
		  p_147.push_back(0.07791);
		  p_147.push_back(0.004384);

		  std::vector<float> q_147;
		  q_147.push_back(-2.668);
		  q_147.push_back(0.04027);
		  q_147.push_back(4.089);

		  p_coeff.insert(std::make_pair(F147, p_147));
		  q_coeff.insert(std::make_pair(F147, q_147));

		  // FM 148
		  int F148 = 148;
		  std::vector<float> p_148;
		  p_148.push_back(0.1238);
		  p_148.push_back(0.07772);
		  p_148.push_back(0.00647);

		  std::vector<float> q_148;
		  q_148.push_back(-2.506);
		  q_148.push_back(0.03664);
		  q_148.push_back(3.756);

		  p_coeff.insert(std::make_pair(F148, p_148));
		  q_coeff.insert(std::make_pair(F148, q_148));

		  // FM 149
		  int F149 = 149;
		  std::vector<float> p_149;
		  p_149.push_back(0.0667);
		  p_149.push_back(0.07779);
		  p_149.push_back(0.003506);

		  std::vector<float> q_149;
		  q_149.push_back(-3.209);
		  q_149.push_back(0.03641);
		  q_149.push_back(4.839);

		  p_coeff.insert(std::make_pair(F149, p_149));
		  q_coeff.insert(std::make_pair(F149, q_149));

		  // FM 161
		  int F161 = 161;
		  std::vector<float> p_161;
		  p_161.push_back(2.616);
		  p_161.push_back(0.1744);
		  p_161.push_back(0.1004);

		  std::vector<float> q_161;
		  q_161.push_back(-0.867);
		  q_161.push_back(0.08398);
		  q_161.push_back(1.326);

		  p_coeff.insert(std::make_pair(F161, p_161));
		  q_coeff.insert(std::make_pair(F161, q_161));

		  // FM 162
		  int F162 = 162;
		  std::vector<float> p_162;
		  p_162.push_back(0.6444);
		  p_162.push_back(0.1574);
		  p_162.push_back(0.02134);

		  std::vector<float> q_162;
		  q_162.push_back(-1.347);
		  q_162.push_back(0.0649);
		  q_162.push_back(1.958);

		  p_coeff.insert(std::make_pair(F162, p_162));
		  q_coeff.insert(std::make_pair(F162, q_162));

		  // FM 163
		  int F163 = 163;
		  std::vector<float> p_163;
		  p_163.push_back(0.08987);
		  p_163.push_back(0.07819);
		  p_163.push_back(0.003927);

		  std::vector<float> q_163;
		  q_163.push_back(-2.419);
		  q_163.push_back(0.03439);
		  q_163.push_back(3.493);

		  p_coeff.insert(std::make_pair(F163, p_163));
		  q_coeff.insert(std::make_pair(F163, q_163));

		  // FM 164
		  int F164 = 164;
		  std::vector<float> p_164;
		  p_164.push_back(0.1843);
		  p_164.push_back(0.07912);
		  p_164.push_back(0.005477);

		  std::vector<float> q_164;
		  q_164.push_back(-2.661);
		  q_164.push_back(0.0271);
		  q_164.push_back(3.579);

		  p_coeff.insert(std::make_pair(F164, p_164));
		  q_coeff.insert(std::make_pair(F164, q_164));

		  // FM 165
		  int F165 = 165;
		  std::vector<float> p_165;
		  p_165.push_back(0.3291);
		  p_165.push_back(0.07679);
		  p_165.push_back(0.02046);

		  std::vector<float> q_165;
		  q_165.push_back(-1.891);
		  q_165.push_back(0.03665);
		  q_165.push_back(3.027);

		  p_coeff.insert(std::make_pair(F165, p_165));
		  q_coeff.insert(std::make_pair(F165, q_165));

		  // FM 181
		  int F181 = 181;
		  std::vector<float> p_181;
		  p_181.push_back(14.96);
		  p_181.push_back(0.401);
		  p_181.push_back(1.983);

		  std::vector<float> q_181;
		  q_181.push_back(-0.1525);
		  q_181.push_back(0.4018);
		  q_181.push_back(0.4484);

		  p_coeff.insert(std::make_pair(F181, p_181));
		  q_coeff.insert(std::make_pair(F181, q_181));

		  // FM 182
		  int F182 = 182;
		  std::vector<float> p_182;
		  p_182.push_back(11.01);
		  p_182.push_back(0.3366);
		  p_182.push_back(0.7639);

		  std::vector<float> q_182;
		  q_182.push_back(-0.3704);
		  q_182.push_back(0.202);
		  q_182.push_back(0.6365);

		  p_coeff.insert(std::make_pair(F182, p_182));
		  q_coeff.insert(std::make_pair(F182, q_182));

		  // FM 183
		  int F183 = 183;
		  std::vector<float> p_183;
		  p_183.push_back(10.09);
		  p_183.push_back(0.3454);
		  p_183.push_back(0.584);

		  std::vector<float> q_183;
		  q_183.push_back(-0.4398);
		  q_183.push_back(0.1448);
		  q_183.push_back(0.7804);

		  p_coeff.insert(std::make_pair(F183, p_183));
		  q_coeff.insert(std::make_pair(F183, q_183));

		  // FM 185
		  int F185 = 185;
		  std::vector<float> p_185;
		  p_185.push_back(2.195);
		  p_185.push_back(0.1807);
		  p_185.push_back(0.07939);

		  std::vector<float> q_185;
		  q_185.push_back(-0.8838);
		  q_185.push_back(0.08234);
		  q_185.push_back(1.368);

		  p_coeff.insert(std::make_pair(F185, p_185));
		  q_coeff.insert(std::make_pair(F185, q_185));

		  // FM 186
		  int F186 = 186;
		  std::vector<float> p_186;
		  p_186.push_back(0.9183);
		  p_186.push_back(0.1224);
		  p_186.push_back(0.02969);

		  std::vector<float> q_186;
		  q_186.push_back(-1.306);
		  q_186.push_back(0.04578);
		  q_186.push_back(1.908);

		  p_coeff.insert(std::make_pair(F186, p_186));
		  q_coeff.insert(std::make_pair(F186, q_186));

		  // FM 188
		  int F188 = 188;
		  std::vector<float> p_188;
		  p_188.push_back(0.4789);
		  p_188.push_back(0.07735);
		  p_188.push_back(0.0195);

		  std::vector<float> q_188;
		  q_188.push_back(-1.68);
		  q_188.push_back(0.02617);
		  q_188.push_back(2.451);

		  p_coeff.insert(std::make_pair(F188, p_188));
		  q_coeff.insert(std::make_pair(F188, q_188));

		  // FM 189
		  int F189 = 189;
		  std::vector<float> p_189;
		  p_189.push_back(0.3229);
		  p_189.push_back(0.07716);
		  p_189.push_back(0.01346);

		  std::vector<float> q_189;
		  q_189.push_back(-1.916);
		  q_189.push_back(0.02961);
		  q_189.push_back(2.816);

		  p_coeff.insert(std::make_pair(F189, p_189));
		  q_coeff.insert(std::make_pair(F189, q_189));	
	}
	
	if (scenario == 2){

	      / -------------------- Rothermel Models -------------------- //
        // FM 1
	    int F1 = 1;
		std::vector<float> p_1;
		p_1.push_back(1.096);
		p_1.push_back(0.4853);
		p_1.push_back(0.01098);

		std::vector<float> q_1;
		q_1.push_back(-1.092);
		q_1.push_back(0.1645);
		q_1.push_back(1.528);

		p_coeff.insert(std::make_pair(F1, p_1));
		q_coeff.insert(std::make_pair(F1, q_1));

		// FM 2
	    int F2 = 2;
		std::vector<float> p_2;
		p_2.push_back(0.07801);
		p_2.push_back(0.08656);
		p_2.push_back(0.00167);

		std::vector<float> q_2;
		q_2.push_back(-3.121);
		q_2.push_back(0.02471);
		q_2.push_back(3.961);

		p_coeff.insert(std::make_pair(F2, p_2));
		q_coeff.insert(std::make_pair(F2, q_2));

		// FM 3
	    int F3 = 3;
		std::vector<float> p_3;
		p_3.push_back(0.05362);
		p_3.push_back(0.1074);
		p_3.push_back(0.002394);

		std::vector<float> q_3;
		q_3.push_back(-2.487);
		q_3.push_back(0.0484);
		q_3.push_back(3.61);

		p_coeff.insert(std::make_pair(F3, p_3));
		q_coeff.insert(std::make_pair(F3, q_3));

		// FM 4
	    int F4 = 4;
		std::vector<float> p_4;
		p_4.push_back(0.04678);
		p_4.push_back(0.07841);
		p_4.push_back(0.001866);

		std::vector<float> q_4;
		q_4.push_back(-3.694);
		q_4.push_back(0.03203);
		q_4.push_back(5.226);

		p_coeff.insert(std::make_pair(F4, p_4));
		q_coeff.insert(std::make_pair(F4, q_4));

		// FM 5
	    int F5 = 5;
		std::vector<float> p_5;
		p_5.push_back(0.2467);
		p_5.push_back(0.1115);
		p_5.push_back(0.009478);

		std::vector<float> q_5;
		q_5.push_back(-1.792);
		q_5.push_back(0.04541);
		q_5.push_back(2.582);

		p_coeff.insert(std::make_pair(F5, p_5));
		q_coeff.insert(std::make_pair(F5, q_5));

		// FM 6
	    int F6 = 6;
		std::vector<float> p_6;
		p_6.push_back(0.3728);
		p_6.push_back(0.1757);
		p_6.push_back(0.01455);

		std::vector<float> q_6;
		q_6.push_back(-1.39);
		q_6.push_back(0.08205);
		q_6.push_back(2.087);

		p_coeff.insert(std::make_pair(F6, p_6));
		q_coeff.insert(std::make_pair(F6, q_6));

		// FM 7
	    int F7 = 7;
		std::vector<float> p_7;
		p_7.push_back(0.3626);
		p_7.push_back(0.1566);
		p_7.push_back(0.01412);

		std::vector<float> q_7;
		q_7.push_back(-1.462);
		q_7.push_back(0.07187);
		q_7.push_back(2.173);

		p_coeff.insert(std::make_pair(F7, p_7));
		q_coeff.insert(std::make_pair(F7, q_7));

		// FM 8
	    int F8 = 8;
		std::vector<float> p_8;
		p_8.push_back(13.69);
		p_8.push_back(0.3576);
		p_8.push_back(0.6202);

		std::vector<float> q_8;
		q_8.push_back(-0.4336);
		q_8.push_back(0.1925);
		q_8.push_back(0.7098);

		p_coeff.insert(std::make_pair(F8, p_8));
		q_coeff.insert(std::make_pair(F8, q_8));

		// FM 9
	    int F9 = 9;
		std::vector<float> p_9;
		p_9.push_back(1.182);
		p_9.push_back(0.1509);
		p_9.push_back(0.02352);

		std::vector<float> q_9;
		q_9.push_back(-1.364);
		q_9.push_back(0.05486);
		q_9.push_back(1.823);

		p_coeff.insert(std::make_pair(F9, p_9));
		q_coeff.insert(std::make_pair(F9, q_9));

		// FM 10
	    int F10 = 10;
		std::vector<float> p_10;
		p_10.push_back(0.4209);
		p_10.push_back(0.07784);
		p_10.push_back(0.01691);

		std::vector<float> q_10;
		q_10.push_back(-1.852);
		q_10.push_back(0.03096);
		q_10.push_back(2.674);

		p_coeff.insert(std::make_pair(F10, p_10));
		q_coeff.insert(std::make_pair(F10, q_10));

		// FM 11
	    int F11 = 11;
		std::vector<float> p_11;
		p_11.push_back(1.371);
		p_11.push_back(0.1324);
		p_11.push_back(0.08474);

		std::vector<float> q_11;
		q_11.push_back(-0.9219);
		q_11.push_back(0.0677);
		q_11.push_back(1.553);

		p_coeff.insert(std::make_pair(F11, p_11));
		q_coeff.insert(std::make_pair(F11, q_11));

        // FM 12
	    int F12 = 12;
		std::vector<float> p_12;
		p_12.push_back(0.3396);
		p_12.push_back(0.07648);
		p_12.push_back(0.02283);

		std::vector<float> q_12;
		q_12.push_back(-1.665);
		q_12.push_back(0.03851);
		q_12.push_back(2.719);

		p_coeff.insert(std::make_pair(F12, p_12));
		q_coeff.insert(std::make_pair(F12, q_12));

		// FM 13
	    int F13 = 13;
		std::vector<float> p_13;
		p_13.push_back(0.2815);
		p_13.push_back(0.07639);
		p_13.push_back(0.01883);

		std::vector<float> q_13;
		q_13.push_back(-1.912);
		q_13.push_back(0.03705);
		q_13.push_back(3.135);

		p_coeff.insert(std::make_pair(F13, p_13));
		q_coeff.insert(std::make_pair(F13, q_13));



        // ------------------------ Scott & Burgan Models ------------------- //
		  // Populate them
		  // FM 101
		  int F101 = 101;
		  std::vector<float> p_101;
		  p_101.push_back(4.941);
		  p_101.push_back(0.7086);
		  p_101.push_back(0.2124);

		  std::vector<float> q_101;
		  q_101.push_back(-0.4535);
		  q_101.push_back(0.2682);
		  q_101.push_back(0.777);

		  p_coeff.insert(std::make_pair(F101, p_101));
		  q_coeff.insert(std::make_pair(F101, q_101));

		  // FM 102
		  int F102 = 102;
		  std::vector<float> p_102;
		  p_102.push_back(0.8112);
		  p_102.push_back(0.3045);
		  p_102.push_back(0.02528);

		  std::vector<float> q_102;
		  q_102.push_back(-1.036);
		  q_102.push_back(0.1385);
		  q_102.push_back(1.561);

		  p_coeff.insert(std::make_pair(F102, p_102));
		  q_coeff.insert(std::make_pair(F102, q_102));

		  // FM 103
		  int F103 = 103;
		  std::vector<float> p_103;
		  p_103.push_back(0.3609);
		  p_103.push_back(0.2318);
		  p_103.push_back(0.01738);

		  std::vector<float> q_103;
		  q_103.push_back(-1.273);
		  q_103.push_back(0.1135);
		  q_103.push_back(1.966);

		  p_coeff.insert(std::make_pair(F103, p_103));
		  q_coeff.insert(std::make_pair(F103, q_103));


		  // FM 104
		  int F104 = 104;
		  std::vector<float> p_104;
		  p_104.push_back(0.1486);
		  p_104.push_back(0.153);
		  p_104.push_back(0.004652);

		  std::vector<float> q_104;
		  q_104.push_back(-1.98);
		  q_104.push_back(0.06712);
		  q_104.push_back(2.744);

		  p_coeff.insert(std::make_pair(F104, p_104));
		  q_coeff.insert(std::make_pair(F104, q_104));

		  // FM 105
		  int F105 = 105;
		  std::vector<float> p_105;
		  p_105.push_back(0.0681);
		  p_105.push_back(0.07832);
		  p_105.push_back(0.002926);

		  std::vector<float> q_105;
		  q_105.push_back(-2.578);
		  q_105.push_back(0.03345);
		  q_105.push_back(3.694);

		  p_coeff.insert(std::make_pair(F105, p_105));
		  q_coeff.insert(std::make_pair(F105, q_105));

		  // FM 106
		  int F106 = 106;
		  std::vector<float> p_106;
		  p_106.push_back(0.04896);
		  p_106.push_back(0.07908);
		  p_106.push_back(0.001631);

		  std::vector<float> q_106;
		  q_106.push_back(-3.334);
		  q_106.push_back(0.03012);
		  q_106.push_back(4.525);

		  p_coeff.insert(std::make_pair(F106, p_106));
		  q_coeff.insert(std::make_pair(F106, q_106));

		  // FM 107
		  int F107 = 107;
		  std::vector<float> p_107;
		  p_107.push_back(0.03528);
		  p_107.push_back(0.07869);
		  p_107.push_back(0.001315);

		  std::vector<float> q_107;
		  q_107.push_back(-3.658);
		  q_107.push_back(0.03158);
		  q_107.push_back(5.09);

		  p_coeff.insert(std::make_pair(F107, p_107));
		  q_coeff.insert(std::make_pair(F107, q_107));

		  // FM 108
		  int F108 = 108;
		  std::vector<float> p_108;
		  p_108.push_back(0.04173);
		  p_108.push_back(0.07796);
		  p_108.push_back(0.002318);

		  std::vector<float> q_108;
		  q_108.push_back(-3.209);
		  q_108.push_back(0.03823);
		  q_108.push_back(4.86);

		  p_coeff.insert(std::make_pair(F108, p_108));
		  q_coeff.insert(std::make_pair(F108, q_108));

		  // FM 121

		  int F121 = 121;
		  std::vector<float> p_121;
		  p_121.push_back(1.64);
		  p_121.push_back(0.2795);
		  p_121.push_back(0.05015);

		  std::vector<float> q_121;
		  q_121.push_back(-0.9854);
		  q_121.push_back(0.1202);
		  q_121.push_back(1.392);

		  p_coeff.insert(std::make_pair(F121, p_121));
		  q_coeff.insert(std::make_pair(F121, q_121));

		  // FM 122

		  int F122 = 122;
		  std::vector<float> p_122;
		  p_122.push_back(0.4834);
		  p_122.push_back(0.1577);
		  p_122.push_back(0.01499);

		  std::vector<float> q_122;
		  q_122.push_back(-1.486);
		  q_122.push_back(0.06882);
		  q_122.push_back(2.084);

		  p_coeff.insert(std::make_pair(F122, p_122));
		  q_coeff.insert(std::make_pair(F122, q_122));

		  // FM 123

		  int F123 = 123;
		  std::vector<float> p_123;
		  p_123.push_back(0.1385);
		  p_123.push_back(0.08614);
		  p_123.push_back(0.005977);

		  std::vector<float> q_123;
		  q_123.push_back(-2.108);
		  q_123.push_back(0.03642);
		  q_123.push_back(3.029);

		  p_coeff.insert(std::make_pair(F123, p_123));
		  q_coeff.insert(std::make_pair(F123, q_123));

		  // FM 124

		  int F124 = 124;
		  std::vector<float> p_124;
		  p_124.push_back(0.1333);
		  p_124.push_back(0.07794);
		  p_124.push_back(0.005812);

		  std::vector<float> q_124;
		  q_124.push_back(-2.963);
		  q_124.push_back(0.03259);
		  q_124.push_back(4.318);

		  p_coeff.insert(std::make_pair(F124, p_124));
		  q_coeff.insert(std::make_pair(F124, q_124));

		  // FM 142

		  int F142 = 142;
		  std::vector<float> p_142;
		  p_142.push_back(3.016);
		  p_142.push_back(0.1405);
		  p_142.push_back(0.117);

		  std::vector<float> q_142;
		  q_142.push_back(-0.8923);
		  q_142.push_back(0.06068);
		  q_142.push_back(1.351);

		  p_coeff.insert(std::make_pair(F142, p_142));
		  q_coeff.insert(std::make_pair(F142, q_142));

		  // FM 143

		  int F143 = 143;
		  std::vector<float> p_143;
		  p_143.push_back(3.263);
		  p_143.push_back(0.1853);
		  p_143.push_back(0.1567);

		  std::vector<float> q_143;
		  q_143.push_back(-0.7716);
		  q_143.push_back(0.08453);
		  q_143.push_back(1.244);

		  p_coeff.insert(std::make_pair(F143, p_143));
		  q_coeff.insert(std::make_pair(F143, q_143));

		  // FM 144

		  int F144 = 144;
		  std::vector<float> p_144;
		  p_144.push_back(0.2209);
		  p_144.push_back(0.1077);
		  p_144.push_back(0.00858);

		  std::vector<float> q_144;
		  q_144.push_back(-1.841);
		  q_144.push_back(0.04621);
		  q_144.push_back(2.634);

		  p_coeff.insert(std::make_pair(F144, p_144));
		  q_coeff.insert(std::make_pair(F144, q_144));

		  // FM 145

		  int F145 = 145;
		  std::vector<float> p_145;
		  p_145.push_back(0.07661);
		  p_145.push_back(0.07807);
		  p_145.push_back(0.004418);

		  std::vector<float> q_145;
		  q_145.push_back(-2.425);
		  q_145.push_back(0.03922);
		  q_145.push_back(3.681);

		  p_coeff.insert(std::make_pair(F145, p_145));
		  q_coeff.insert(std::make_pair(F145, q_145));

		  // FM 146

		  int F146 = 146;
		  std::vector<float> p_146;
		  p_146.push_back(0.1924);
		  p_146.push_back(0.07805);
		  p_146.push_back(0.01232);

		  std::vector<float> q_146;
		  q_146.push_back(-1.864);
		  q_146.push_back(0.04114);
		  q_146.push_back(2.908);

		  p_coeff.insert(std::make_pair(F146, p_146));
		  q_coeff.insert(std::make_pair(F146, q_146));

		  // FM 146

		  int F147 = 147;
		  std::vector<float> p_147;
		  p_147.push_back(0.118);
		  p_147.push_back(0.07792);
		  p_147.push_back(0.006965);

		  std::vector<float> q_147;
		  q_147.push_back(-2.312);
		  q_147.push_back(0.03944);
		  q_147.push_back(3.548);

		  p_coeff.insert(std::make_pair(F147, p_147));
		  q_coeff.insert(std::make_pair(F147, q_147));

		  // FM 148

		  int F148 = 148;
		  std::vector<float> p_148;
		  p_148.push_back(0.1863);
		  p_148.push_back(0.07774);
		  p_148.push_back(0.009734);

		  std::vector<float> q_148;
		  q_148.push_back(-2.218);
		  q_148.push_back(0.03714);
		  q_148.push_back(3.323);

		  p_coeff.insert(std::make_pair(F148, p_148));
		  q_coeff.insert(std::make_pair(F148, q_148));

		  // FM 149

		  int F149 = 149;
		  std::vector<float> p_149;
		  p_149.push_back(0.1014);
		  p_149.push_back(0.07776);
		  p_149.push_back(0.005332);

		  std::vector<float> q_149;
		  q_149.push_back(-2.845);
		  q_149.push_back(0.03678);
		  q_149.push_back(4.283);

		  p_coeff.insert(std::make_pair(F149, p_149));
		  q_coeff.insert(std::make_pair(F149, q_149));

		  // FM 161

		  int F161 = 161;
		  std::vector<float> p_161;
		  p_161.push_back(5.028);
		  p_161.push_back(0.2037);
		  p_161.push_back(0.1978);

		  std::vector<float> q_161;
		  q_161.push_back(-0.7292);
		  q_161.push_back(0.08708);
		  q_161.push_back(1.115);

		  p_coeff.insert(std::make_pair(F161, p_161));
		  q_coeff.insert(std::make_pair(F161, q_161));

		  // FM 162

		  int F162 = 162;
		  std::vector<float> p_162;
		  p_162.push_back(1.128);
		  p_162.push_back(0.1848);
		  p_162.push_back(0.03716);

		  std::vector<float> q_162;
		  q_162.push_back(-1.119);
		  q_162.push_back(0.07944);
		  q_162.push_back(1.645);

		  p_coeff.insert(std::make_pair(F162, p_162));
		  q_coeff.insert(std::make_pair(F162, q_162));

		  // FM 163

		  int F163 = 163;
		  std::vector<float> p_163;
		  p_163.push_back(0.1554);
		  p_163.push_back(0.08058);
		  p_163.push_back(0.006821);

		  std::vector<float> q_163;
		  q_163.push_back(-2.03);
		  q_163.push_back(0.03518);
		  q_163.push_back(2.943);

		  p_coeff.insert(std::make_pair(F163, p_163));
		  q_coeff.insert(std::make_pair(F163, q_163));

		  // FM 164

		  int F164 = 164;
		  std::vector<float> p_164;
		  p_164.push_back(0.272);
		  p_164.push_back(0.07915);
		  p_164.push_back(0.008083);

		  std::vector<float> q_164;
		  q_164.push_back(-2.345);
		  q_164.push_back(0.02613);
		  q_164.push_back(3.187);

		  p_coeff.insert(std::make_pair(F164, p_164));
		  q_coeff.insert(std::make_pair(F164, q_164));

		  // FM 165

		  int F165 = 165;
		  std::vector<float> p_165;
		  p_165.push_back(0.4786);
		  p_165.push_back(0.0766);
		  p_165.push_back(0.02979);

		  std::vector<float> q_165;
		  q_165.push_back(-1.676);
		  q_165.push_back(0.03638);
		  q_165.push_back(2.685);

		  p_coeff.insert(std::make_pair(F165, p_165));
		  q_coeff.insert(std::make_pair(F165, q_165));

		  // FM 181

		  int F181 = 181;
		  std::vector<float> p_181;
		  p_181.push_back(21.49);
		  p_181.push_back(0.5351);
		  p_181.push_back(3.327);

		  std::vector<float> q_181;
		  q_181.push_back(-0.1561);
		  q_181.push_back(0.1462);
		  q_181.push_back(0.4506);

		  p_coeff.insert(std::make_pair(F181, p_181));
		  q_coeff.insert(std::make_pair(F181, q_181));

		  // FM 182

		  int F182 = 182;
		  std::vector<float> p_182;
		  p_182.push_back(11.87);
		  p_182.push_back(0.3804);
		  p_182.push_back(1.424);

		  std::vector<float> q_182;
		  q_182.push_back(-0.2634);
		  q_182.push_back(0.2267);
		  q_182.push_back(0.55);

		  p_coeff.insert(std::make_pair(F182, p_182));
		  q_coeff.insert(std::make_pair(F182, q_182));

		  // FM 183

		  int F183 = 183;
		  std::vector<float> p_183;
		  p_183.push_back(16.14);
		  p_183.push_back(0.4104);
		  p_183.push_back(0.9961);

		  std::vector<float> q_183;
		  q_183.push_back(-0.3704);
		  q_183.push_back(0.2021);
		  q_183.push_back(0.6365);

		  p_coeff.insert(std::make_pair(F183, p_183));
		  q_coeff.insert(std::make_pair(F183, q_183));

		  // FM 185

		  int F185 = 185;
		  std::vector<float> p_185;
		  p_185.push_back(4.008);
		  p_185.push_back(0.2228);
		  p_185.push_back(0.1393);

		  std::vector<float> q_185;
		  q_185.push_back(-0.7146);
		  q_185.push_back(0.09259);
		  q_185.push_back(1.158);

		  p_coeff.insert(std::make_pair(F185, p_185));
		  q_coeff.insert(std::make_pair(F185, q_185));

		  // FM 186

		  int F186 = 186;
		  std::vector<float> p_186;
		  p_186.push_back(1.783);
		  p_186.push_back(0.1537);
		  p_186.push_back(0.05478);

		  std::vector<float> q_186;
		  q_186.push_back(-1.056);
		  q_186.push_back(0.06279);
		  q_186.push_back(1.538);

		  p_coeff.insert(std::make_pair(F186, p_186));
		  q_coeff.insert(std::make_pair(F186, q_186));

		  // FM 188

		  int F188 = 188;
		  std::vector<float> p_188;
		  p_188.push_back(0.8048);
		  p_188.push_back(0.09159);
		  p_188.push_back(0.03249);

		  std::vector<float> q_188;
		  q_188.push_back(-1.364);
		  q_188.push_back(0.03338);
		  q_188.push_back(2.04);

		  p_coeff.insert(std::make_pair(F188, p_188));
		  q_coeff.insert(std::make_pair(F188, q_188));

		  // FM 189

		  int F189 = 189;
		  std::vector<float> p_189;
		  p_189.push_back(0.4263);
		  p_189.push_back(0.07714);
		  p_189.push_back(0.01775);

		  std::vector<float> q_189;
		  q_189.push_back(-1.758);
		  q_189.push_back(0.03012);
		  q_189.push_back(2.544);

		  p_coeff.insert(std::make_pair(F189, p_189));
		  q_coeff.insert(std::make_pair(F189, q_189));
		
	}

	if (scenario == 3){

		  / -------------------- Rothermel Models -------------------- //
        // FM 1
	    int F1 = 1;
		std::vector<float> p_1;
		p_1.push_back(1.282);
		p_1.push_back(0.5434);
		p_1.push_back(0.02194);

		std::vector<float> q_1;
		q_1.push_back(-0.7954);
		q_1.push_back(0.1957);
		q_1.push_back(1.232);

		p_coeff.insert(std::make_pair(F1, p_1));
		q_coeff.insert(std::make_pair(F1, q_1));

		// FM 2
	    int F2 = 2;
		std::vector<float> p_2;
		p_2.push_back(0.1341);
		p_2.push_back(0.1007);
		p_2.push_back(0.002717);

		std::vector<float> q_2;
		q_2.push_back(-2.682);
		q_2.push_back(0.02967);
		q_2.push_back(3.408);

		p_coeff.insert(std::make_pair(F2, p_2));
		q_coeff.insert(std::make_pair(F2, q_2));

		// FM 3
	    int F3 = 3;
		std::vector<float> p_3;
		p_3.push_back(0.07861);
		p_3.push_back(0.122);
		p_3.push_back(0.003385);

		std::vector<float> q_3;
		q_3.push_back(-2.229);
		q_3.push_back(0.05569);
		q_3.push_back(3.236);

		p_coeff.insert(std::make_pair(F3, p_3));
		q_coeff.insert(std::make_pair(F3, q_3));

		// FM 4
	    int F4 = 4;
		std::vector<float> p_4;
		p_4.push_back(0.06193);
		p_4.push_back(0.07843);
		p_4.push_back(0.002469);

		std::vector<float> q_4;
		q_4.push_back(-3.395);
		q_4.push_back(0.0322);
		q_4.push_back(4.805);

		p_coeff.insert(std::make_pair(F4, p_4));
		q_coeff.insert(std::make_pair(F4, q_4));

		// FM 5
	    int F5 = 5;
		std::vector<float> p_5;
		p_5.push_back(4.568);
		p_5.push_back(0.3497);
		p_5.push_back(0.1509);

		std::vector<float> q_5;
		q_5.push_back(-0.6288);
		q_5.push_back(0.1745);
		q_5.push_back(1.006);

		p_coeff.insert(std::make_pair(F5, p_5));
		q_coeff.insert(std::make_pair(F5, q_5));

		// FM 6
	    int F6 = 6;
		std::vector<float> p_6;
		p_6.push_back(0.5173);
		p_6.push_back(0.1939);
		p_6.push_back(0.02011);

		std::vector<float> q_6;
		q_6.push_back(-1.268);
		q_6.push_back(0.09199);
		q_6.push_back(1.897);

		p_coeff.insert(std::make_pair(F6, p_6));
		q_coeff.insert(std::make_pair(F6, q_6));

		// FM 7
	    int F7 = 7;
		std::vector<float> p_7;
		p_7.push_back(0.545);
		p_7.push_back(0.1736);
		p_7.push_back(0.02136);

		std::vector<float> q_7;
		q_7.push_back(-1.289);
		q_7.push_back(0.08053);
		q_7.push_back(1.933);

		p_coeff.insert(std::make_pair(F7, p_7));
		q_coeff.insert(std::make_pair(F7, q_7));

		// FM 8
	    int F8 = 8;
		std::vector<float> p_8;
		p_8.push_back(14.14);
		p_8.push_back(0.3467);
		p_8.push_back(0.9028);

		std::vector<float> q_8;
		q_8.push_back(-0.3582);
		q_8.push_back(0.1542);
		q_8.push_back(0.6369);

		p_coeff.insert(std::make_pair(F8, p_8));
		q_coeff.insert(std::make_pair(F8, q_8));

		// FM 9
	    int F9 = 9;
		std::vector<float> p_9;
		p_9.push_back(1.75);
		p_9.push_back(0.1687);
		p_9.push_back(0.03425);

		std::vector<float> q_9;
		q_9.push_back(-1.158);
		q_9.push_back(0.061);
		q_9.push_back(1.615);

		p_coeff.insert(std::make_pair(F9, p_9));
		q_coeff.insert(std::make_pair(F9, q_9));

		// FM 10
	    int F10 = 10;
		std::vector<float> p_10;
		p_10.push_back(0.5731);
		p_10.push_back(0.07802);
		p_10.push_back(0.02294);

		std::vector<float> q_10;
		q_10.push_back(-1.704);
		q_10.push_back(0.03053);
		q_10.push_back(2.448);

		p_coeff.insert(std::make_pair(F10, p_10));
		q_coeff.insert(std::make_pair(F10, q_10));

		// FM 11
	    int F11 = 11;
		std::vector<float> p_11;
		p_11.push_back(1.767);
		p_11.push_back(0.1428);
		p_11.push_back(0.1076);

		std::vector<float> q_11;
		q_11.push_back(-0.8643);
		q_11.push_back(0.07739);
		q_11.push_back(1.439);

		p_coeff.insert(std::make_pair(F11, p_11));
		q_coeff.insert(std::make_pair(F11, q_11));

        // FM 12
	    int F12 = 12;
		std::vector<float> p_12;
		p_12.push_back(0.4015);
		p_12.push_back(0.0767);
		p_12.push_back(0.02689);

		std::vector<float> q_12;
		q_12.push_back(-1.578);
		q_12.push_back(0.03833);
		q_12.push_back(2.586);

		p_coeff.insert(std::make_pair(F12, p_12));
		q_coeff.insert(std::make_pair(F12, q_12));

		// FM 13
	    int F13 = 13;
		std::vector<float> p_13;
		p_13.push_back(0.3397);
		p_13.push_back(0.07622);
		p_13.push_back(0.02271);

		std::vector<float> q_13;
		q_13.push_back(-1.799);
		q_13.push_back(0.03763);
		q_13.push_back(2.932);

		p_coeff.insert(std::make_pair(F13, p_13));
		q_coeff.insert(std::make_pair(F13, q_13));



        // ------------------------ Scottt & Burgan Models ------------------- //
		// Populate them
	  // FM 101
		int F101 = 101;
		std::vector<float> p_101;
		p_101.push_back(10.54);
		p_101.push_back(0.9248);
		p_101.push_back(0.6665);

		std::vector<float> q_101;
		q_101.push_back(-0.2781);
		q_101.push_back(0.4427);
		q_101.push_back(0.5494);

		p_coeff.insert(std::make_pair(F101, p_101));
		q_coeff.insert(std::make_pair(F101, q_101));

	  // FM 102
	  int F102 = 102;
	  std::vector<float> p_102;
	  p_102.push_back(9.046);
	  p_102.push_back(0.6935);
	  p_102.push_back(0.6243);

	  std::vector<float> q_102;
	  q_102.push_back(-0.2777);
	  q_102.push_back(0.4381);
	  q_102.push_back(0.5495);

	  p_coeff.insert(std::make_pair(F102, p_102));
	  q_coeff.insert(std::make_pair(F102, q_102));

	  // FM 103
	  int F103 = 103;
	  std::vector<float> p_103;
	  p_103.push_back(1.101);
	  p_103.push_back(0.2945);
	  p_103.push_back(0.05263);

	  std::vector<float> q_103;
	  q_103.push_back(-0.864);
	  q_103.push_back(0.1465);
	  q_103.push_back(1.422);

	  p_coeff.insert(std::make_pair(F103, p_103));
	  q_coeff.insert(std::make_pair(F103, q_103));


	  // FM 104
	  int F104 = 104;
	  std::vector<float> p_104;
	  p_104.push_back(2.828);
	  p_104.push_back(0.4191);
	  p_104.push_back(0.1083);

	  std::vector<float> q_104;
	  q_104.push_back(-0.6279);
	  q_104.push_back(0.2175);
	  q_104.push_back(1.004);

	  p_coeff.insert(std::make_pair(F104, p_104));
	  q_coeff.insert(std::make_pair(F104, q_104));

	  // FM 105
	  int F105 = 105;
	  std::vector<float> p_105;
	  p_105.push_back(0.2066);
	  p_105.push_back(0.09646);
	  p_105.push_back(0.008649);

	  std::vector<float> q_105;
	  q_105.push_back(-1.891);
	  q_105.push_back(0.04173);
	  q_105.push_back(2.707);

	  p_coeff.insert(std::make_pair(F105, p_105));
	  q_coeff.insert(std::make_pair(F105, q_105));

	  // FM 106
	  int F106 = 106;
	  std::vector<float> p_106;
	  p_106.push_back(0.1252);
	  p_106.push_back(0.07909);
	  p_106.push_back(0.004167);

	  std::vector<float> q_106;
	  q_106.push_back(-2.484);
	  q_106.push_back(0.0302);
	  q_106.push_back(3.375);

	  p_coeff.insert(std::make_pair(F106, p_106));
	  q_coeff.insert(std::make_pair(F106, q_106));

	  // FM 107
	  int F107 = 107;
	  std::vector<float> p_107;
	  p_107.push_back(0.2693);
	  p_107.push_back(0.1079);
	  p_107.push_back(0.009412);

	  std::vector<float> q_107;
	  q_107.push_back(-1.823);
	  q_107.push_back(0.04448);
	  q_107.push_back(2.545);

	  p_coeff.insert(std::make_pair(F107, p_107));
	  q_coeff.insert(std::make_pair(F107, q_107));

	  // FM 108
	  int F108 = 108;
	  std::vector<float> p_108;
	  p_108.push_back(0.09611);
	  p_108.push_back(0.07795);
	  p_108.push_back(0.005342);

	  std::vector<float> q_108;
	  q_108.push_back(-2.517);
	  q_108.push_back(0.03868);
	  q_108.push_back(3.788);

	  p_coeff.insert(std::make_pair(F108, p_108));
	  q_coeff.insert(std::make_pair(F108, q_108));

	  // FM 121

	  int F121 = 121;
	  std::vector<float> p_121;
	  p_121.push_back(25.52);
	  p_121.push_back(0.7635);
	  p_121.push_back(1.428);

	  std::vector<float> q_121;
	  q_121.push_back(-0.1525);
	  q_121.push_back(0.4017);
	  q_121.push_back(0.4484);

	  p_coeff.insert(std::make_pair(F121, p_121));
	  q_coeff.insert(std::make_pair(F121, q_121));

	  // FM 122

	  int F122 = 122;
	  std::vector<float> p_122;
	  p_122.push_back(8.922);
	  p_122.push_back(0.4899);
	  p_122.push_back(0.3328);

	  std::vector<float> q_122;
	  q_122.push_back(-0.4465);
	  q_122.push_back(0.1749);
	  q_122.push_back(0.7789);

	  p_coeff.insert(std::make_pair(F122, p_122));
	  q_coeff.insert(std::make_pair(F122, q_122));

	  // FM 123

	  int F123 = 123;
	  std::vector<float> p_123;
	  p_123.push_back(5.884);
	  p_123.push_back(0.3888);
	  p_123.push_back(0.2259);

	  std::vector<float> q_123;
	  q_123.push_back(-0.5876);
	  q_123.push_back(0.1976);
	  q_123.push_back(0.8988);

	  p_coeff.insert(std::make_pair(F123, p_123));
	  q_coeff.insert(std::make_pair(F123, q_123));

	  // FM 124

	  int F124 = 124;
	  std::vector<float> p_124;
	  p_124.push_back(0.6756);
	  p_124.push_back(0.07785);
	  p_124.push_back(0.02949);

	  std::vector<float> q_124;
	  q_124.push_back(-1.518);
	  q_124.push_back(0.03362);
	  q_124.push_back(2.179);

	  p_coeff.insert(std::make_pair(F124, p_124));
	  q_coeff.insert(std::make_pair(F124, q_124));

	  // FM 142

	  int F142 = 142;
	  std::vector<float> p_142;
	  p_142.push_back(10.39);
	  p_142.push_back(0.2182);
	  p_142.push_back(0.3807);

	  std::vector<float> q_142;
	  q_142.push_back(-0.5648);
	  q_142.push_back(0.1069);
	  q_142.push_back(0.9037);

	  p_coeff.insert(std::make_pair(F142, p_142));
	  q_coeff.insert(std::make_pair(F142, q_142));

	  // FM 143

	  int F143 = 143;
	  std::vector<float> p_143;
	  p_143.push_back(5.59);
	  p_143.push_back(0.2107);
	  p_143.push_back(0.254);

	  std::vector<float> q_143;
	  q_143.push_back(-0.6817);
	  q_143.push_back(0.1007);
	  q_143.push_back(1.064);

	  p_coeff.insert(std::make_pair(F143, p_143));
	  q_coeff.insert(std::make_pair(F143, q_143));

	  // FM 144

	  int F144 = 144;
	  std::vector<float> p_144;
	  p_144.push_back(5.257);
	  p_144.push_back(0.3809);
	  p_144.push_back(0.1807);

	  std::vector<float> q_144;
	  q_144.push_back(-0.6294);
	  q_144.push_back(0.1919);
	  q_144.push_back(0.9523);

	  p_coeff.insert(std::make_pair(F144, p_144));
	  q_coeff.insert(std::make_pair(F144, q_144));

	  // FM 145

	  int F145 = 145;
	  std::vector<float> p_145;
	  p_145.push_back(0.1073);
	  p_145.push_back(0.0781);
	  p_145.push_back(0.00619);

	  std::vector<float> q_145;
	  q_145.push_back(-2.173);
	  q_145.push_back(0.04044);
	  q_145.push_back(3.293);

	  p_coeff.insert(std::make_pair(F145, p_145));
	  q_coeff.insert(std::make_pair(F145, q_145));

	  // FM 146

	  int F146 = 146;
	  std::vector<float> p_146;
	  p_146.push_back(0.2664);
	  p_146.push_back(0.07788);
	  p_146.push_back(0.01707);

	  std::vector<float> q_146;
	  q_146.push_back(-1.698);
	  q_146.push_back(0.03934);
	  q_146.push_back(2.652);

	  p_coeff.insert(std::make_pair(F146, p_146));
	  q_coeff.insert(std::make_pair(F146, q_146));

	  // FM 146

	  int F147 = 147;
	  std::vector<float> p_147;
	  p_147.push_back(0.1651);
	  p_147.push_back(0.07791);
	  p_147.push_back(0.009743);

	  std::vector<float> q_147;
	  q_147.push_back(-2.084);
	  q_147.push_back(0.03998);
	  q_147.push_back(3.193);

	  p_coeff.insert(std::make_pair(F147, p_147));
	  q_coeff.insert(std::make_pair(F147, q_147));

	  // FM 148

	  int F148 = 148;
	  std::vector<float> p_148;
	  p_148.push_back(0.2704);
	  p_148.push_back(0.07765);
	  p_148.push_back(0.0141);

	  std::vector<float> q_148;
	  q_148.push_back(-1.978);
	  q_148.push_back(0.03601);
	  q_148.push_back(2.975);

	  p_coeff.insert(std::make_pair(F148, p_148));
	  q_coeff.insert(std::make_pair(F148, q_148));

	  // FM 149

	  int F149 = 149;
	  std::vector<float> p_149;
	  p_149.push_back(0.1391);
	  p_149.push_back(0.07771);
	  p_149.push_back(0.007329);

	  std::vector<float> q_149;
	  q_149.push_back(-2.626);
	  q_149.push_back(0.03657);
	  q_149.push_back(3.945);

	  p_coeff.insert(std::make_pair(F149, p_149));
	  q_coeff.insert(std::make_pair(F149, q_149));

	  // FM 161

	  int F161 = 161;
	  std::vector<float> p_161;
	  p_161.push_back(3180);
	  p_161.push_back(1.235);
	  p_161.push_back(3.332);

	  std::vector<float> q_161;
	  q_161.push_back(-0.1562);
	  q_161.push_back(0.1467);
	  q_161.push_back(0.4505);

	  p_coeff.insert(std::make_pair(F161, p_161));
	  q_coeff.insert(std::make_pair(F161, q_161));

	  // FM 162

	  int F162 = 162;
	  std::vector<float> p_162;
	  p_162.push_back(1.631);
	  p_162.push_back(0.2024);
	  p_162.push_back(0.05519);

	  std::vector<float> q_162;
	  q_162.push_back(-0.9908);
	  q_162.push_back(0.08943);
	  q_162.push_back(1.472);

	  p_coeff.insert(std::make_pair(F162, p_162));
	  q_coeff.insert(std::make_pair(F162, q_162));

	  // FM 163

	  int F163 = 163;
	  std::vector<float> p_163;
	  p_163.push_back(0.3075);
	  p_163.push_back(0.09702);
	  p_163.push_back(0.01307);

	  std::vector<float> q_163;
	  q_163.push_back(-1.705);
	  q_163.push_back(0.04277);
	  q_163.push_back(2.452);

	  p_coeff.insert(std::make_pair(F163, p_163));
	  q_coeff.insert(std::make_pair(F163, q_163));

	  // FM 164

	  int F164 = 164;
	  std::vector<float> p_164;
	  p_164.push_back(0.4047);
	  p_164.push_back(0.0793);
	  p_164.push_back(0.01199);

	  std::vector<float> q_164;
	  q_164.push_back(-2.052);
	  q_164.push_back(0.02663);
	  q_164.push_back(2.765);

	  p_coeff.insert(std::make_pair(F164, p_164));
	  q_coeff.insert(std::make_pair(F164, q_164));

	  // FM 165

	  int F165 = 165;
	  std::vector<float> p_165;
	  p_165.push_back(0.6448);
	  p_165.push_back(0.07668);
	  p_165.push_back(0.03998);

	  std::vector<float> q_165;
	  q_165.push_back(-1.521);
	  q_165.push_back(0.03838);
	  q_165.push_back(2.417);

	  p_coeff.insert(std::make_pair(F165, p_165));
	  q_coeff.insert(std::make_pair(F165, q_165));

	  // FM 181

	  int F181 = 181;
	  std::vector<float> p_181;
	  p_181.push_back(1800);
	  p_181.push_back(1.178);
	  p_181.push_back(4.999);

	  std::vector<float> q_181;
	  q_181.push_back(0.0);
	  q_181.push_back(0.0);
	  q_181.push_back(0.0);

	  p_coeff.insert(std::make_pair(F181, p_181));
	  q_coeff.insert(std::make_pair(F181, q_181));

	  // FM 182

	  int F182 = 182;
	  std::vector<float> p_182;
	  p_182.push_back(38.8);
	  p_182.push_back(0.5491);
	  p_182.push_back(1.989);

	  std::vector<float> q_182;
	  q_182.push_back(-0.2492);
	  q_182.push_back(0.1422);
	  q_182.push_back(0.5509);

	  p_coeff.insert(std::make_pair(F182, p_182));
	  q_coeff.insert(std::make_pair(F182, q_182));

	  // FM 183

	  int F183 = 183;
	  std::vector<float> p_183;
	  p_183.push_back(11.37);
	  p_183.push_back(0.3397);
	  p_183.push_back(1.244);

	  std::vector<float> q_183;
	  q_183.push_back(-0.3582);
	  q_183.push_back(0.1543);
	  q_183.push_back(0.6369);

	  p_coeff.insert(std::make_pair(F183, p_183));
	  q_coeff.insert(std::make_pair(F183, q_183));

	  // FM 185

	  int F185 = 185;
	  std::vector<float> p_185;
	  p_185.push_back(5.163);
	  p_185.push_back(0.2396);
	  p_185.push_back(0.1943);

	  std::vector<float> q_185;
	  q_185.push_back(-0.6817);
	  q_185.push_back(0.1007);
	  q_185.push_back(1.064);

	  p_coeff.insert(std::make_pair(F185, p_185));
	  q_coeff.insert(std::make_pair(F185, q_185));

	  // FM 186

	  int F186 = 186;
	  std::vector<float> p_186;
	  p_186.push_back(2.555);
	  p_186.push_back(0.171);
	  p_186.push_back(0.07786);

	  std::vector<float> q_186;
	  q_186.push_back(-0.9478);
	  q_186.push_back(0.07391);
	  q_186.push_back(1.375);

	  p_coeff.insert(std::make_pair(F186, p_186));
	  q_coeff.insert(std::make_pair(F186, q_186));

	  // FM 188

	  int F188 = 188;
	  std::vector<float> p_188;
	  p_188.push_back(1.294);
	  p_188.push_back(0.1085);
	  p_188.push_back(0.04999);

	  std::vector<float> q_188;
	  q_188.push_back(-1.184);
	  q_188.push_back(0.04144);
	  q_188.push_back(1.768);

	  p_coeff.insert(std::make_pair(F188, p_188));
	  q_coeff.insert(std::make_pair(F188, q_188));

	  // FM 189

	  int F189 = 189;
	  std::vector<float> p_189;
	  p_189.push_back(0.534);
	  p_189.push_back(0.07749);
	  p_189.push_back(0.02216);

	  std::vector<float> q_189;
	  q_189.push_back(-1.624);
	  q_189.push_back(0.02893);
	  q_189.push_back(2.369);

	  p_coeff.insert(std::make_pair(F189, p_189));
	  q_coeff.insert(std::make_pair(F189, q_189));
		
	}
	
	if (scenario == 4){
	      / -------------------- Rothermel Models -------------------- //
        // FM 1
	    int F1 = 1;
		std::vector<float> p_1;
		p_1.push_back(0.);
		p_1.push_back(0.);
		p_1.push_back(-1.);

		std::vector<float> q_1;
		q_1.push_back(0.);
		q_1.push_back(0.);
		q_1.push_back(0.);

		p_coeff.insert(std::make_pair(F1, p_1));
		q_coeff.insert(std::make_pair(F1, q_1));

		// FM 2
	    int F2 = 2;
		std::vector<float> p_2;
		p_2.push_back(0.4966);
		p_2.push_back(0.1534);
		p_2.push_back(0.007671);

		std::vector<float> q_2;
		q_2.push_back(-1.824);
		q_2.push_back(0.05303);
		q_2.push_back(2.322);

		p_coeff.insert(std::make_pair(F2, p_2));
		q_coeff.insert(std::make_pair(F2, q_2));

		// FM 3
	    int F3 = 3;
		std::vector<float> p_3;
		p_3.push_back(0.09557);
		p_3.push_back(0.1278);
		p_3.push_back(0.004065);

		std::vector<float> q_3;
		q_3.push_back(-2.123);
		q_3.push_back(0.05895);
		q_3.push_back(3.07);

		p_coeff.insert(std::make_pair(F3, p_3));
		q_coeff.insert(std::make_pair(F3, q_3));

		// FM 4
	    int F4 = 4;
		std::vector<float> p_4;
		p_4.push_back(0.1144);
		p_4.push_back(0.07845);
		p_4.push_back(0.004562);

		std::vector<float> q_4;
		q_4.push_back(-2.67);
		q_4.push_back(0.03269);
		q_4.push_back(3.757);

		p_coeff.insert(std::make_pair(F4, p_4));
		q_coeff.insert(std::make_pair(F4, q_4));

		// FM 5
	    int F5 = 5;
		std::vector<float> p_5;
		p_5.push_back(5.348);
		p_5.push_back(0.3569);
		p_5.push_back(0.1992);

		std::vector<float> q_5;
		q_5.push_back(-0.6505);
		q_5.push_back(0.1741);
		q_5.push_back(0.9547);

		p_coeff.insert(std::make_pair(F5, p_5));
		q_coeff.insert(std::make_pair(F5, q_5));

		// FM 6
	    int F6 = 6;
		std::vector<float> p_6;
		p_6.push_back(0.6111);
		p_6.push_back(0.2006);
		p_6.push_back(0.02394);

		std::vector<float> q_6;
		q_6.push_back(-1.205);
		q_6.push_back(0.09353);
		q_6.push_back(1.814);

		p_coeff.insert(std::make_pair(F6, p_6));
		q_coeff.insert(std::make_pair(F6, q_6));

		// FM 7
	    int F7 = 7;
		std::vector<float> p_7;
		p_7.push_back(0.7719);
		p_7.push_back(0.1894);
		p_7.push_back(0.02961);

		std::vector<float> q_7;
		q_7.push_back(-1.197);
		q_7.push_back(0.09073);
		q_7.push_back(1.757);

		p_coeff.insert(std::make_pair(F7, p_7));
		q_coeff.insert(std::make_pair(F7, q_7));

		// FM 8
	    int F8 = 8;
		std::vector<float> p_8;
		p_8.push_back(11.76);
		p_8.push_back(0.3234);
		p_8.push_back(1.104);

		std::vector<float> q_8;
		q_8.push_back(-0.3582);
		q_8.push_back(0.1542);
		q_8.push_back(0.6369);

		p_coeff.insert(std::make_pair(F8, p_8));
		q_coeff.insert(std::make_pair(F8, q_8));

		// FM 9
	    int F9 = 9;
		std::vector<float> p_9;
		p_9.push_back(2.14);
		p_9.push_back()0.1758;
		p_9.push_back(0.04162);

		std::vector<float> q_9;
		q_9.push_back(-1.145);
		q_9.push_back(0.06512);
		q_9.push_back(1.539);

		p_coeff.insert(std::make_pair(F9, p_9));
		q_coeff.insert(std::make_pair(F9, q_9));

		// FM 10
	    int F10 = 10;
		std::vector<float> p_10;
		p_10.push_back(0.7061);
		p_10.push_back(0.07767);
		p_10.push_back(0.02827);

		std::vector<float> q_10;
		q_10.push_back(-1.611);
		q_10.push_back(0.02927);
		q_10.push_back(2.325);

		p_coeff.insert(std::make_pair(F10, p_10));
		q_coeff.insert(std::make_pair(F10, q_10));

		// FM 11
	    int F11 = 11;
		std::vector<float> p_11;
		p_11.push_back(4.1);
		p_11.push_back(0.2036);
		p_11.push_back(0.2416);

		std::vector<float> q_11;
		q_11.push_back(-0.6561);
		q_11.push_back(0.1112);
		q_11.push_back(1.105);

		p_coeff.insert(std::make_pair(F11, p_11));
		q_coeff.insert(std::make_pair(F11, q_11));

        // FM 12
	    int F12 = 12;
		std::vector<float> p_12;
		p_12.push_back(0.4626);
		p_12.push_back(0.0768);
		p_12.push_back(0.03087);

		std::vector<float> q_12;
		q_12.push_back(-1.511);
		q_12.push_back(0.03849);
		q_12.push_back(2.477);

		p_coeff.insert(std::make_pair(F12, p_12));
		q_coeff.insert(std::make_pair(F12, q_12));

		// FM 13
	    int F13 = 13;
		std::vector<float> p_13;
		p_13.push_back(0.3841);
		p_13.push_back(0.07607);
		p_13.push_back(0.02572);

		std::vector<float> q_13;
		q_13.push_back(-1.74);
		q_13.push_back(0.0363);
		q_13.push_back(2.846);

		p_coeff.insert(std::make_pair(F13, p_13));
		q_coeff.insert(std::make_pair(F13, q_13));



        // ------------------------ Scottt & Burgan Models ------------------- //
		// Populate them
	  // FM 101
		int F101 = 101;
		std::vector<float> p_101;
		std::vector<float> q_101;
		p_101.push_back(0.);
  	    p_101.push_back(0.);
		p_101.push_back(-1.);

		q_101.push_back(0.);
	    q_101.push_back(0.);
	    q_101.push_back(0.);
		p_coeff.insert(std::make_pair(F101, p_101));
		q_coeff.insert(std::make_pair(F101, q_101));

	  // FM 102
	  int F102 = 102;
	  std::vector<float> p_102;
	  std::vector<float> q_102;
	  p_102.push_back(0.);
  	  p_102.push_back(0.);
	  p_102.push_back(-1.);
	  q_102.push_back(0.);
	  q_102.push_back(0.);
	  q_102.push_back(0.);
	  p_coeff.insert(std::make_pair(F102, p_102));
	  q_coeff.insert(std::make_pair(F102, q_102));

	  // FM 103
	  int F103 = 103;
	  std::vector<float> p_103;
	  p_103.push_back(1.02e+04);
	  p_103.push_back(2.51);
	  p_103.push_back(10);

	  std::vector<float> q_103;
	  q_103.push_back(-0.3984);
	  q_103.push_back(0.6339);
	  q_103.push_back(0.3173);

	  p_coeff.insert(std::make_pair(F103, p_103));
	  q_coeff.insert(std::make_pair(F103, q_103));


	  // FM 104
	  int F104 = 104;
	  std::vector<float> p_104;
	  p_104.push_back(1706);
	  p_104.push_back(5.835);
	  p_104.push_back(4.999);

	  std::vector<float> q_104;
	  q_104.push_back(-0.3984);
	  q_104.push_back(0.6331);
	  q_104.push_back(0.3173);

	  p_coeff.insert(std::make_pair(F104, p_104));
	  q_coeff.insert(std::make_pair(F104, q_104));

	  // FM 105
	  int F105 = 105;
	  std::vector<float> p_105;
	  p_105.push_back(24.51);
	  p_105.push_back(0.6818);
	  p_105.push_back(1.665);

	  std::vector<float> q_105;
	  q_105.push_back(-0.1528);
	  q_105.push_back(0.4083);
	  q_105.push_back(0.4483);

	  p_coeff.insert(std::make_pair(F105, p_105));
	  q_coeff.insert(std::make_pair(F105, q_105));

	  // FM 106
	  int F106 = 106;
	  std::vector<float> p_106;
	  std::vector<float> q_106;
	  p_106.push_back(0.);
  	  p_106.push_back(0.);
      p_106.push_back(-1.);
	  q_106.push_back(0.);
	  q_106.push_back(0.);
	  q_106.push_back(0.);
	  p_coeff.insert(std::make_pair(F106, p_106));
	  q_coeff.insert(std::make_pair(F106, q_106));

	  // FM 107
	  int F107 = 107;
	  std::vector<float> p_107;
	  p_107.push_back(8.706);
	  p_107.push_back(0.397);
	  p_107.push_back(0.3983);

	  std::vector<float> q_107;
	  q_107.push_back(-0.5259);
	  q_107.push_back(0.19);
	  q_107.push_back(0.7787);

	  p_coeff.insert(std::make_pair(F107, p_107));
	  q_coeff.insert(std::make_pair(F107, q_107));

	  // FM 108
	  int F108 = 108;
	  std::vector<float> p_108;
	  p_108.push_back(29.63);
	  p_108.push_back(0.6425);
	  p_108.push_back(1.246);

	  std::vector<float> q_108;
	  q_108.push_back(-0.2634);
	  q_108.push_back(0.2268);
	  q_108.push_back(0.55);

	  p_coeff.insert(std::make_pair(F108, p_108));
	  q_coeff.insert(std::make_pair(F108, q_108));

	  // FM 121

	  int F121 = 121;
	  std::vector<float> p_121;
	  p_121.push_back(1.02e+04);
	  p_121.push_back(2.505);
	  p_121.push_back(10);

	  std::vector<float> q_121;
	  q_121.push_back(-0.3942);
	  q_121.push_back(0.6206);
	  q_121.push_back(0.3174);

	  p_coeff.insert(std::make_pair(F121, p_121));
	  q_coeff.insert(std::make_pair(F121, q_121));

	  // FM 122

	  int F122 = 122;
	  std::vector<float> p_122;
	  p_122.push_back(25.02);
	  p_122.push_back(0.7935);
	  p_122.push_back(2);

	  std::vector<float> q_122;
	  q_122.push_back(-0.153);
	  q_122.push_back(0.4129);
	  q_122.push_back(0.4483);

	  p_coeff.insert(std::make_pair(F122, p_122));
	  q_coeff.insert(std::make_pair(F122, q_122));

	  // FM 123

	  int F123 = 123;
	  std::vector<float> p_123;
	  p_123.push_back(2423);
	  p_123.push_back(5.898);
	  p_123.push_back(3.333);

	  std::vector<float> q_123;
	  q_123.push_back(-0.271);
	  q_123.push_back(0.2323);
	  q_123.push_back(0.4489);

	  p_coeff.insert(std::make_pair(F123, p_123));
	  q_coeff.insert(std::make_pair(F123, q_123));

	  // FM 124

	  int F124 = 124;
	  std::vector<float> p_124;
	  p_124.push_back(3.313);
	  p_124.push_back(0.1361);
	  p_124.push_back(0.1345);

	  std::vector<float> q_124;
	  q_124.push_back(-0.8735);
	  q_124.push_back(0.06301);
	  q_124.push_back(1.305);

	  p_coeff.insert(std::make_pair(F124, p_124));
	  q_coeff.insert(std::make_pair(F124, q_124));

	  // FM 142

	  int F142 = 142;
	  std::vector<float> p_142;
	  p_142.push_back(23.95);
	  p_142.push_back(0.3007);
	  p_142.push_back(0.9045);

	  std::vector<float> q_142;
	  q_142.push_back(-0.4438);
	  q_142.push_back(0.1155);
	  q_142.push_back(0.7152);

	  p_coeff.insert(std::make_pair(F142, p_142));
	  q_coeff.insert(std::make_pair(F142, q_142));

	  // FM 143

	  int F143 = 143;
	  std::vector<float> p_143;
	  p_143.push_back(8.823);
	  p_143.push_back(0.2347);
	  p_143.push_back(0.3672);

	  std::vector<float> q_143;
	  q_143.push_back(-0.602);
	  q_143.push_back(0.1209);
	  q_143.push_back(0.9543);

	  p_coeff.insert(std::make_pair(F143, p_143));
	  q_coeff.insert(std::make_pair(F143, q_143));

	  // FM 144

	  int F144 = 144;
	  std::vector<float> p_144;
	  p_144.push_back(6.334);
	  p_144.push_back(0.3903);
	  p_144.push_back(0.2486);

	  std::vector<float> q_144;
	  q_144.push_back(-0.5751);
	  q_144.push_back(0.1717);
	  q_144.push_back(0.8994);

	  p_coeff.insert(std::make_pair(F144, p_144));
	  q_coeff.insert(std::make_pair(F144, q_144));

	  // FM 145

	  int F145 = 145;
	  std::vector<float> p_145;
	  p_145.push_back(0.7965);
	  p_145.push_back(0.168);
	  p_145.push_back(0.04058);

	  std::vector<float> q_145;
	  q_145.push_back(-1.156);
	  q_145.push_back(0.08584);
	  q_145.push_back(1.756);

	  p_coeff.insert(std::make_pair(F145, p_145));
	  q_coeff.insert(std::make_pair(F145, q_145));

	  // FM 146

	  int F146 = 146;
	  std::vector<float> p_146;
	  p_146.push_back(0.3421);
	  p_146.push_back(0.07793);
	  p_146.push_back(0.02181);

	  std::vector<float> q_146;
	  q_146.push_back(-1.558);
	  q_146.push_back(0.0402);
	  q_146.push_back(2.452);

	  p_coeff.insert(std::make_pair(F146, p_146));
	  q_coeff.insert(std::make_pair(F146, q_146));

	  // FM 146

	  int F147 = 147;
	  std::vector<float> p_147;
	  p_147.push_back(0.9702);
	  p_147.push_back(0.1314);
	  p_147.push_back(0.05167);

	  std::vector<float> q_147;
	  q_147.push_back(-1.118);
	  q_147.push_back(0.0653);
	  q_147.push_back(1.746);

	  p_coeff.insert(std::make_pair(F147, p_147));
	  q_coeff.insert(std::make_pair(F147, q_147));

	  // FM 148

	  int F148 = 148;
	  std::vector<float> p_148;
	  p_148.push_back(1.44);
	  p_148.push_back(0.1175);
	  p_148.push_back(0.07096);

	  std::vector<float> q_148;
	  q_148.push_back(-1.079);
	  q_148.push_back(0.05247);
	  q_148.push_back(1.652);

	  p_coeff.insert(std::make_pair(F148, p_148));
	  q_coeff.insert(std::make_pair(F148, q_148));

	  // FM 149

	  int F149 = 149;
	  std::vector<float> p_149;
	  p_149.push_back(0.4281);
	  p_149.push_back(0.07778);
	  p_149.push_back(0.02246);

	  std::vector<float> q_149;
	  q_149.push_back(-1.631);
	  q_149.push_back(0.03661);
	  q_149.push_back(2.479);

	  p_coeff.insert(std::make_pair(F149, p_149));
	  q_coeff.insert(std::make_pair(F149, q_149));

	  // FM 161

	  int F161 = 161;
	  std::vector<float> p_161;
	  p_161.push_back(1819);
	  p_161.push_back(1.18);
	  p_161.push_back(4.999);

	  std::vector<float> q_161;
	  q_161.push_back(-0.3084);
	  q_161.push_back(6.721);
	  q_161.push_back(0.3162);

	  p_coeff.insert(std::make_pair(F161, p_161));
	  q_coeff.insert(std::make_pair(F161, q_161));

	  // FM 162

	  int F162 = 162;
	  std::vector<float> p_162;
	  p_162.push_back(2.199);
	  p_162.push_back(0.2162);
	  p_162.push_back(0.07223);

	  std::vector<float> q_162;
	  q_162.push_back(-0.9267);
	  q_162.push_back(0.09552);
	  q_162.push_back(1.36);

	  p_coeff.insert(std::make_pair(F162, p_162));
	  q_coeff.insert(std::make_pair(F162, q_162));

	  // FM 163

	  int F163 = 163;
	  std::vector<float> p_163;
	  p_163.push_back(4.902);
	  p_163.push_back(0.2927);
	  p_163.push_back(0.1805);

	  std::vector<float> q_163;
	  q_163.push_back(-0.6625);
	  q_163.push_back(0.1263);
	  q_163.push_back(1.058);

	  p_coeff.insert(std::make_pair(F163, p_163));
	  q_coeff.insert(std::make_pair(F163, q_163));

	  // FM 164

	  int F164 = 164;
	  std::vector<float> p_164;
	  std::vector<float> q_164;
	  p_164.push_back(0.);
  	  p_164.push_back(0.);
	  p_164.push_back(-1.);
	  q_164.push_back(0.);
	  q_164.push_back(0.);
	  q_164.push_back(0.);
	  p_coeff.insert(std::make_pair(F164, p_164));
	  q_coeff.insert(std::make_pair(F164, q_164));

	  // FM 165

	  int F165 = 165;
	  std::vector<float> p_165;
	  p_165.push_back(0.817);
	  p_165.push_back(0.07709);
	  p_165.push_back(0.05013);

	  std::vector<float> q_165;
	  q_165.push_back(-1.425);
	  q_165.push_back(0.03706);
	  q_165.push_back(2.275);

	  p_coeff.insert(std::make_pair(F165, p_165));
	  q_coeff.insert(std::make_pair(F165, q_165));

	  // FM 181

	  int F181 = 181;
	  std::vector<float> p_181;
	  p_181.push_back(1804);
	  p_181.push_back(1.178);
	  p_181.push_back(4.999);

	  std::vector<float> q_181;
	  q_181.push_back(0.0);
	  q_181.push_back(0.0);
	  q_181.push_back(0.0);

	  p_coeff.insert(std::make_pair(F181, p_181));
	  q_coeff.insert(std::make_pair(F181, q_181));

	  // FM 182

	  int F182 = 182;
	  std::vector<float> p_182;
	  p_182.push_back(26.13);
	  p_182.push_back(0.5009);
	  p_182.push_back(2.488);

	  std::vector<float> q_182;
	  q_182.push_back(-0.1525);
	  q_182.push_back(0.4025);
	  q_182.push_back(0.4484);

	  p_coeff.insert(std::make_pair(F182, p_182));
	  q_coeff.insert(std::make_pair(F182, q_182));

	  // FM 183

	  int F183 = 183;
	  std::vector<float> p_183;
	  p_183.push_back(19.31);
	  p_183.push_back(0.4546);
	  p_183.push_back(1.428);

	  std::vector<float> q_183;
	  q_183.push_back(-0.2634);
	  q_183.push_back(0.2268);
	  q_183.push_back(0.55);

	  p_coeff.insert(std::make_pair(F183, p_183));
	  q_coeff.insert(std::make_pair(F183, q_183));

	  // FM 185

	  int F185 = 185;
	  std::vector<float> p_185;
	  p_185.push_back(5.518);
	  p_185.push_back(0.2432);
	  p_185.push_back(0.2307);

	  std::vector<float> q_185;
	  q_185.push_back(-0.6166);
	  q_185.push_back(0.1085);
	  q_185.push_back(1.011);

	  p_coeff.insert(std::make_pair(F185, p_185));
	  q_coeff.insert(std::make_pair(F185, q_185));

	  // FM 186

	  int F186 = 186;
	  std::vector<float> p_186;
	  p_186.push_back(2.956);
	  p_186.push_back(0.1765);
	  p_186.push_back(0.09361);

	  std::vector<float> q_186;
	  q_186.push_back(-0.8538);
	  q_186.push_back(0.07918);
	  q_186.push_back(1.292);

	  p_coeff.insert(std::make_pair(F186, p_186));
	  q_coeff.insert(std::make_pair(F186, q_186));

	  // FM 188

	  int F188 = 188;
	  std::vector<float> p_188;
	  p_188.push_back(1.736);
	  p_188.push_back(0.1188);
	  p_188.push_back(0.06593);

	  std::vector<float> q_188;
	  q_188.push_back(-1.076);
	  q_188.push_back(0.04976);
	  q_188.push_back(1.599);

	  p_coeff.insert(std::make_pair(F188, p_188));
	  q_coeff.insert(std::make_pair(F188, q_188));

	  // FM 189

	  int F189 = 189;
	  std::vector<float> p_189;
	  p_189.push_back(0.6251);
	  p_189.push_back(0.07753);
	  p_189.push_back(0.02607);

	  std::vector<float> q_189;
	  q_189.push_back(-1.505);
	  q_189.push_back(0.03052);
	  q_189.push_back(2.216);

	  p_coeff.insert(std::make_pair(F189, p_189));
	  q_coeff.insert(std::make_pair(F189, q_189));

	}
}


float rate_of_spread(inputs *data, fuel_coefs *ptr, main_outs *at)
   {
   float p1, p2, p3, ws  ;
   
   p1 = p_coeff[data->nftype][0] ;
   p2 = p_coeff[data->nftype][1] ;
   p3 = p_coeff[data->nftype][2];
   //se = slope_effect(inp) ;
   ws = data->ws ;
   at->rss = 1.0 / (p1 * exp(-p2 * ws) + p3) ;
   
   return at->rss * (at->rss >= 0) ;

   }

float flankfire_ros(float ros,float bros,float lb)
   {
      return  ((ros + bros) / ( lb * 2.0)) ;
   }

/* ----------------- Length-to-Breadth --------------------------*/
float l_to_b(float ws)
  {
    //if(strncmp(ft,"O1",2)==0)return( ws<1.0 ? 1.0 : (1.1*pow(ws,0.464)));
    float alpha, beta, factor ;
    alpha = 0.2566 ;
    beta = -0.1548 ;
    factor = 1000.0 / 3600.0;
    return pow((0.936 * exp(alpha * factor * ws) + 0.461 * exp(beta * factor * ws) - 0.397), 0.45);
  }

/* ----------------- Back Rate of Spread --------------------------*/
float backfire_ros(main_outs *at, snd_outs *sec)
  {
    float hb, bros, lb ;
    //lb = l_to_b(data->fueltype,at->wsv) ;
    lb = sec->lb ;
    hb = (lb + sqrt(pow(lb,2) - 1.0)) /  (lb - sqrt(pow(lb, 2) - 1.0)) ;

    bros = at->rss / hb ;
    
    return bros * (bros >= 0);
  }

float flame_length(inputs *data, fuel_coefs *ptr)
   {
       float q1, q2, q3, fl, ws ;

       ws = data->ws ;
       q1 = q_coeff[data->nftype][0] ;
       q2 = q_coeff[data->nftype][1] ;
       q3 = q_coeff[data->nftype][2] ; 

       fl = pow(q1 * exp(-q2 * ws) + q3, 2) ;
       return fl; 
   }

float angleFL(inputs *data, fuel_coefs *ptr)
   {
       float angle, fl, y, ws ;
       ws = data->ws ;
       fl = flame_length(data, ptr) ;
       y = 10.0 / 36.0 * ws ;

       angle = atan(2.24 * sqrt(fl / pow(y, 2)))  ;
       return angle;
   }

float flame_height(inputs *data, fuel_coefs *ptr)
  {
      float fh, phi ;
      phi = angleFL(data, ptr) ;
      fh = flame_length(data, ptr) * sin(phi) ;
      return fh ;
  }

bool fire_type(inputs *data, fuel_coefs *ptr)
  {
      float fh, cbh, dist ;
      bool crownFire = false ;

      fh = flame_height(data, ptr) ;
      cbh = data->cbh ;
      dist = abs(cbh - fh) ;
	  //cout << "   dist (cbh - fh) = " << dist << "\n";
	  //cout << "   fh vs  cbh = " << fh << ", " << cbh << "\n";
	  
      if (((dist <= 1.0) || (fh >= cbh)) && (cbh > 0)) crownFire = true ;
      
      return crownFire ;
  }

float rate_of_spread10(inputs *data)
   {
   // FM 10 coef
   float p1 = 0.2802, p2 = 0.07786, p3 = 0.01123 ;
   float ros, ros10, ws, ffros, fcbd, fccf;

   ffros = data->factor_ros10 ;
   fcbd  = data->factor_cbd ;
   fccf  = data->factor_ccf ;
   
   ws = data->ws ;
   ros10 = 1. / (p1 * exp(-p2 * ws) + p3) ;
   ros = ffros * ros10 + fccf * data->ccf + fcbd * data->factor_cbd ;
   
   return(ros);
   }
 
float backfire_ros10(fire_struc *hptr, snd_outs *sec)
  {
    float hb, bros, lb ;
    lb = sec->lb ;
    hb = (lb + sqrt(pow(lb, 2) - 1.0)) /  (lb - sqrt(pow(lb, 2) - 1.0)) ;

    bros = hptr->ros / hb ;
    
    return bros;
  }
  
 void calculate(inputs *data,  fuel_coefs * ptr, main_outs *at, snd_outs *sec, fire_struc *hptr, fire_struc *fptr,fire_struc *bptr)
{
    // Hack: Initialize coefficients 
	initialize_coeff(data->scen);
	
	// Aux
	float  ros, bros, lb, fros;
	bool crownFire;
    
    // Populate fuel coefs struct
	//ptr->fueltype = data->fueltype;
	if (data->verbose){
		std::cout  << "Populate fuel types " <<  std::endl;
		std::cout  << "NfTypes:"  << data->nftype <<  std::endl;
		std::cout  << "scen:"  << data->scen <<  std::endl;
	}
	ptr->p1 = p_coeff[data->nftype][0] ;
    ptr->p2 = p_coeff[data->nftype][1] ;
    ptr->p3 = p_coeff[data->nftype][2] ;
    ptr->q1 = q_coeff[data->nftype][0] ;
    ptr->q2 = q_coeff[data->nftype][1] ;
    ptr->q3 = q_coeff[data->nftype][2] ;
	ptr->nftype = data->nftype;
	
    // Step 1: Calculate HROS (surface)
    at->rss = rate_of_spread(data, ptr, at);
    hptr->rss = at->rss ;
	
    
    // Step 2: Calculate Length-to-breadth
    sec->lb = l_to_b(data->ws) ;
    
    // Step 3: Calculate BROS (surface)
    bptr->rss = backfire_ros(at, sec) ;
    
    // Step 4: Calculate central FROS (surface)
    fptr->rss = flankfire_ros(hptr->rss, bptr->rss, sec->lb);
    
    // Step 5: Ellipse components
    at->a = (hptr->rss + bptr->rss) / 2. ;
    at->b = (hptr->rss + bptr->rss) / (2. * sec->lb) ; 
    at->c = (hptr->rss - bptr->rss) / 2. ; 
    
    // Step 6: Flame Length
    at->fl = flame_length(data, ptr);
    
    // Step 7: Flame angle
    at->angle = angleFL(data, ptr) ;
    
	// Step 8: Flame Height
    at->fh = flame_height(data, ptr) ;
    
	// Step 9: Criterion for Crown Fire Initiation (no init if user does not want to include it)
    if (data->cros){
			if (data->verbose){
				cout << "Checking crown Fire conditions " << crownFire << "\n";
			}
		crownFire = fire_type(data, ptr) ;
	}
	else{
		crownFire = false;
	}
	
    

	// If we have Crown fire, update the ROSs
    if (crownFire){
            hptr->ros = rate_of_spread10(data) ;
            bptr->ros = backfire_ros10(hptr,sec) ;
            fptr->ros = flankfire_ros(hptr->ros, bptr->ros, sec->lb) ;
            
			if (data->verbose){
				cout << "hptr->ros = " << hptr->ros << "\n" ;
				cout << "bptr->ros = " << bptr->ros << "\n" ;
				cout << "fptr->ros = " << fptr->ros << "\n" ;
			}

            at->a = (hptr->ros + bptr->ros) / 2. ;
            at->b = (hptr->ros + bptr->ros) / (.2 * sec->lb) ; 
            at->c = (hptr->ros - bptr->rss) / 2 ; 
			at->cros = true;
    }
	
	// Otherwise, use the surface alues
    else{
        hptr->ros = hptr->rss ;
        bptr->ros = bptr->rss ; 
        fptr->ros = fptr->rss ;
		if (data->verbose){
			cout << "hptr->ros = " << hptr->ros << "\n" ;
			cout << "bptr->ros = " << bptr->ros << "\n" ;
			cout << "fptr->ros = " << fptr->ros << "\n" ;
		}
    }
	
	if (data->verbose){
		cout << "--------------- Inputs --------------- \n" ;
		cout << "ws = " << data->ws << "\n" ;
		cout << "coef data->cbh = " << data->cbh << "\n" ;
		cout << "coef ptr->p1 = " << ptr->p1 << "\n" ;
		cout << "coef ptr->p2 = " << ptr->p2 << "\n" ;
		cout << "coef ptr->p3 = " << ptr->p3 << "\n" ;
		cout << "coef ptr->q1 = " << ptr->q1 << "\n" ;
		cout << "coef ptr->q2 = " << ptr->q2 << "\n" ;
		cout << "coef ptr->q3 = " << ptr->q3 << "\n" ;
		cout << "\n" ;

		cout << "---------------- Outputs --------------- \n" ;
		cout << "at->rss = " << at->rss << "\n" ;
		cout << "hptr->rss = " << hptr->rss << "\n" ;
		cout << "lb = " << sec->lb << "\n" ;
		cout << "bptr->rss = " << bptr->rss << "\n" ;
		cout << "fptr->rss = " << fptr->rss << "\n" ;
		cout << "axis a = " << at->a << "\n" ;
		cout << "axis b = " << at->b << "\n" ;
		cout << "axis c = " << at->c << "\n" ;
		cout << "fl = " << at->fl << "\n";
		cout << "angle = " << at->angle << "\n";
		cout << "fh = " << at->fh << "\n";
		cout << "Crown Fire = " << crownFire << "\n";
	}
}