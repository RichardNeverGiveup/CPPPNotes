#include <iostream>
int main(){
    int sum = 0, value = 0;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
// when we use console to input data, we need to use ctrol-d to represent end-of-file
// like 1 2 3 4 5 <c-d>
