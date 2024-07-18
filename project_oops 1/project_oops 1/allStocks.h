#ifndef stocks_h
#define stocks_h

#include<bits/stdc++.h>
using namespace std;
class Stock {
    double price;
    double peRatio;
    double ROE;
    long MarketCap;

public:
    double getPrice() {
        return price;
    }
    double getPeRatio(){
        return peRatio;
    }
    double getROE(){
        return ROE;
    }
    long getEvaluation(){
        return MarketCap;
    }

    void setPrice(double newPrice) {
        price = newPrice;
    }
    void setPeRatio(double newPeRatio) {
        peRatio = newPeRatio;
    }
    void setRoe(double newROE) {
        ROE= newROE;
    }
    void setEvaluation(long MarketCap) {
        this->MarketCap = MarketCap;
    }
    void details(){
        cout<<endl<<"Mkt Cap :: "<<MarketCap<<" Cr"<<endl;
        cout<<"Stock Price :: "<<price<<endl;
        cout<<"P/E ratio :: "<<peRatio<<endl;
        cout<<"ROE :: "<<ROE<<" % "<<endl;
    }
};
std::map <string,Stock> market;

#endif 