#include<iostream>
using namespace std;
int main()
{
    double n1,n2;
    cout<<"Enter the n1 value = ";
    cin>>n1;
    cout<<"Enter the n2 value = ";
    cin>>n2;
    //Arithmetic

    cout<<"The n1 + n2 = "<<n1+n2;
    cout<<"The n1 - n2 = "<<n1-n2;
    cout<<"The n1 * n2 = "<<n1*n2;
    cout<<"The n1 / n2  = "<<n1/n2;
    
    // relational

    cout<<" n1 < n2 is "<<(n1<n2)<<endl;
    cout<<" n1 > n2 is "<<(n1>n2)<<endl;
    cout<<" n1 <= n2 is "<<(n1<=n2)<<endl;
    cout<<" n1 >= n2 is "<<(n1>=n2)<<endl;
    cout<<" n1 == n2 is "<<(n1==n2)<<endl;
    cout<<" n1 != n2 is "<<(n1!=n2)<<endl;

    // logical 

    cout<<" n1 && n2 = "<<(n1&&n2)<<endl;
    cout<<" n1 || n2 = "<<(n1||n2)<<endl;
    cout<<" n1 ! n2 = "<<(!n2)<<endl;

    // Bitwise 

    int a = n1;
    int b = n2;
    cout<<" n1 & n2 = "<<(a & b)<<endl;
    cout<<" n1 & n2 = "<<(a & b)<<endl;

    return 0;
}