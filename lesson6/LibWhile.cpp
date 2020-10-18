#include <iostream>
#include "LibWhile.h"


void while5(){
    int n;
    int i=0;
    int k=0;
    std::cout<<"n =";
    std::cin>>n;
    while (n>1){
        n/=2;
        k=k+1;
    }
    std::cout<<k;

}

void while15(){
    int p;
    int k=0;
    float s =1000;
    std::cout<<"Enter p =";
    std::cin>>p;
    while (s<1100){
        s=s+s*p/100;
        k=k+1;
    }
    std::cout<<"s ="<<s<<std::endl;
    std::cout<<"k ="<<k<<std::endl;


}
