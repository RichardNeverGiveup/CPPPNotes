//1. unlike ref, pointer is an object and can be assigned and copied
//2. ref needs to be init when it is defined, pointers doest need to, but block scope pointers have undefined value if not init.
#include <iostream>
using namespace std;
int main(){
    int *p1, *p2; //3.  * must be repeated for each pointer variable.
    double *p3, p4;
    //4. ref is not object, so we can not have pointer to a ref.
    int x = 10;
    int &ref = x;
    //int *pp = ref; 
    //5.valid pointers has 3type: a. to obj; b. to adress just past the end of an obj; c. null pointer 
    //copy or access invalid pointer will cause undefined behavior.
    //although b & c kinds are valid, but the do not point to any obj, if we use them to access obj, the behavior is undefined.
    //6. nullptr: called null pointer constant. c++11. is a literal that has type can be converted to any other pointer type.
    //7. illegal to assign int variable to a pointer, even its value is 0
    int zero = 0;
    //int *ptr1 = zero;
    //the above is different with the following
    int *ptr1 = 0; // this is a way to init a ptr with null
    //8. void pointer/general pointer: void *   can hold address of any obj
    //used to compare; pass as param; as return from func; assign to another void*;


    return 0;
}
