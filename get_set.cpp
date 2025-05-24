#include <iostream>
using namespace std;
class person
{
private :
    string name;
    int age;
public:
    void setname(string n)
    {
        name = n;
    }
    string getname()
    {
        return name;
    }
    void setage(int a)
    {
        age = a;
    }
    int getage()
    {
        return age;
    }
};
int  main()
{
    person p1;
    p1.setname("priya");
    p1.setage(19);
    cout << p1.getname() << endl;
    cout << p1.getage() << endl;
}


    
