#include<iostream>
using namespace std;
class Person
{
    private :
    int id;
    string name;
    public :
        void display()
        {
            cout<<"\n Hello from Person class ";
        }
};
class Student : public Person
{

};
class Teacher : public Person
{

};
int main()
{
    Person p;
    p.display();
    Student s;
    s.display();
    Teacher t;
    t.display();
    return 0;
}