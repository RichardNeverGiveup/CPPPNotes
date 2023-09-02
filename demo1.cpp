#include <iostream>
int main(){
    std::cout << "Enter two nums: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2; // cin >> v1, >> is called input operator, it returns its left operand
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

    return 0;
}

