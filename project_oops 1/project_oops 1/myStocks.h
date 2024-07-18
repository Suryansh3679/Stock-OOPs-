#ifndef MY_STOCKS_H
#define MY_STOCKS_H

#include "allStocks.h"
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

class mystk {
public:
    Stock s;
    int quantity;
    string symbol; 

    public:
    Stock getStock() const {
        return s;
    }
    void setStock(const Stock& stock) {
        s = stock;
    }

    int getQuantity() const {
        return quantity;
    }
    void setQuantity(int qty) {
        quantity = qty;
    }

    string getSymbol() const {
        return symbol;
    }
    void setSymbol(const std::string& sym) {
        symbol = sym;
    }
    void display(){
        cout << symbol <<setw(15)<< quantity << endl;
    }
};

#endif

