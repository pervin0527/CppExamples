#include <iostream>

using namespace std;

int main()
{
    // bit wise not
    int num1 = 0;
    cout << (~num1) << endl; // -1
    // 00000000000000000000000000000000 --> 0
    // 11111111111111111111111111111111 --> -1
    // 00000000000000000000000000000001 --> 양수 1에 sign bit가 1임

    unsigned int num2 = 0;
    cout << (~num2) << endl;

    int num3 = 5; //  00000101 = 5 = 4 + 1 = 2^2 + 2^0
    int num4 = 10; // 00001010 = 10 = 8 + 2 = 2^3 + 2^1
    int result = num3 & num4; // 00000000
    cout << result << endl;

    /* 
    bit masking
    배열을 사용하지 않고 최대 31일치 출석을 계산하는 방법.
    unsigned int 32 비트로 각 자릿수가 1일, 2일, 3일... 에 출석여부를 나타냄.
    */
    // unsigned literal 5 == 00000000000000000000000000000101
    uint32_t attendanceBook = 5u;
    
    // 첫째날에 출석을 했는가?
    if (attendanceBook & 1)
        cout << "1st" << endl; 

    if (attendanceBook & (int)pow(2, 0))
        cout << "1st" << endl; 

    if (attendanceBook & 2)
        cout << "2nd" << endl;

    if (attendanceBook & (int)pow(2, 1))
        cout << "2nd" << endl; 

    // 셋째날
    if (attendanceBook & 4)
        // 00000000000000000000000000000100
        cout << "3th" << endl;

    if (attendanceBook & (int)pow(2, 2))
        cout << "3th" << endl; 

    if(attendanceBook & ((int)pow(2, 0) + (int)pow(2, 1)))
        cout << "1 or 2" << endl;

    int flag = (int)pow(2, 0) + (int)pow(2, 1);
    if ((attendanceBook & flag) == flag)
        cout << "1 and 2" << endl;

    return 0;
}