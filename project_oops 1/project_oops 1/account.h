#ifndef accountID_h
#define accountID_h

#include <bits/stdc++.h>
#include "myStocks.h"
#include "history.h"
using namespace std;

class Account {
private:
    string id;
    int pass,balance;
    stack<transaction> stk;
public:
    Account (){
        balance=0;
    }
    Account(string a, int b) : id(a), pass(b) {
        balance=0;
        cout<<"Your New Account is Successfully Made"<<endl;
    }
    string getId() const {
        return id;
    }
    void setId(string newId) {
        id = newId;
    }
    int getPass() const {
        return pass;
    }
    void setName(int pass) {
        this->pass = pass;
    }
    int getBalance() const {
        return balance;
    }
    void setBalance(int pass) {
        this->balance = pass;
    }
    void updateBalance(int a){
        balance+=a;
    }

    void pushstk(transaction &a){
        stk.push(a);
    }
    stack<transaction> copystk(){
        return stk;
    }


};
class portfolio:public Account{
    
    vector<mystk> arr;
    public:
    portfolio():Account(){}
    portfolio(string a,int b):Account(a,b){}

    void addARR(mystk &a){
        arr.push_back(a);
    }
    int search(string symbol){
        for(int i=0;i<arr.size();i++){
            if (arr[i].getSymbol() == symbol){
                return i;
            }
        }
        cout << "You dont have stock"<<endl;
        return -1;
    }
    mystk search_index(int a){
        return arr[a];
    }
    int update_quantity(int a,int quant){
        if(arr[a].getQuantity()-quant == 0){
            arr.erase(arr.begin()+a);
            return 0;
        }
        arr[a].setQuantity(arr[a].getQuantity()-quant);
        return arr[a].getQuantity();
    }
    void printp(){
        cout << "Symbol"<<setw(15) <<"Quantity"<<endl;
        if(arr.size()==0){
            cout<<"NULL"<<setw(15)<<"NULL"<<endl;
            return;
        }
        for (int i=0;i<arr.size();i++){
            arr[i].display();
        }
    }

};

map<string,portfolio> accountsList;
void makeAcc(string a,int b,portfolio &acc1){
    portfolio a1(a,b);
    accountsList[a]=a1;
    acc1=a1;
}
bool checkAcc(string a,int b,portfolio &acc1){
    portfolio test=accountsList[a];
    if(test.getPass()==b){
        // acc1=test;
        return true;
    }else{
        return false;
    }
}


#endif 