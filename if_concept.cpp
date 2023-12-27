#include <iostream>
using namespace std;
int main()
{
    int filling_status;

    cout << "Enter yout tax filling status: ";
    cin >> filling_status;

    if (filling_status == 1)
        cout << "Single" << endl;
    if (filling_status == 2)
        cout << "Married - filling jointly" << endl;
    if (filling_status == 3)
        cout << "Married - filling seperately";
    return 0;
}