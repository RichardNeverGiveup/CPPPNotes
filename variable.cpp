#include <iostream>
using namespace std;

int outsidefunc;

int main(){
    // double discout = price * 0.16, price = 100;
    // 1. List initialization: use curly braces, compiler will not let us list initialize variable of built-in type if loss of information may happen.
    int a = 0;
    //int b = {0.369}; // error!
    int c {0};
    int d (0);
    
    //1. built-in type & outside any func: default init is 0; 
    cout << "outside any func default initialization: " << outsidefunc << endl;
    //2. built-in type & inside func: default init is undefined behavior; unexpected thing will happen. 
    int insidefunc;
    cout << "inside any func default init: " << insidefunc << endl;
    //3. separate a program into different files, we need declare a func/var in a file, then use it in b file.
    //a func/var can be defined only once, but can be declared many time.
    //we define it in a fine, then declare it in b file and use it, this accomplished our goal
    //but how to declare a var and not trigger the default init mechanism?
    extern int varfromA;
    int varinA; // this is define a variable, because the default init will happen, although its undefined behavior since it is built-in & inside func default init.
    cout << "varinA has a value of " << varinA << endl;
    //4. if we dont link another file has varfromA defined, the compiler wont compile.
    //cout << "varfromA has a value of " << varfromA << endl; 
    //5. names declared in the outerscope can also be redefined in an inner scope.
    cout << "before inner scope redefine :" << outsidefunc << endl;
    int outsidefunc = 250;
    cout << "after inner scope redefine :" << outsidefunc << endl;
    cout << "after inner scope redefine use the scope operator :" << ::outsidefunc << endl;

    return 0;
}
