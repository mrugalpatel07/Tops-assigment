#include<iostream>
using namespace std;
class Calculator
{
    public :
        double add(double n1,double n2)
        {
            return n1+n2;
        }
        double sub(double n1,double n2)
        {
            return n1-n2;
        }
        double multi(double n1,double n2)
        {
            return n1*n2;
        }
        double div(double n1,double n2)
        {
            return n1/n2;
        }
};
int main ()
{
    Calculator c;
    double n1,n2;
    cout<<"Enter the value of n1 = ";
    cin>>n1;
    cout<<"Enter the value of n2 = ";
    cin>>n2;  
    cout<<"The sum = "<<c.add(n1,n2)<<endl;
    cout<<"The sbstraction = "<<c.sub(n1,n2)<<endl;
    cout<<"The multiplication = "<<c.multi(n1,n2)<<endl;
    cout<<"The divition = "<<c.div(n1,n2)<<endl;
    return 0;
}