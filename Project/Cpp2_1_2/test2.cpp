#include <iostream>
#include <cfloat>

using namespace std;

int main()
{
    float num0 = 1.0f;
    float num1 = 0.0f;

    for (int i = 0; i < 1000; i++)
        num1 = num1 + 0.001;

    if (num0 == num1)
        cout << "Equal 0" << endl;
    if (fabsf(num0 - num1) < FLT_EPSILON)
        cout << "Equal 1" << endl;

    // Epsilon 유도
    unsigned int intNum0 = 0b00111111100000000000000000000000;
    float fNum0;
    memcpy(&fNum0, &intNum0, sizeof(intNum0));
    cout << fNum0 << endl; // 1.0f

    unsigned int intNum1 = 0b00111111100000000000000000000001;
    float fNum1;
    memcpy(&fNum1, &intNum1, sizeof(intNum1));
    cout << fNum1 << endl; // 1.00000011920928955078125f, float이 표현할 수 있는 1보다 큰, 가장 작은 수

    float epsilon = fNum1 - fNum0;
    cout << epsilon << endl;
    cout << FLT_EPSILON << endl;

    return 0;
}