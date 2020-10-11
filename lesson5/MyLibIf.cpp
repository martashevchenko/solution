#include <iostream>
#include <cmath>
#include "MyLibIf.h"

/*1.Дано целое число. Если оно является положительным, то прибавить к не-
му 1; если отрицательным, то вычесть из него 2; если нулевым, то заме-
нить его на 10. Вывести полученное число.*/
void task_if3() {
    int x;
    std::cout<<"Enter x ";
    std::cin>>x;
    if (x > 0){
        x+=1;
    }
    else if (x<0){
        x-=2;
    }
    else if (x==0){
        x=10;
    }
    std::cout<<x;
}
/*2.Даны три целых числа. Найти количество положительных и количество от-
рицательных чисел в исходном наборе.*/
void task_if5() {
    int a, b, c ,i, k;
    std::cout<<"Enter a -";
    std::cin>>a;
    std::cout<<"Enter b -";
    std::cin>>b;
    std::cout<<"Enter c -";
    std::cin>>c;
    if (a>0 && b<0 && c<0){
        i=1; k=2;
    }
    else if (a>0 && b>0 && c<0){
        i=2; k=1;
    }
    else if (a>0 && b>0 && c>0){
        i=3; k=0;
    }
    else if (a<0 && b<0 && c<0){
        i=0; k=3;
    }
    std::cout<<"Quantity of positive numbers = "<<i<<std::endl;
    std::cout<<"Quantity of negative numbers = "<<k<<std::endl;


}
/*3.Даны две переменные целого типа: A и B. Если их значения не равны, то
присвоить каждой переменной сумму этих значений, а если равны, то при-
своить переменным нулевые значения. Вывести новые значения перемен-
ных A и B. */
void task_if10() {
    int A, B;
    std::cout << "Enter number A - ";
    std::cin >> A;
    std::cout << "Enter number B - ";
    std::cin >> B;
    if (A != B) {
        int sum;
        sum = A + B;
        A=sum;
        B=sum;
    }
    else if (A==B){
        A=0; B=0;
    }

    std::cout<<"A = "<<A<<std::endl;
    std::cout<<"B = "<<B<<std::endl;

}
/*4.Даны три переменные вещественного типа: A, B, C. Если их значения упо-
рядочены по возрастанию, то удвоить их; в противном случае заменить
значение каждой переменной на противоположное. Вывести новые значе-
ния переменных A, B, C.*/
void task_if16() {
    double A, B, C;
    std::cout<<"Enter A = ";
    std::cin>>A;
    std::cout<<"Enter B = ";
    std::cin>>B;
    std::cout<<"Enter C = ";
    std::cin>>C;
    if ((B==(A+C)/2) && ((B-A)>0)){
        A=A*2;
        B=B*2;
        C=C*2;
    }
    else {
        A=-A;
        B=-B;
        C=-C;
    }
    std::cout<<"A ="<<A<<std::endl;
    std::cout<<"B ="<<B<<std::endl;
    std::cout<<"C ="<<C<<std::endl;

}
/*5.Даны три целых числа, одно из которых отлично от двух других, равных
между собой. Определить порядковый номер числа, отличного от осталь-
ных.*/
void task_if18() {
    int a, b, c;
    std::cout<<"a = ";
    std::cin>>a;
    std::cout<<"b = ";
    std::cin>>b;
    std::cout<<"c = ";
    std::cin>>c;
    if (a==b) std::cout<<"3";
    else if (a==c)
        std::cout << "2";

    else if (b==c) std::cout<<"1";
}
/*6.На числовой оси расположены три точки: A, B, C. Определить, какая из
двух последних точек (B или C) расположена ближе к A, и вывести эту точ-
ку и ее расстояние от точки A.*/
void task_if20() {
    double x1, y1, x2, y2, x3, y3, d1, d2;
    std::cout<<"x1 = ";
    std::cin>>x1;
    std::cout<<"y1 = ";
    std::cin>>y1;
    std::cout<<"x2 = ";
    std::cin>>x2;
    std::cout<<"y2 = ";
    std::cin>>y2;
    std::cout<<"x3 = ";
    std::cin>>x3;
    std::cout<<"y3 = ";
    std::cin>>y3;
    d2 = sqrt(pow((x3-x1),2)+(pow((y3-y1),2)));
    d1 = sqrt(pow((x2-x1),2)+(pow((y2-y1),2)));
    if (d1<d2){
        std::cout<<"B is closer to A"<<"   "<<"d = "<<d1<<std::endl;
    }
    else std::cout<<"C is closer to A"<<"   "<<"d = "<<d2<<std::endl;
}
/*7.Для данного вещественного x найти значение следующей функции f, при-
нимающей вещественные значения...*/
void task_if24() {
    double x,y;
    std::cout<<"Enter x =";
    std::cin>>x;
    if (x>0){
        y= 2*sin(x);
        std::cout<<y;
    }
    else if (x<=0){
        y=6-x;
        std::cout<<y;
    }
}
/*8.Дан номер года (положительное целое число). Определить количество
дней в этом году, учитывая, что обычный год насчитывает 365 дней, а ви-
сокосный — 366 дней. Високосным считается год, делящийся на 4, за ис-
ключением тех годов, которые делятся на 100 и не делятся на 400 (напри-
мер, годы 300, 1300 и 1900 не являются високосными, а 1200 и 2000 — яв-
ляются).*/
void task_if28(){
    int x;
    std::cout<<"Enter a year - ";
    std::cin>>x;
    if (x%4==0){
        if ((x%100==0) && (x%400!=0)){
            std::cout<<"Not visoknyu";
        }
        else std::cout<<"Visokosnyu";
    }
    else std::cout<<"Not visokosnyu";
}
/*9.Дано целое число, лежащее в диапазоне 1–999. Вывести его строку-
описание вида «четное двузначное число», «нечетное трехзначное число»
и т. д.*/
void task_if30(){
    int x;
    std::cout<<"Enter a number";
    std::cin>>x;
    if ((x>0)&&(x<1000)){
        if ((x<=100)&&(x%2==0)){
            std::cout<<"The number is ambiguous and even"<<std::endl;
        }
        else if ((x<=100)&&(x%2!=0)){
            std::cout<<"The number is ambiguous and odd"<<std::endl;
        }
        else if ((x>100)&&(x%2==0)){
            std::cout<<"The number is three-digit and even"<<std::endl;
        }
        else if ((x>100)&&(x%2!=0)){
            std::cout<<"The number is three-digit and odd"<<std::endl;
        }
    }
    else std::cout<<"The entered number is not in the range from 99 to 1000";
}