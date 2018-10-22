#include <iostream>
#include <string>

using namespace std;

class Login
{
public:
    void entryCheck()
    {
        string user = "";
        string password = "";
        bool a = true;

        do
        {
            cout <<"Enter login:\n";
            cin >> user;
            cout <<"Enter password:\n";
            cin >> password;
            if (user == "Mike" && password == "dogs")
                a = false;
        } while(a);
    }
};
