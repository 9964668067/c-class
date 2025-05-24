#include <iostream>
using namespace std;
class security
{
public:
    virtual void checkcctvcamera(int a, int b) = 0;
    virtual void watchman(int c, int d) = 0;
    virtual void dogalert(int e, int f) = 0;
};
class home : public security
{
public:
    void checkcctvcamera(int a, int b) override
    {
        cout << a + b << endl;
    }
    void watchman(int c, int d) override
    {
        cout << c + d << endl;
    }
    void dogalert(int e, int f) override
    {
        cout << e + f << endl;
    }

};
int main()
{
    home h1;
    h1.checkcctvcamera(motion detect);
    h1.watchman(suspicious activity);
    h1.dogalert(strangers detector);
}
    

 
