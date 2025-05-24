#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string = ";
    cin>>s;
    cout<<"The orignal string = "<<s<<endl;
    //string revers
    int i = 0,flag;
    int j = s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag)
    {
        cout<<"The string is pelendrom ";
    }
    else
    {
        cout<<"The string is not pelendrom";
    }
    return 0;
}