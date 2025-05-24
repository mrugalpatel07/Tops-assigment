#include<iostream>
using namespace std;
int main()
{
    int a[100],i;
    double size,sum = 0;
    cout<<"Enter the size = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"The array = ";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<size;i++)
    {
        sum = sum + a[i];
    }
    cout<<"The sum of array = "<<sum;
    // average of array 
    cout<<"The average of array = "<<sum/size;
    return 0;
}