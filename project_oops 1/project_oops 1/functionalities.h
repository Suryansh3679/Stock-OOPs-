#ifndef functionality_h
#define functionality_h

#include<bits/stdc++.h>
#include "market.h"
#include "account.h"
#include "allStocks.h"
using namespace std;

void addAccount(portfolio &a1){
    string x;
    int y;
    cout<<"Enter New UserId : ";  cin>>x;
    cout<<"Enter New Password : ";  cin>>y;
    makeAcc(x,y,a1);
}
portfolio accessAccount(portfolio &a1){
    string x;
    int y;
    cout<<"Enter UserId : ";  cin>>x;
    cout<<"Enter Password : ";  cin>>y;
    if (checkAcc(x,y,a1)){
        return accountsList[x];
    }
    
}

void Extract_stk_details(){
    string a;
    cout << "Enter stock symbol: ";
    
    cin>>a;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    cout << a;
    Stock s= market[a];
    s.details();
}

void Deposit_Money(portfolio &a1){
    cout<<"Your Balance is :: "<<a1.getBalance()<<endl;
    int a;
    cout<<"Enter Amount to be deposited :: ";
    cin >> a;
    a1.updateBalance(a);
    cout<<"Your Updated Balance is :: "<<a1.getBalance()<<endl;
}

void Withdraw_Money(portfolio &a1){
    cout<<"Your Balance is :: "<<a1.getBalance()<<endl;
    int a;
    cout<<"Enter Amount to be withdrawn :: ";
    cin >> a;
    a1.updateBalance(-a);
    cout<<"Your Updated Balance is :: "<<a1.getBalance()<<endl;
}

void Add_to_portfolio(string &a,int &quantity,portfolio &a1){
    mystk s1;
    s1.setQuantity(quantity);
    s1.setStock(market[a]);
    s1.setSymbol(a);
    a1.addARR(s1);
}

void BuyStock(portfolio &a1){
    string a;
    cout << "Enter Stock to Buy :: ";
    cin >>a;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    cout << a;    
    Stock s= market[a];
    s.details();
    int choice;
    cout << "1. To buy the stock"<<endl;
    cout << "0. Exit"<<endl;
    cin>>choice;
    if (choice){
        int quantity;
        cout<<"Enter the quantity of stock :: ";
        cin >> quantity;
        if (s.getPrice()*quantity <=a1.getBalance()){
            a1.updateBalance(-(s.getPrice()*quantity));
            cout << "Stock successfully purchased!!!"<<endl;
            cout << "Your updated Balance is :: "<<a1.getBalance()<<endl;
            Add_to_portfolio(a,quantity,a1);
            transaction obj(quantity,a,-s.getPrice()*quantity);
            a1.pushstk(obj);
        }
        else{
            cout << "Insufficient Balance "<<endl;
        }
    }
    return;
}

void printPort(portfolio &a1){
    cout << "ID :: " <<a1.getId() <<endl;
    a1.printp();
}

void SellStock(portfolio &a1){
    printPort(a1);
    string a;
    cout << "Enter Stock to Sell :: ";
    cin >>a; 
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    int index=a1.search(a);
    if(index==-1){return;}
    mystk ms1=a1.search_index(index);  
    int choice;
    cout << "1. To sell the stock"<<endl;
    cout << "0. Exit"<<endl;
    cin>>choice;
    if (choice){
        int quantity;
        cout<<"Enter the quantity of stock to sell :: ";
        cin >> quantity;
        if (ms1.getQuantity() >=quantity){
            a1.updateBalance((ms1.getStock().getPrice()*quantity));
            int t=a1.update_quantity(a1.search(a),quantity);
            cout << "Stock successfully sold !!!"<<endl;
            cout << "Your updated Balance is :: "<<a1.getBalance()<<endl;
            cout << "Your remaining quantity of stock is :: " << t <<endl;
            transaction obj(quantity,a,ms1.getStock().getPrice()*quantity);
            a1.pushstk(obj);
        }
        else{
            cout << " You Doesn't Own "<<quantity<<" Shares."<<endl;
        }
    }
}

void Check_history(portfolio a1){
    stack <transaction> temp = a1.copystk();
    cout << "Stock"<<setw(15)<<"Quantity"<<setw(15)<<"Delivery" <<endl; 
    if(temp.size()==0){
        cout<<"NULL"<<setw(15)<<"NULL"<<setw(15)<<"NULL"<<endl;
    }
    while (temp.size() != 0){
        temp.top().display();
        temp.pop();
    }
}

#endif