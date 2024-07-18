#ifndef aaaahhf
#define aaaahhf

#include <bits/stdc++.h>
#include "myStocks.h"
 #include <ctime>
using namespace std;


class transaction{
private:
    int sell_buyQ;
    string symbol;
    int cost;

public:
    transaction(int a,string b,int c):sell_buyQ(a) , symbol(b),cost(c){}

    int getSellBuyQ() const {
        return sell_buyQ;
    }

    // Setter for sell_buyQ
    void setSellBuyQ(int value) {
        sell_buyQ = value;
    }

    // Getter for m1
    string getM1() const {
        return symbol;
    }

    // Setter for m1
    void setM1(const string& value) {
        symbol = value;
    }

    // Getter for cost
    int getCost() const {
        return cost;
    }

    // Setter for cost
    void setCost(int value) {
        cost = value;
    }

    void display(){
        cout <<symbol<<setw(15)<<sell_buyQ <<setw(15)<< cost<<endl;
    }
};


// #include <iostream>
// #include <ctime>

// int main() {
//     // Get the current time
//     std::time_t currentTime = std::time(nullptr);

//     // Convert the current time to a tm struct
//     std::tm* localTime = std::localtime(&currentTime);

//     // Print the current date and time
//     std::cout << "Current Date and Time: "
//               << localTime->tm_year + 1900 << "-"
//               << localTime->tm_mon + 1 << "-"
//               << localTime->tm_mday << " "
//               << localTime->tm_hour << ":"
//               << localTime->tm_min << ":"
//               << localTime->tm_sec << std::endl;

//     return 0;
// }


#endif 