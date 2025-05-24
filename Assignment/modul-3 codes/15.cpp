#include<iostream>
using namespace std;
int a = 10; //  Global variable
void local()
{
    int b = 30;
    cout<<"\nlocal variable = "<<b;
}
int main()
{
    cout<<"Global variable = "<<a;
    local();
    // function calling i changed the value of a 
    int b = 10;
    local();
    int a = 25;
    // i changed the value of b 
    cout<<" the value of a = "<<a;
    // The value of a is change because it is a global variable 
    return 0;
}
