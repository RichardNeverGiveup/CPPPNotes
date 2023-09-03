#include <iostream>
using namespace std;
int main(){
    // type conversion during assignment.
    bool b = 42;
    int ii = 3.14;
    //1. out-of-range value to an object of signed type, result is undefined
    signed char c2 = 259;
    signed char c1 = 59;
    cout << "undefined behavior: c2 is ";
    cout << (int)c2 << endl; //if not cast to int here, c2 will be the ASCII char corresponding to number 3
    cout << "normail behavior: c1 is " << (int)c1 << endl; // if not cast, c1 will be ;
    cout << "abc" << endl; // have not include string header file, so this is not usable!

    // type conversion in Expressions implicitly.
    unsigned u = 10;
    int i = -42;
    //2. mixing signed and unsigned in expressions, signed will be transformed into unsigned automatically.
    cout << i + u << endl;
    //3. subtract a value from an unsigned, make sure the result is not negative, may cause infinite loops!!!
    unsigned u1 = 42, u2 = 10;
    cout << u2 - u1 << endl;
    for (unsigned u = 10; u >= 0; u--){ // unsigned is always greater than 0
        cout << u << endl;
        break;
    }
    //4. string literals is array of constant chars, ended with '\0'
    //two literal string appear adjacent and separated only be spaces, tabes or newlines are concatenated into one
    cout << "this is a really long "
        "string that span two lines" << endl;
    //5. true/false are bool literals, nullptr is a pointer literal
    int* npt = nullptr;
    cout << "This is a nullptr literal: " << npt << " ." << endl;
    


    return 0;
}

