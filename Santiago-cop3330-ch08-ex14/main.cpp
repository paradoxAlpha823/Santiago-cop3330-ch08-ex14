#include <iostream>
using namespace std;

void f(const int a)                                                                                                     // Omitting the 'const' allows the program to execute without error and prints "-12"
{                                                                                                                       // Answers to the written questions are in the header (.h) file
    a++;                                                                                                                // Commenting out the 'a++;' also makes valid code
    int z = a-18;                                                                                                       // This code intentionally crashes to show the issues with declaring const
    cout << z;
}

int main() {
    int a = 5;
    f(a);
    return 0;
}


