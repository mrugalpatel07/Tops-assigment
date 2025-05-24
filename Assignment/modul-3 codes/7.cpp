#include<iostream>
using namespace std;
int main()
{
    // implicit
    int a = 10;
    char ch = 'A';
    cout<<"\n The value of a = "<<a;
    cout<<"\n The value of ch = "<<ch;
    //Explicit
    int b,c;
    cout<<"Enter the value of b = ";
    cin>>b;
    cout<<"Enter the value of c = ";
    cin>>c;
    cout<<"\nThe divition of "<<b<<" and " <<c<<" = "<<double (b)/double (c);
    return 0;
}