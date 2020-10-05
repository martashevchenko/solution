#include <iostream>
void task1(){
    int a, b, c, d;
    std::cin>>a>>b>>c>>d;
    if (a>b && a>c && a>d){
        std::cout<<a;
    }
    if (b>a && b>c && b>d){
        std::cout<<b;
    }
    if (c>a && c>b && c>d){
        std::cout<<c;
    }
    if (d>a && d>b && d>c){
        std::cout<<d;
    }
}
void task3(){
    int a, b, c, d,f;
    std::cin>>a>>b>>c>>d;
    if (a>b && a>c && a>d && a>f){
        std::cout<<a;
    }
    else if (b>a && b>c && b>d && b>f){
        std::cout<<b;
    }
    else if (c>a && c>b && c>d && c>f){
        std::cout<<c;
    }
    else if (d>a && d>b && d>c && d>f){
        std::cout<<d;
    }
    else if (f>a && f>b && f>c && f>d){
        std::cout<<f;
    }
    else if (a<b && a<c && a<d && a<f){
        std::cout<<a;
    }
    else if (b<a && b<c && b<d && b<f){
        std::cout<<b;
    }
    else if (c<a && c<b && c<d && c<f){
        std::cout<<c;
    }
    else if (d<a && d<b && d<c && d<f){
        std::cout<<d;
    }
    else if (f<a && f<b && f<c && f<d){
        std::cout<<f;
    }

}
void task4() {
    int a; std::string rez;
    std::cin>>a;
    bool f =true;
    switch (a){
        case(12): rez="Winter"; break;
        case(1): rez="Winter"; break;
        case(2): rez="Winter"; break;
        case(3): rez="Spring"; break;
        case(4): rez="Spring"; break;
        case(5): rez="Spring"; break;
        case(6): rez="Summer"; break;
        case(7): rez="Summer"; break;
        case(8): rez="Summer"; break;
        case(9): rez="Fall"; break;
        case(10): rez="Fall"; break;
        case(11): rez="Fall"; break;
        default:std::cout<<"\nUnknown operation"; f = false;
    }
    if (f) std::cout<<"\nResult:"<<rez;

}
int main() {
    return 0;
}
