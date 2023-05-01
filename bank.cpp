#include<iostream>
#include<stdint.h>
using namespace std;
class bankAccount{
    private:
        int accountNumber;
        string accountName;
        int balance;
    public:
        bankAccount(int accountNumber, string accountName);
        void cashOut(int moneyOut);
        void cashIn(int moneyOut);
        void checkBalance();
};
bankAccount::bankAccount(int accountNumber, string accountName){
    this->balance  = 0;
    this->accountName = accountName;
    this->accountNumber = accountNumber;
}
void bankAccount::checkBalance(){
    cout<<"--------------------------------"<<endl;
    cout<<"Name: "<<this->accountName<<endl;
    cout<<"Id: "<<this->accountNumber<<endl;
    cout<<"Balance: "<<this->balance<<"(vnd)"<<endl;
}
void bankAccount::cashIn(int moneyIn){
    cout<<"--------------------------------"<<endl;
    cout<<"cashIn Complely"<<endl;
    this->balance += moneyIn;
    checkBalance();
}
void bankAccount::cashOut(int moneyOut){
    cout<<"--------------------------------"<<endl;
    if(moneyOut > this->balance) cout<<"Not enough money in the account"<<endl;
    else 
    {
        cout<<"cashOut Completely"<<endl;
        this->balance -= moneyOut;
        checkBalance();
    }
}

int main(){
    bankAccount HungAccount(123456,"NGUYEN PHI HUNG");
    HungAccount.cashIn(100000);
    HungAccount.cashOut(500000);
    HungAccount.cashOut(50000);
    return 0;
}