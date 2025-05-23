#include <iostream>
#include <vector>
using namespace std;
class person
{
    public:
    string name;
    string pancard_number;
    string aadhar_card_number;
    person(string person_name,string pancardnumber,string aadharcardnumber)
    {
        name=person_name;
        pancard_number=pancardnumber;
        aadhar_card_number=aadharcardnumber;
    }
    void display_details()
    {
        cout<< "person name is :" << name << endl;
        cout<< "person pancardnumber is :" << pancard_number << endl;
        cout<< "person aadharcardnumber is :" << aadhar_card_number << endl;
        cout<< "=============================" << endl;
    }
};
int main()
{
    vector < person > list_of_users;
    list_of_users.push_back(person("user1","pcard124","acard136"));
    list_of_users.push_back(person("user1","pcard124","acard136"));
    list_of_users.push_back(person("user1","pcard124","acard136"));
    for(person user : list_of_users )
    {
        user.display_details();
    }
}
    


    
