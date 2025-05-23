#include <iostream>
#include <vector>
using namespace std;
class person
{
    public:
    string name;
    string pan_card_number;
    person(string user_name,string p_number)
    {
        name=user_name;
        pan_card_number = p_number;
    }
    void display_details()
    {
        cout<< "bank user details :" << endl;
        cout<< "uername:" << name << endl;
        cout<< "pancard :" << pan_card_number << endl;
        cout<< "=============================" << endl;
    }
};
int main()
{
    string name,pancard;
    vector<person> list_of_users;
    int options;
    while(true)
    {
        cout << "choose the option:" << endl;
        cout << "1. create an account" <<endl;
        cout << "2. list all the users" << endl;
        cout << "3. exit the program" << endl;
        cin >> options;
        switch(options)
        {
        case 1:
            cout << "create an account" << endl;
            cout << "enter the name for" << ": " << endl;
            cin >> name;
            cout << "enter the pancard" << ": " << endl;
            cin >> pancard;
            list_of_users.push_back(person(name, pancard));
            break;

        case 2:
            cout << "listing all the accounts" << endl;
            for (person user : list_of_users)
            {
                user.display_details();
            }
            break;

        case 3:
            cout << "exiting the program" << endl;
            return 0;
            break;

        default:
            break;
        }
    }
}
    
    


    
