#include <iostream>
using namespace std;

int main(){
    //1.normally reference is lvalue reference. A reference is an Alias, it's an alternative name for an object.
    int val = 100;
    int &refVal = val;
    // int &refVal2; 
    //2. a reference must be initialized and no way to rebind!
    cout << "ref is just an alias, before :" << refVal << endl;
    refVal = 2;
    cout << "ref is just an alias, after :" << refVal << endl;
    int &refVal2 = refVal;
    cout << "init a ref with another ref :" << refVal2 << endl;
    
    //3. how to define multi refs? each identifier must be preceded by a & symbol
    int x = 12, y = 14;
    int &r = x, r2 = y;
    // now r is a ref, r2 is not a ref. r2 is a int
    cout << "x is : " << x << endl;
    r = 18;
    cout << "change r to 18 then x is : " << x << endl;
    cout << "y is : " << y << endl;
    r2 = 28;
    cout << "change r2 to 28 then y is : " << y << endl; 
    //4. can not bound ref to a literal.
    //int &ref3 = 10; 
       
     return 0;
}
