#include <iostream>
using namespace std ;
////VARIANT 2
int main() {

    int zap = 20;
    int res_zap = ~zap;
    cout << res_zap << endl;

    int or1 = 136  , or2 = 67; /// 1000 1000 , 0100 0011
    int res_or = or1 | or2; /// 1100 1011
    cout << res_or << endl;

    int and1 = 91 , and2 = 124;
    int res_and = and1 & and2;
    cout << res_and << endl;

    int xor1 = 36 , xor2 = 80; /// 0010 0100 , 0101 0000
    int res_xor = xor1 ^ xor2; /// 0111 0100
    cout << res_xor << endl;

    int left_shift = 909; /// 0011 1000 1101
    int res_left = left_shift << 3; /// 0001 1100 0110 1000
    cout << res_left << endl;

    int right_shift = -95;
    int res_right = right_shift >> 3;
    cout << res_right << endl;


    return 0;




}
