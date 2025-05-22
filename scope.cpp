#include <iostream>
using namespace std;
class Person 

{
public:
    void hi();
    void hello();
};
void Person::hi()
{
    cout << "hi there" << endl;
}
void Person::hello()
{
     cout << "hello there" << endl;
}
int main()
{
    Person P1;
    P1.hi();
    P1.hello();
}
