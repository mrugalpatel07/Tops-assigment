#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter the students marks = ";
    cin>>n;

    if(n>90)
    {
        cout<<"Grade = A";
    }
    else if(n>=75 && n<=90)
    {
        cout<<"Grade = B";
    }
    else if(n>=60 && n<75)
    {
        cout<<"Grade = C";
    }
    else if(n>=35 && n<60)
    {
        cout<<"Grade = D";
    }
    else 
    {
        cout<<"Fail";
    }
    return 0;
}