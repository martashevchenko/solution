#include <iostream>
int FindMax(int x, int y) {
    if (x>y) return x;
    else return y;
}

void task4(){
    int m;
    std::cout<<"Enter a number of a month - ";
    std::cin>>m;
    switch(m){
        case (12):
            std::cout<<"Winter"; break;
        case (1):
            std::cout<<"Winter"; break;
        case (2):
            std::cout<<"Winter"; break;
        case (3):
            std::cout<<"Spring"; break;
        case (4):
            std::cout<<"Spring"; break;
        case (5):
            std::cout<<"Spring"; break;
        case (6):
            std::cout<<"Summer"; break;
        case(7):
            std::cout<<"Summer"; break;
        case(8):
            std::cout<<"Summer"; break;
        case (9):
            std::cout<<"Fall"; break;
        case (10):
            std::cout<<"Fall"; break;
        case (11):
            std::cout<<"Fall"; break;
        default:
            std::cout<<"There is not exist this month";
    }

}

int FindMin(int x, int y) {
    if (x<y) return x;
    else return y;
}

int main() {
    int a, b, c , d,f;
    int max1,max2,min2, i;
    i=0;
    std::cout<<"Enter a first number -  ";
    std::cin>>a;
    std::cout<<"Enter a second number - ";
    std::cin>>b;
    std::cout<<"Enter a third number - ";
    std::cin>>c;
    std::cout<<"Enter a fourth number - ";
    std::cin>>d;
    std::cout<<"Enter a fifth number - ";
    std::cin>>f;
    max1 = FindMax(a,FindMax(b, FindMax(c,d)));
    std::cout<<"max1 = "<<max1<<std::endl;
    if (a==max1){
        i=i+1;
    }
    if (b==max1) {
        ++i;
    }
    if (c==max1) {
        ++i;
    }
    if (d==max1) {
        ++i;
    }
    std::cout<<"Amount max is - "<<i<<std::endl;
    max2=FindMax(a,FindMax(b,FindMax(c,FindMax(d,f))));
    std::cout<<"max2 = "<<max2<<std::endl;
    min2=FindMin(a,FindMin(b,FindMin(c, FindMin(d,f))));
    std::cout<<"min2 = "<<min2<<std::endl;

    task4();
    return 0;
}

