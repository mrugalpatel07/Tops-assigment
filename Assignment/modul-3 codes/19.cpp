#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void copy(string s1)
{
    string rev = s1;

    reverse(rev.begin(),rev.end());
    
}
int main()
{
    string s1,s2;
    cout<<"Enter the string = ";
    cin>>s1;
    cout<<"The orignal string = "<<s1;
    copy(s1);
    
    return 0;
}


