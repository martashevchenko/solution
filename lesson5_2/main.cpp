#include <iostream>
#include <conio.h>


void rectangular() {
    int a, b;
    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;
    for (int j = 1; j <= b; j++) {
        for (int i = 1; i <= a; i++) {
            if ((j==1)||(i==1)||(i==a)||(j==b))  std::cout << "*" << " ";
            else std::cout << " " << " ";
        }
        std::cout << std::endl;
    }
}

void triangular() {
    int a;
    std::cout<<"Enter a number =";
    std::cin>>a;
    for (int height=1; height<=a; height++){

        for (int width=1; width<=height; width++){

            if (width>1 && width<height && height>1 && height<a){
                std::cout<<" ";
            }
            else std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}

void triangular2(){
    int n, j, i;
    std::cout<<"Enter a height of a triangle";
    std::cin>>n;
    for(i=1; i<=n; i++){
        for (j=1; j<=(2*n-1); j++){
            if (j>=n-(i-1)&&j<=n+(i-1)){
                std::cout<<" ";
            }
            else std::cout<<" ";
        }
        std::cout<<std::endl;
    }



}

int menu();
int main()
{
    while(true){
    int answer=menu();
    switch (answer)
    {
        case 0: rectangular(); break;
        case 1: triangular();break;
        case 2: triangular2();break;
        case 3: std::cout<<"Exit";
    }
    system("pause");
        if (answer==3) break;
    }


    return 0;
}
int menu() {
    int key=0;
    int code;
    do {
        system("cls");
        key=(key+4)%4;
        if (key==0) std::cout<<"->Show a rectangular"<<std::endl;
        else  std::cout<<"   Show a rectangular"<<std::endl;
        if (key==1) std::cout<<"-> Show a triangular"<<std::endl;
        else  std::cout<<"   Show a triangular"<<std::endl;
        if (key==2) std::cout<<"-> Show a triangular2"<<std::endl;
        else  std::cout<<"   Show a triangular2"<<std::endl;
        if (key==3) std::cout<<"-> Exit"<<std::endl;
        else  std::cout<<"   Exit"<<std::endl;
        code=_getch();
        if (code==224)
            code=_getch();
            if (code==80) key++;
            if (code==72) key--;
        }
    while(code!=13);
    system("cls");
    return key;
}
