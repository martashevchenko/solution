#include <iostream>
#include <math.h>
#include "LibSeries.h"

void series5(){
    int n;
    float r;
    float sum=0;
    std::cout<<"n =";
    std::cin>>n;
    for (int i=1; i<=n; i++){
        std::cout<<"r =";
        std::cin>>r;
        std::cout<<"int part of a r = "<<floor(r)<<std::endl;
        sum+=floor(r);
    }
    std::cout<<sum;
}

void series15(){
    int K, x,r;
    std::cout<<"K =";
    std::cin>>K;
    while(r!=0){
        std::cout<<"r =";
        std::cin>>r;
        if (r>K) x=r;
        else x=0;
    }
    std::cout<<"x ="<<x;
}

void series25(){
    int n, k=0, a, SUM=0, sum1=0, sum2=0;

    std::cout <<"n="; std::cin >>n;

    for (int i = 1; i <=n; i++)
    {
        std::cin >>a;
        SUM+=a;
        if (a==0) {sum2=0; k++;}
        if (a==0 && k==1) sum1=SUM;
        sum2+=a;
    }
    std::cout <<"sum="<<SUM-sum1-sum2<<std::endl;
}


