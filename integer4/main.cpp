#include <iostream>

int main()
{
    int a, b;
    std::cout<<"a = ";
    std::cin>>a;
    std::cout<<"b = ";
    std::cin>>b;
    if (a>b){
        std::cout<<a/b;
    }
    else {
        std::cout<<"Error a<b";
    }
}


