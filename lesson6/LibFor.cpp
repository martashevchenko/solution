#include <iostream>
#include <cmath>
#include "LibFor.h"

void for8(){
    int a, b;
    int sum =0;
    std::cout<<"a =";
    std::cin>>a;
    std::cout<<"b =";
    std::cin>>b;
    for (int i=a; i<=b; i++){
        sum=sum+i;
    }
    std::cout<<sum;
}

void for15(){
    int a,n;
    int N=1;
    std::cout<<"a =";
    std::cin>>a;
    std::cout<<"n =";
    std::cin>>n;
    while (n!=0){
        N=N*a;
        n--;
    }
    std::cout<<N;
}

void for25(){
    int  n;
    float x;
    std::cout<<"x =";
    std::cin>>x;
    std::cout<<"n =";
    std::cin>>n;
    for (int i=1; i<=n; i++){
        x=x-pow((-1),n-1)*(pow(x,n)/n);
    }
    std::cout<<x;


}

void for38(){
    int n;
    double sum =0;
    int i=0;
    std::cout<<"n =";
    std::cin>>n;
    for (int j=n; j>=1; j--){
        i++;
        for (i; i<=n;){
            sum=sum+pow(i,j);
            break;
        }

    }
    std::cout<<sum;
}

