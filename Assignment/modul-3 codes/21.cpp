#include<iostream>
using namespace std;
class Bankaccount 
{
    private :
        double acn,balance;
    public :
        void set() 
        {
            cout<<"Enter the account number = ";
            cin>>acn;
            cout<<"Enter the bank balance = ";
            cin>>balance;
        }
        void deposit(double amt)
        {
            if(amt > 0)
            {
                balance = balance + amt;
            }
        }
        void withdrawal(double amt1)
        {
            if(amt1>0 && amt1<balance)
            {
                balance = balance - amt1;
            }
            else
            {
                cout<<"You dont have that much money in your account ";
            }
        }
        void get()
        {
        cout<<"\nThe account number = "<<acn;
        cout<<"\nThe balance = "<<balance;
        }
};
using namespace std;
int main()
{
    Bankaccount n;
    int amt,amt1;
    n.set();
    cout<<"Enter the amont you want to deposit = ";
    cin>>amt;
    n.deposit(amt);
    cout<<"Enter the amount you want to withdrawl = ";
    cin>>amt1;
    n.withdrawal(amt1);
    n.get();
    return 0;
}