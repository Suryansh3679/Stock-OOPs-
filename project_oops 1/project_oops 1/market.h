#ifndef market_h
#define market_h

#include <bits/stdc++.h>
#include "allStocks.h"
using namespace std;

void Startmarket(){
    class Stock s[25];
    vector<string> temp;
    temp.push_back("IRFC");
    s[0].setEvaluation(184201);
    s[0].setPeRatio(30.51);
    s[0].setPrice(140.95);
    s[0].setRoe(30.51);

    temp.push_back("TATASTEEL");
    s[1].setEvaluation(189687);
    s[1].setPeRatio(0.0);
    s[1].setPrice(151.80);
    s[1].setRoe(0.78);

    temp.push_back("NHPC");
    s[2].setEvaluation(85433);
    s[2].setPeRatio(22.99);
    s[2].setPrice(85.05);
    s[2].setRoe(9.98);

    temp.push_back("BSE");
    s[3].setEvaluation(29753);
    s[3].setPeRatio(39.02);
    s[3].setPrice(2197.80);
    s[3].setRoe(11.59);

    temp.push_back("KRBL");
    s[4].setEvaluation(6608);
    s[4].setPeRatio(11.02);
    s[4].setPrice(288.80);
    s[4].setRoe(14.57);

    temp.push_back("CESC");
    s[5].setEvaluation(15880);
    s[5].setPeRatio(11.27);
    s[5].setPrice(119.70);
    s[5].setRoe(12.58);
    
    temp.push_back("RPOWER");
    s[6].setEvaluation(10012);
    s[6].setPeRatio(0.0);
    s[6].setPrice(26.30);
    s[6].setRoe(-12.28);

    temp.push_back("RELCAPITAL");
    s[7].setEvaluation(298);
    s[7].setPeRatio(0.0);
    s[7].setPrice(11.79);
    s[7].setRoe(11.94);

    temp.push_back("TATAMOTERS");
    s[8].setEvaluation(358539);
    s[8].setPeRatio(16.78);
    s[8].setPrice(979.80);
    s[8].setRoe(28.58);

    temp.push_back("TATAPOWER");
    s[9].setEvaluation(124842);
    s[9].setPeRatio(34.88);
    s[9].setPrice(390.70);
    s[9].setRoe(11.85);

    temp.push_back("TCS");
    s[10].setEvaluation(1415794);
    s[10].setPeRatio(31.56);
    s[10].setPrice(3910.90);
    s[10].setRoe(44.35);

    temp.push_back("RELIANCE");
    s[11].setEvaluation(1968748);
    s[11].setPeRatio(28.14);
    s[11].setPrice(2910.05);
    s[11].setRoe(9.12);

    temp.push_back("IEX");
    s[12].setEvaluation(12118);
    s[12].setPeRatio(35.39);
    s[12].setPrice(135.85);
    s[12].setRoe(37.57);

    temp.push_back("RELINFRA");
    s[13].setEvaluation(10979);
    s[13].setPeRatio(0.0);
    s[13].setPrice(277.35);
    s[13].setRoe(-12.45);

    temp.push_back("YESBANK");
    s[14].setEvaluation(68780);
    s[14].setPeRatio(66.42);
    s[14].setPrice(23.90);
    s[14].setRoe(2.51);

    temp.push_back("SBIN");
    s[15].setEvaluation(666133);
    s[15].setPeRatio(10.44);
    s[15].setPrice(746.70);
    s[15].setRoe(18.25);

    temp.push_back("SBILIFE");
    s[16].setEvaluation(150276);
    s[16].setPeRatio(80.81);
    s[16].setPrice(1501);
    s[16].setRoe(12.89);

    temp.push_back("SBICARD");
    s[17].setEvaluation(66977);
    s[17].setPeRatio(28.60);
    s[17].setPrice(704.10);
    s[17].setRoe(20.82);
    
    temp.push_back("IDBI");
    s[18].setEvaluation(87385);
    s[18].setPeRatio(16.35);
    s[18].setPrice(81.35);
    s[18].setRoe(12.96);

    temp.push_back("HDFCBANK");
    s[19].setEvaluation(1096155);
    s[19].setPeRatio(18.57);
    s[19].setPrice(1442.85);
    s[19].setRoe(13.50);

    temp.push_back("HDFCLIFE");
    s[20].setEvaluation(134235);
    s[20].setPeRatio(88.03);
    s[20].setPrice(623.85);
    s[20].setRoe(10.75);

    temp.push_back("HDFCAMC");
    s[21].setEvaluation(80526);
    s[21].setPeRatio(45.29);
    s[21].setPrice(3773.40);
    s[21].setRoe(27.55);

    temp.push_back("ICICIBANK");
    s[22].setEvaluation(765410);
    s[22].setPeRatio(18.04);
    s[22].setPrice(1090.30);
    s[22].setRoe(17.72);

    temp.push_back("ADANIPOWER");
    s[23].setEvaluation(204803);
    s[23].setPeRatio(8.78);
    s[23].setPrice(531.05);
    s[23].setRoe(50.86);

    temp.push_back("ADANIGREEN");
    s[24].setEvaluation(293189);
    s[24].setPeRatio(201.18);
    s[24].setPrice(1851.75);
    s[24].setRoe(18.40);

    temp.push_back("ADANIENT");
    s[25].setEvaluation(354022);
    s[25].setPeRatio(100.79);
    s[25].setPrice(3107.70);
    s[25].setRoe(7.41);

    temp.push_back("ZOMATO");
    s[26].setEvaluation(153552);
    s[26].setPeRatio(0.0);
    s[26].setPrice(174.20);
    s[26].setRoe(-2.52);

    temp.push_back("JIOFIN");
    s[27].setEvaluation(218902);
    s[27].setPeRatio(6891.00);
    s[27].setPrice(344.65);
    s[27].setRoe(0.0);

    temp.push_back("IREDA");
    s[28].setEvaluation(42305);
    s[28].setPeRatio(122.02);
    s[28].setPrice(136.65);
    s[28].setRoe(11.56);

    temp.push_back("SUZLON");
    s[29].setEvaluation(50390);
    s[29].setPeRatio(73.24);
    s[29].setPrice(37.35);
    s[29].setRoe(9.95);

    temp.push_back("MARUTI");
    s[30].setEvaluation(387853);
    s[30].setPeRatio(31.82);
    s[30].setPrice(12337.70);
    s[30].setRoe(17.31);

    temp.push_back("IDEA");
    s[31].setEvaluation(64890);
    s[31].setPeRatio(0.00);
    s[31].setPrice(13.30);
    s[31].setRoe(34.07);

    temp.push_back("INFY");
    s[32].setEvaluation(626281);
    s[32].setPeRatio(25.68);
    s[32].setPrice(1508.85);
    s[32].setRoe(30.46);

    temp.push_back("MRF");
    s[33].setEvaluation(55682);
    s[33].setPeRatio(27.49);
    s[33].setPrice(131302.95);
    s[33].setRoe(10.68);

    temp.push_back("HAL");
    s[34].setEvaluation(212035);
    s[34].setPeRatio(34.51);
    s[34].setPrice(3170.80);
    s[34].setRoe(24.00);

    temp.push_back("BHARTIARTL");
    s[35].setEvaluation(731484);
    s[35].setPeRatio(83.16);
    s[35].setPrice(1236.10);
    s[35].setRoe(14.63);

    temp.push_back("TVSMOTOR");
    s[36].setEvaluation(97431);
    s[36].setPeRatio(59.58);
    s[36].setPrice(2050.80);
    s[36].setRoe(23.06);

    temp.push_back("TVSHLTD");
    s[37].setEvaluation(16293);
    s[37].setPeRatio(20.31);
    s[37].setPrice(8050.51);
    s[37].setRoe(29.20);

    temp.push_back("TVSELECT");
    s[38].setEvaluation(491);
    s[38].setPeRatio(405.15);
    s[38].setPrice(262.80);
    s[38].setRoe(4.35);

    temp.push_back("HAVELLS");
    s[39].setEvaluation(92044);
    s[39].setPeRatio(77.88);
    s[39].setPrice(1469.25);
    s[39].setRoe(17.07);

    temp.push_back("ATULAUTO");
    s[40].setEvaluation(1374);
    s[40].setPeRatio(183.31);
    s[40].setPrice(494.40);
    s[40].setRoe(1.55);

    temp.push_back("GAEL");
    s[41].setEvaluation(7336);
    s[41].setPeRatio(22.66);
    s[41].setPrice(160.05);
    s[41].setRoe(11.84);

    temp.push_back("AMBUJACEM");
    s[42].setEvaluation(116984);
    s[42].setPeRatio(36.94);
    s[42].setPrice(589.35);
    s[42].setRoe(8.44);

    temp.push_back("KALYANKIL");
    s[43].setEvaluation(39688);
    s[43].setPeRatio(74.96);
    s[43].setPrice(385.20);
    s[43].setRoe(12.92);

    temp.push_back("KSL");
    s[44].setEvaluation(3848);
    s[44].setPeRatio(15.11);
    s[44].setPrice(882.55);
    s[44].setRoe(14.59);

    temp.push_back("ASIANPAINT");
    s[45].setEvaluation(272628);
    s[45].setPeRatio(50.14);
    s[45].setPrice(2841.50);
    s[45].setRoe(30.57);

    temp.push_back("ASIANENE");
    s[46].setEvaluation(1112);
    s[46].setPeRatio(206.59);
    s[46].setPrice(285.30);
    s[46].setRoe(-8.27);

    temp.push_back("KANSAINER");
    s[47].setEvaluation(21721);
    s[47].setPeRatio(18.67);
    s[47].setPrice(268.65);
    s[47].setRoe(11.50);

    temp.push_back("KAMDHENU");
    s[48].setEvaluation(1422);
    s[48].setPeRatio(32.20);
    s[48].setPrice(527.50);
    s[48].setRoe(24.33);

    temp.push_back("KAMOPAINTS");
    s[49].setEvaluation(1083);
    s[49].setPeRatio(151.14);
    s[49].setPrice(172.65);
    s[49].setRoe(-0.10);

    for(int i=0;i<50;i++){
        market[temp[i]]=s[i];
    }
}

#endif