#include<iostream>
using namespace std;
int fact(int num); //  defination
int fact(int num) // declaration
{
    if(num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
    return num*fact(num-1);
    }
}
int main()
{
    int n;
    cout<<"Enter the ne value = ";
    cin>>n;
    int result = fact(n); //recurcive function calling 
    cout<<"The factorial of "<<n<<" = "<<result;
    return 0;
}