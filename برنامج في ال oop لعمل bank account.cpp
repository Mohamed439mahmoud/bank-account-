// ConsoleApplication88.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
    using namespace std;
    class bankaccount {
    private:
        double balance;
    public:
        bankaccount() {
            balance = 1000;
        }
        double inquiry() {
            return balance;
        }
        void deposit() {
            int value;
            cout << "enter the value";
            cin >> value;
            balance += value;
            cout << "you enter" << value << "new balance" << balance;
        }
    };

int main()
{
    bankaccount b1;
    cout << b1.inquiry();
    b1.deposit();
}

