#include <iostream>
using namespace std;
class maths
{
public:
    virtual void add(int a, int b) = 0;
};
class Calculation : public maths
{
public:
    void add(int a, int b) override
    {
        cout << a + b << endl;
    }
};
int main()
{
    Calculation C1;
    C1.add(10,20);
}
    

 
