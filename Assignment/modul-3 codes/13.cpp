#include<iostream>
using namespace std;
double add(double num1,double num2);
double add(double num1,double num2)
{
    return num1+num2;
}
double sub(double num1,double num2);
double sub(double num1,double num2)
{
    return num1-num2;
}
double multi (double num1,double num2);
double multi(double num1,double num2)
{
    return num1*num2;
}
double divied(double num1,double num2);
double divied(double num1,double num2)
{
    return num1/num2;
}
int main()
{
    double n1,n2;
    char choise;
    up :
    cout<<"Enter the n1 = ";
    cin>>n1;
    cout<<"Enter the n2 = ";
    cin>>n2;
    cout<<"Enter the choise (+,-,*,/,x) = ";
    cin>>choise;
    switch(choise)
    {
        case '+' :
            cout<<"The sum = "<<add(n1,n2)<<endl;
        break;
        case '-' :
            cout<<"The substraction = "<<sub(n1,n2)<<endl;
        break;
        case '*' :
            cout<<"The multiplication = "<<multi(n1,n2)<<endl;
        break;
        case '/' :
            cout<<"The divition = "<<divied(n1,n2)<<endl;
        break;
        default :
            cout<<"Invalid value";
        break;
        case 'x' :
            goto down;
    }
    goto up;
    down :
    return 0;
}