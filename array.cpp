#include <iostream>
#include <vector>
using namespace std;
class person
{
    public:
    string name;
    string pancard_number;
    person(string person_name,string pancardnumber)
    {
        name=person_name;
        pancard_number=pancardnumber;
    }
    void display_details()
    {
        cout<< "person name is :" << name << endl;
        cout<< "person pancardnumber is :" << pancard_number << endl;
        cout<< "=============================" << endl;
    }
};
int main()
{
    string name,pancard;
    vector<person> list_of_users;
    for(int i=0;i<2;i++)
    {
        cout << "enter the name for" << i+1 << ": " << endl;
        cin >> name;
        cout << "enter the pancard" << i+1 << ": " << endl;
        cin >> pancard;
    }
}
