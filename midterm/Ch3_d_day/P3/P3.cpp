#include <iostream>
using namespace std;


class Account{
    string name;
    int id;
    int balance;
public:
    Account(string name, int id, int balance){
        this->name = name;
        this->id = id;
        this->balance = balance;
    }
    void deposit(int money){
        this->balance += money;
    }
    string getOwner()  {
        return this->name;
    }
    int inquiery(){
        return this->balance;
    }
    int withdraw(int money){
        if (this->balance < money){
            cout << "잔액이 부족합니다." << endl;
            return 0;
        }
        else{
            this->balance -= money;
            return money;
        }
    }
};


int main() {

    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiery() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiery() << endl;
}