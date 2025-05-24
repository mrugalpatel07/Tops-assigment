#include<iostream>
using namespace std;
int main()
{
    int a[100][100],b[100][100],c[100][100];
    int i,j,raw1,raw2,col1,col2;
    // for matrix a
    cout<<"Enter the raw1 = ";
    cin>>raw1;
    cout<<"Enter the col1 = ";
    cin>>col1;
    for(i=0;i<raw1;i++)
    {
        for(j=0;j<col1;j++)
        {
            cout<<"The value of a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
    // for mmatrix b
    cout<<"Enter the raw2 = ";
    cin>>raw2;
    cout<<"Enter the col2 = ";
    cin>>col2;
    for(i=0;i<raw2;i++)
    {
        for(j=0;j<col2;j++)
        {
            cout<<"The value of b["<<i<<"]["<<j<<"] = ";
            cin>>b[i][j];
        }
    }
    // printing matrix a
    cout<<"Matrix a = "<<endl;
    for(i=0;i<raw1;i++)
    {
        for(j=0;j<col1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // printing matrix b
    cout<<"Matrix b = "<<endl;
    for(i=0;i<raw2;i++)
    {
        for(j=0;j<col2;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    // sum of matrix a and matrix b
    if(raw1 == raw2 && col1 == col2)
    {
        for(i=0;i<raw1;i++)
        {
            for(j=0;j<col1;j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    else
    {
        cout<<"The row and col are not same";   
    }
    cout<<"The sum of matrix = "<<endl;
    for(i=0;i<raw1;i++)
    {
        for(j=0;j<col1;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}