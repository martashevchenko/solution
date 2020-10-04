#include <iostream>
void integer_1 (){
    int L;
    std::cout<<"L = ";
    std::cin>>L;
    std::cout<<L/100;
}

void integer_4() {
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

void integer_10(){
    int a2,a3,a;
    std::cout<<"a="<<std::endl;
    std::cin>>a;
    a3=a%10;
    a2=(a/10)%10;
    std::cout<<a2<<std::endl;
    std::cout<<a3<<std::endl;
}

void integer_11(){
    int a, a1, a2, a3, sum;
    std::cout<<"a=";
    std::cin>>a;
    a1 =a/100;
    a2 = (a/10)%10;
    a3 = a%10;
    sum = a1+a2+a3;
    std::cout<<"sum = "<<sum;
}

void integer_14(){
    int a, b,a3;
    std::cout<<"a = ";
    std::cin>>a;
    a3=a%10;
    b=(a%10)*100+(a/10);
    std::cout<<"b = "<<b;
}

void integer_19(){
    int N;
    std::cout<<"N = ";
    std::cin>>N;
    std::cout<<N/60;
}

void integer_21(){
    int N_seconds, N_lastminute, N_seconds_from_lastminute;
    std::cout<<"N_seconds = ";
    std::cin>>N_seconds;
    N_lastminute = N_seconds/60;
    N_seconds_from_lastminute = N_seconds - (N_lastminute*60);
    std::cout<<"N_seconds_from_lastminute = "<<N_seconds_from_lastminute;
}

void integer_24(){
    int K, Nt, Nd;//K-день року
    std::cout<<"K = ";
    std::cin>>K;
    Nt=K/7;
    Nd=K-(Nt*7);
    std::cout<<"Nd = "<<Nd;
}

void integer_30() {
    int Rik, Stolittya;
    std::cout<<"Rik = ";
    std::cin>>Rik;
    Stolittya = (Rik/100)+1;
    std::cout<<"Stolittya = "<<Stolittya;
}

void boolean_1(){
    int A;
    std::cout<<"A = ";
    std::cin>>A;
    bool res(A>0);
    std::cout<< res;
}

void boolean_5() {
    int A, B;
    std::cout<<"A = ";
    std::cin>>A;
    std::cout<<"B = ";
    std::cin>>B;
    bool res(A>=0 && B<-2);
    std::cout<<res;
}

void boolean_9(){
    int A, B;
    std::cout<<"A = ";
    std::cin>>A;
    std::cout<<"B = ";
    std::cin>>B;
    bool res (A%2==0 | B%2==0);
    std::cout<<res;
}

void boolean_12() {
    int A, B, C;
    std::cout<<"A = ";
    std::cin>>A;
    std::cout<<"B = ";
    std::cin>>B;
    std::cout<<"C = ";
    std::cin>>C;
    bool res(A>0 && B>0 && C>0);
    std::cout<<res;
}

void boolean_16() {
    int A;
    std::cout<<"A = ";
    std::cin>>A;
    bool res (A>9 && A<100);
    std::cout<<res;
}

void boolean_20() {
    int A, a1, a2, a3;
    std::cout<<"A = ";
    std::cin>>A;
    a1=A/100;
    a2=(A/10)%10;
    a3=A%10;
    bool res(a1!=a2 && a2!=a3 && a1!=a3);
    std::cout<<res;

}

void boolean_23(){
    int A, a1, a2, a3;
    std::cout<<"A = ";
    std::cin>>A;
    a1=A/100;
    a2=(A/10)%10;
    a3=A%10;
    bool res(a1==a2 && a2==a3 && a1==a3);
    std::cout<<res;
}

void boolean_26() {
    int x, y;
    std::cout<<"x = ";
    std::cin>>x;
    std::cout<<"y = ";
    std::cin>>y;
    bool res(x>0 && y<0);
    std::cout<<res;
}

void boolean_28() {
    int x,y;
    std::cout<<"x = ";
    std::cin>>x;
    std::cout<<"y = ";
    std::cin>>y;
    bool res((x>0 && y>0)| (x<0 && y<0));
    std::cout<<res;
}

void boolean_31() {
    int a, b, c;
    std::cout<<"a = ";
    std::cin>>a;
    std::cout<<"b = ";
    std::cin>>b;
    std::cout<<"c = ";
    std::cin>>c;
    bool res((a==b && a!=c) | (a==c && a!=b )| (c==b && c!=a));
    std::cout<<res;
}

void boolean_36() {
    int x1, y1, x2,y2;
    std::cout<<"x1= ";
    std::cin>>x1;
    std::cout<<"y1= ";
    std::cin>>y1;
    std::cout<<"x2= ";
    std::cin>>x2;
    std::cout<<"y2= ";
    std::cin>>y2;
    bool res(x1==x2 | y1==y2);
    std::cout<<res;
}

void boolean_37() {
    int x1,y1,x2,y2;
    std::cout<<"x1= ";
    std::cin>>x1;
    std::cout<<"y1= ";
    std::cin>>y1;
    std::cout<<"x2= ";
    std::cin>>x2;
    std::cout<<"y2= ";
    std::cin>>y2;
    bool res(x2==x1+1 | x2==x1-1 | y2==y1+1 | y2==y1-1);
    std::cout<<res;
}

    int main() {
    return 0;
}
