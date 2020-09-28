#include <iostream>

int main() {
    int a, a1, a2, sum, riz;//a1 - перша цифра числа а, а2 - друга цифра числа а, riz - різниця цифр а1 та а2,sum - сума цифр а1 та а2
    std::cout<<"a = ";
    std::cin>>a;
    a1 = a/10;
    a2 = a%10;
    sum = a1 + a2;
    riz = a1 - a2;
    std::cout<<"a1 = "<<a1<<std::endl<<"a2 = "<<a2<<std::endl<<"sum = "<<sum<<std::endl<<"riz = "<<riz;
    return 0;
}
