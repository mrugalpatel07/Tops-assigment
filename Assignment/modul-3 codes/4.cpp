#include<iostream>
using namespace std;
class Area
{
    private:
    int l,w;

    public :
    void set()
    {
        cout<<"Enter the length = ";
        cin>>l;
        cout<<"Enter the widgth = ";
        cin>>w;
        cout<<"Area of rectangle = "<<l*w;
    }
};
int main()
{
    class Area a;
    a.set();
    return 0;
}