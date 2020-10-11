#include <iostream>
#include "MyLibIf.h"
#include "MyLibSwitch.h"
int main() {
    int choice;
    std::cout<<"Choose a number from 1 to 12";
    std::cin>>choice;
    switch (choice) {
        case(1): task_if3(); break;
        case(2): task_if5();break;
        case(3): task_if10();break;
        case(4): task_if16();break;
        case(5): task_if18();break;
        case(6): task_if20();break;
        case(7): task_if24();break;
        case(8): task_if28();break;
        case(9): task_if30();break;
        case(10):task_case5();break;
        case(11):task_case7();break;
        case(12):task_case10();break;
        case(13):task_case13();break;
        case(14):task_case19();break;
        case(15):task_case20();break;
        default:"Error choice";
    }
    return 0;
}
