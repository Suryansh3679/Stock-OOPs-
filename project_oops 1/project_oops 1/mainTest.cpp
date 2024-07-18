#include <bits/stdc++.h>
#include "account.h"
#include "market.h"
#include "functionalities.h"
using namespace std;

int main(){
    Startmarket();
    while(true){
    
        cout<<"Press 1 -> New Account"<<endl<<"Press 2 -> Existing Account"<<endl<<"Press 0 -> Exit Program"<<endl;
        cout<<"Your Choice :: ";        int choice;    cin>>choice;
        bool exist;
        cout<<"--------     --------"<<endl;
        portfolio a1;
        if(choice==1){
            addAccount(a1);
            exist=true;
        }else if(choice==2){
            a1=accessAccount(a1);
        }else{
            break;
        }
        if(exist){
            while(true){
                cout<<"Press 1 -> Stock Details"<<endl;
                cout<<"Press 2 -> Deposit Money"<<endl;
                cout<<"Press 3 -> Withdraw Money"<<endl;
                cout<<"Press 4 -> To Buy Stock"<<endl;
                cout<<"Press 5 -> To Sell Stock"<<endl;
                cout<<"Press 6 -> Know Your Portfolio"<<endl;
                cout<<"Press 7 -> Check Your Transactions History"<<endl;
                cout<<"Press 0 -> Log Out"<<endl;
                cout<<"Your Choice :: ";      cin>>choice;
                if(choice==1){
                    Extract_stk_details();
                }else if(choice==2){
                    Deposit_Money(a1);
                }else if(choice==3){
                    Withdraw_Money(a1);
                }else if(choice==4){
                    BuyStock(a1);
                }else if(choice==5){
                    SellStock(a1);
                }else if(choice==6){
                    printPort(a1);
                }else if(choice==7){
                    Check_history(a1);
                }else if(choice==0){
                    accountsList[a1.getId()]=a1;
                    break;
                }else{
                    cout<<"!!!!! Please, Retry by pressing correct key !!!!!"<<endl;
                }
            }
        }
        cout<<"----- Logged Out Successfully -----"<<endl;
    }
    cout<<"Exited Program Successfully";
    return 0;
}