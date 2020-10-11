#include <iostream>
#include <cmath>
#include "MyLibSwitch.h"

/*10.Арифметические действия над числами пронумерованы следующим
образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.
Дан номер действия N (целое число в диапазоне 1–4) и вещественные чис-
ла A и B (В не равно 0). Выполнить над числами указанное действие и вы-
вести результат.*/
void task_case5(){
    int n, a, b;
    std::cout<<"Enter a number in range from 1 to 4";
    std::cin>>n;
    std::cout<<"Enter a number a -";
    std::cin>>a;
    std::cout<<"Enter a number b -";
    std::cin>>b;
    switch(n){
        case(1): std::cout<<"a + b = "<<a+b; break;
        case(2): std::cout<<"a - b = "<<a-b; break;
        case(3): std::cout<<"a*b = "<<a*b; break;
        case(4): std::cout<<"a/b = "<<a/b; break;
        default: std::cout<<"You entered a number not in the range from 1 to 4  ";
    }
}
/*11.Единицы массы пронумерованы следующим образом: 1 — килограмм,
2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер. Дан номер единицы
массы (целое число в диапазоне 1–5) и масса тела в этих единицах (веще-
ственное число). Найти массу тела в килограммах.*/
void task_case7(){
    int x;
    std::cout<<"Enter a number from 1 to 5";
    std::cin>>x;

}
/*12.Робот может перемещаться в четырех направлениях («С» — север,
«З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые ко-
манды: 0 — продолжать движение, 1 — поворот налево, –1 — поворот на-
право. Дан символ C — исходное направление робота и целое число N —
посланная ему команда. Вывести направление робота после выполнения
полученной команды.*/
void task_case10(){
    int x;
    std::cout<<"Enter a number from 0 to 2";
    std::cin>>x;
    char c;
    std::cout<<"Enter a letter N, S, W, E";
    std::cin>>c;
    if (c=='N'){
        switch(x){
            case(0): std::cout<<"Continue heading to the N";
            case(1): std::cout<<"Heading to the West";
            case(2): std::cout<<"Heading to thr East";
        }
    }
    else if (c=='S'){
        switch(x){
            case(0):std::cout<<"Continue heading to the South";
            case(1):std::cout<<"Heading to the West";
            case(2):std::cout<<"Heading to the East";
        }
    }
    else if (c=='W'){
        switch(x){
            case(0):std::cout<<"Continue heading to the West";
            case(1):std::cout<<"Heading to the North";
            case(2):std::cout<<"Heading to the South";
        }
    }
    else if (c=='E'){
        switch(x){
            case(0):std::cout<<"Continue heading to the East";
            case(1):std::cout<<"Heading to the South";
            case(2):std::cout<<"Heading to the North";
        }
    }


}
/*13.Элементы равнобедренного прямоугольного треугольника пронумеро-
ваны следующим образом: 1 — катет a, 2 — гипотенуза c = a 2 , 3 — вы-
сота h, опущенная на гипотенузу (h = c/2), 4 — площадь S = c·h/2. Дан но-
мер одного из этих элементов и его значение. Вывести значения остальных
элементов данного треугольника (в том же порядке).*/
void task_case13(){
    float a, c, h, s;
    int n;
    std::cout<<"Enter a number from 2 to 4 - ";
    std::cin>>n;
    std::cout<<"Enter a side length - ";
    std::cin>>a;
    c=a*sqrt(2);
    h=c/2;
    s=c*h/2;
    switch(n){
        case(2): std::cout<<"hypotenuse ="<<c; break;
        case(3): std::cout<<"height ="<<h; break;
        case(4): std::cout<<"area ="<<s; break;
    }
}
/*14.В восточном календаре принят 60-летний цикл, состоящий из 12-лет-
них подциклов, обозначаемых названиями цвета: зеленый, красный, жел-
тый, белый и черный. В каждом подцикле годы носят названия животных:
крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, ку-
рицы, собаки и свиньи. По номеру года определить его название, если 1984
год — начало цикла: «год зеленой крысы».*/
void animals(int m) {
    switch (m) {
        case(0): std::cout<<" of a rat";break;
        case(1): std::cout<<" of a cow";break;
        case(2): std::cout<<" of a tiger";break;
        case(3): std::cout<<" of a hare";break;
        case(4): std::cout<<" of a dragon";break;
        case(5): std::cout<<" of a snake";break;
        case(6): std::cout<<" of a horse";break;
        case(7): std::cout<<" of a ship";break;
        case(8): std::cout<<" of a monkey";break;
        case(9): std::cout<<" of a chicken";break;
        case(10): std::cout<<" of a dog";break;
        case(11): std::cout<<" of a pig";break;
    }
}
void task_case19(){
    int n;
    std::cout<<"Enter a year\n";
    std::cin>>n;
    n = (n-1984)%60;
    switch(n/12) {
        case (0):
            std::cout << "Green year";
            break;
        case (1):
            std::cout << "Red year";
            break;
        case (2):
            std::cout << "Yellow year";
            break;
        case (3):
            std::cout << "White year";
            break;
        case (4):
            std::cout << "Black year";
            break;
    }
    animals(n%12);
}
/*15.Даны два целых числа: D (день) и M (месяц), определяющие правиль-
ную дату. Вывести знак Зодиака, соответствующий этой дате: «Водолей»
(20.1–18.2), «Рыбы» (19.2–20.3), «Овен» (21.3–19.4), «Телец» (20.4–20.5),
«Близнецы» (21.5–21.6), «Рак» (22.6–22.7), «Лев» (23.7–22.8), «Дева»
(23.8–22.9), «Весы» (23.9–22.10), «Скорпион» (23.10–22.11), «Стрелец»
(23.11–21.12), «Козерог» (22.12–19.1).*/
void task_case20(){
    int d, m;
    std::cout<<"Enter a number from 1 to 12";
    std::cin>>m;
    std::cout<<"Enter a number from 1 to 31";
    std::cin>>d;
    switch(m){
        case(1): if (d<=19) {
                std::cout<<"Kozerig";
            }
            else if (d>19) {
                std::cout<<"Vodoley";
            }
            break;
        case(2): if (d<19) {
                std::cout<<"Vodoley";
            }
            else if (d>=19) {
                std::cout<<"Ryby";
            }
            break;
        case(3): if (d<21) {
                std::cout<<"Ryby";
            }
            else if (d>=21) {
                std::cout<<"Oven";
            }
            break;
        case(4): if (d<20) {
                std::cout<<"Oven";
            }
            else if (d>=20) {
                std::cout<<"Telez";
            }
            break;
        case(5): if (d<21) {
                std::cout<<"Telez";
            }
            else if (d>=21) {
                std::cout<<"Bliznetsy";
            }
            break;
        case(6): if (d<22) {
                std::cout<<"Blyznetsy";
            }
            else if (d>=22) {
                std::cout<<"Rak";
            }
            break;
        case(7): if (d<23) {
                std::cout<<"Rak";
            }
            else if (d>=23) {
                std::cout<<"Lev";
            }
            break;
        case(8): if (d<23) {
                std::cout<<"Lev";
            }
            else if (d>=23) {
                std::cout<<"Deva";
            }
            break;
        case(9): if (d<23) {
                std::cout<<"Deva";
            }
            else if (d>=23) {
                std::cout<<"Vesy";
            }
            break;
        case(10): if (d<23) {
                std::cout<<"Vesy";
            }
            else if (d>=23) {
                std::cout<<"Scorpion";
            }
            break;
        case(11): if (d<23) {
                std::cout<<"Scorpion";
            }
            else if (d>=23) {
                std::cout<<"Strelez";
            }
            break;
        case(12): if (d<22) {
                std::cout<<"Strelez";
            }
            else if (d>=22) {
                std::cout<<"Kozerig";
            }
            break;
    }
}

