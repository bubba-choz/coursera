#include <iostream>

int main(){
    int *i = new int;
    *i = 0;
    int &j = *i;
    j++;
    std::cout << j <<std::endl;

    return 0;
}