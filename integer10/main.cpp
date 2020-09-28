#include <iostream>

int main() {
    int a, a3, a2;
    std::cout<<"a = ";
    std::cin>>a;
    a3 = a%10;
    a2 = (a/10)%10;
    std::cout<<"a3 ="<<a3<<std::endl;
    std::cout<<"a2 ="<<a2<<std::endl;
    return 0;
}
