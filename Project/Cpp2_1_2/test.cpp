#include <iostream>

using namespace std;

int main()
{
    unsigned int num0;
    float num1 = 0.231689453125f;
    memcpy(&num0, &num1, sizeof(num1));

    cout << num0 << endl;
    cout << num1 << endl;

    unsigned int num2;
    unsigned int num3 = 17;
    memcpy(&num2, &num3, sizeof(num3));
    
    cout << num2 << endl;
    cout << num3 << endl;


    float f1 = 0.1f;
    float f2 = 0.1f;
    double d1 = 0.1;

    cout.precision(64);
    cout << f1 << endl;
    cout << f2 << endl;
    cout << d1 << endl;

    return 0;
}