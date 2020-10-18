#include <iostream>
#include "LibArray.h"


void array5() {
    int N,i;
    int a[N];
    std::cout<<"N =";
    std::cin>>N;
    a[0]=1;
    a[1]=1;
    for (i=2; i<N; ++i){
        a[i]=a[i-2]+a[i-1];
    }
    for (i=0; i<N; ++i){
        std::cout<<"a[i] ="<<a[i]<<std::endl;
    }
}

