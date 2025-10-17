#include <iostream>

using namespace std;
//Task 1
int Task1() {
    unsigned short us_var;
    int i_var;
    float f_var;
    double d_var;

    unsigned short* us_ptr;
    int* i_ptr;
    float* f_ptr;
    double* d_ptr;

    void* void_ptr;

    us_ptr = &us_var;
    i_ptr = &i_var;
    f_ptr = &f_var;
    d_ptr = &d_var;

    *us_ptr = 52;
    *i_ptr = 886;
    *f_ptr = -414.5435f;
    *d_ptr = 12.4e35;

    std::cout << "size us_var: " << sizeof(us_var) << " size us_ptr: " << sizeof(us_ptr) << std::endl;
    std::cout << "size i_var:  " << sizeof(i_var)  << " size i_ptr:  " << sizeof(i_ptr)  << std::endl;
    std::cout << "size f_var:  " << sizeof(f_var)  << " size f_ptr:  " << sizeof(f_ptr)  << std::endl;
    std::cout << "size d_var:  " << sizeof(d_var)  << " size d_ptr:  " << sizeof(d_ptr)  << std::endl;
    std::cout << "size void_ptr: " << sizeof(void_ptr) << std::endl << std::endl;

    void_ptr = &i_ptr;

    std::cout << "adres in void_ptr: " << void_ptr << std::endl;
    std::cout << "adres i_ptr:  " << &i_ptr << std::endl;
    return 0;
}

//Task2
int Task2() {

    char literal_char1, literal_char2, literal_char3;
    char code_char1, code_char2, code_char3;
    const char symbol = '!';
    char char1 = 'Z';
    char char2 = '\n';

    literal_char1 = 'l';
    literal_char2 = 'T';
    literal_char3 = '2';

    code_char1 = 0x2d;
    code_char2 = 0x32;
    code_char3 = 0x4;

    return 0;
}

//Task 3
int Task3() {
    int i_var;
    float f_var;
    unsigned short us_var;

    i_var = 926;
    f_var = 4.811e-1f;
    us_var = 1914;

    double d_res;
    int i_res;
    char c_res;

    d_res = i_var;
    i_res = static_cast<int>(f_var);
    c_res = *reinterpret_cast<char*>(&us_var);
    return 0;
}

int main () {
    //Task1();
    //Task2();
    //Task3();
}