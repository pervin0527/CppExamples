#include <iostream>
#include <limits>

using namespace std;

int main()
{
    char a;
    cin >> a;
    cout << a;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cin >> a;
    cout << a;

    return 0;
}