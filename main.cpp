#include "Login.h"
#include "Date.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Date x;
    x.day = 22;
    x.month = 10;
    x.year = 2018;

    Login notKnown;
    notKnown.entryCheck();
    system ("pause");
    return 0;
}
