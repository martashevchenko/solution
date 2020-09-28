#include <iostream>

int main() {
    int a, a1, a2, b;//a1 - перша цифра числа а, а2 - друга цифра числа а, riz - різниця цифр а1 та а2,sum - сума цифр а1 та а2
    std::cout<<"a = ";
    std::cin>>a;
    a1 = a/10;
    a2 = a%10;
    b=a2*10+a1;
    std::cout<<"b = "<<b;

    return 0;
}
