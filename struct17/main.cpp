#include <iostream>
#include "CString"

struct znak
{
    char surname[20];
    char name [20];
    char zodiacSign [10];
    int birthday [3];
};

void  CinZnak(int n, znak* person) {
    for (int i = 0; i < n; i++) {
        std::cout << i + 1 << "." << "Enter a surname";
        std::cin >> person[i].surname;
        while (true) {
            if (isdigit(*person[i].surname)) {
                std::cin.clear();
                std::cin.ignore(200, '\n');
                std::cout << "You have entered wrong input" << std::endl << "Enter a Surname";
                std::cin >> person[i].surname;
            } else {
                break;
            }
        }
        std::cout << i + 1 << "." << "Enter a rname";
        std::cin >> person[i].name;
        while (1) {
            if (isdigit(*person[i].name)) {
                std::cin.clear();
                std::cin.ignore(200, '\n');
                std::cout << "You have entered wrong input" << std::endl << "Enter a Name";
                std::cin >> person[i].name;
            } else {
                break;
            }
        }
        std::cout << i + 1 << "." << "Enter a zodiac sign";
        std::cin >> person[i].zodiacSign;
        while (1) {
            if (isdigit(*person[i].zodiacSign)) {
                std::cin.clear();
                std::cin.ignore(200, '\n');
                std::cout << "You have entered wrong input" << std::endl << "Enter a Zodiac sign";
                std::cin >> person[i].zodiacSign;
            } else {
                break;
            }
        }
        std::cout << i + 1 << "." << "Enter a birthday date";
        for(int j=0; j<3; j++){
            std::cin >> person[i].birthday[j];
        }
        while (1) {
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(200, '\n');
                std::cout << "You have entered wrong input" << std::endl << "Enter a Birthday date";
                for (int j = 0; j < 3; j++) {
                    std::cin >> person[i].birthday[j];
                }
            } else {
                break;
            }
        }

    }
}

void ZnakSort(int n, znak* person)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if (strcmp(person[j].zodiacSign, person[j+1].zodiacSign)>0)
            {
                znak temp = person[j];
                person[j]=person[j+1];
                person[j+1]=temp;
            }

        }

    }
    std::cout<<"The sorted struct"<<std::endl;
    for(int i=0; i<n; i++)
    {
        std::cout<<"Surname "<<person[i].surname<<std::endl;
        std::cout<<"Name "<<person[i].name<<std::endl;
        std::cout<<"Zodiac sign "<<person[i].zodiacSign<<std::endl;
        for (int j=0; j<3;j++ )
        {
            std::cout<<"Birthday date "<<person[i].birthday[j]<<std::endl;
        }

    }
    std::cout<<std::endl;

}

void MenuCrud(){
    std::cout<<"1 - Add a person"<<std::endl;
    std::cout<<"2 - Search a person"<<std::endl;
    std::cout<<"3 - Update the information"<<std::endl;
    std::cout<<"4 - Delete a person"<<std::endl;
}

void AddPerson(int n, znak* person)





{
    int number;
    std::cout<<"How many people you'd like to add?";
    std::cin>>number;
    for (int i = 0; i < number; i++) {
        std::cout << i + 1 << "." << "Enter a surname";
        std::cin >> person[i].surname;
        while (true) {
            if (isdigit(*person[i].surname)) {
                std::cin.clear();
                std::cin.ignore(200, '\n');
                std::cout << "You have entered wrong input" << std::endl << "Enter a Surname";
                std::cin >> person[i].surname;
            } else {
                break;
            }
        }
        std::cout << i + 1 << "." << "Enter a rname";
        std::cin >> person[i].name;
        while (1) {
            if (isdigit(*person[i].name)) {
                std::cin.clear();
                std::cin.ignore(200, '\n');
                std::cout << "You have entered wrong input" << std::endl << "Enter a Name";
                std::cin >> person[i].name;
            } else {
                break;
            }
        }
        std::cout << i + 1 << "." << "Enter a zodiac sign";
        std::cin >> person[i].zodiacSign;
        while (1) {
            if (isdigit(*person[i].zodiacSign)) {
                std::cin.clear();
                std::cin.ignore(200, '\n');
                std::cout << "You have entered wrong input" << std::endl << "Enter a Zodiac sign";
                std::cin >> person[i].zodiacSign;
            } else {
                break;
            }
        }
        std::cout << i + 1 << "." << "Enter a birthday date";
        for(int j=0; j<3; j++){
            std::cin >> person[i].birthday[j];
        }
        while (1) {
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(200, '\n');
                std::cout << "You have entered wrong input" << std::endl << "Enter a Birthday date";
                for (int j = 0; j < 3; j++) {
                    std::cin >> person[i].birthday[j];
                }
            } else {
                break;
            }
        }

    }
    for(int i=0; i<n+1; i++)
    {
        std::cout<<"Surname "<<person[i].surname<<std::endl;
        std::cout<<"Name "<<person[i].name<<std::endl;
        std::cout<<"Zodiac sign "<<person[i].zodiacSign<<std::endl;
        for (int j=0; j<3;j++ )
        {
            std::cout<<"Birthday date "<<person[i].birthday[j]<<std::endl;
        }

    }
    std::cout<<std::endl;
}

void SearchPerson(int n, znak* person)
{
    char p[10];
    std::cout<<"Enter a surname";
    std::cin>>p;
    int count=0;
    for (int i=0; i<n; i++){
        if(p==person[i].surname){
            std::cout<<person[i].surname<<std::endl;
            std::cout<<person[i].name<<std::endl;
            std::cout<<person[i].zodiacSign<<std::endl;
            for (int j=0; j<3; j++){
                std::cout<<"BIRTHDAY ="<<person[i].birthday[j]<<std::endl;
            }
            count++;
        }
        if (count==0)
        {
            std::cout<<"There id no such person!";
        }
    }
}

void FindMonth(int n, znak* person)
{
    int k;
    int count=0;
    std::cout<<"Enter a month";
    std::cin>>k;
    for (int i=0; i<n; i++){
        if(k==person[i].birthday[1]){
            std::cout<<person[i].surname<<std::endl;
            std::cout<<person[i].name<<std::endl;
            std::cout<<person[i].zodiacSign<<std::endl;
            for (int j=0; j<3; j++){
                std::cout<<"BIRTHDAY ="<<person[i].birthday[j]<<std::endl;
            }
            count++;
        }

    }
}

void UpdatePerson(int n, znak* person)
{
    int m;
    std::cout<<"Which person do you want to update?"<<std::endl;
    std::cout<<"Enter a number";
    std::cin>>m;
    for (int i=0; i<n; i++)
    {
        person[i].surname;
        person[i].zodiacSign;
        person[i].name;
        person[i].birthday;
        if (i+1==m)
        {
            std::cout<<"What exactly do you want to change?";
            std::cout<<"1 - Surname";
            std::cout<<"2 - Name";
            std::cout<<"3 - Zodiac sign";
            std::cout<<"4 - Birthday";
            int choice;
            std::cout<<"Enter a choice";
            std::cin>>choice;
            switch(choice)
            {
                case 1:
                {
                    std::cout << i + 1 << "." << "Enter a surname";
                    std::cin >> person[i].surname;
                    while (true) {
                        if (isdigit(*person[i].surname))
                        {
                            std::cin.clear();
                            std::cin.ignore(200, '\n');
                            std::cout << "You have entered wrong input" << std::endl << "Enter a Surname";
                            std::cin >> person[i].surname;
                        } else
                            {
                            break;
                        }
                    }
                } break;
                case 2:
                {
                    std::cout << i + 1 << "." << "Enter a rname";
                    std::cin >> person[i].name;
                    while (1) {
                        if (isdigit(*person[i].name))
                        {
                            std::cin.clear();
                            std::cin.ignore(200, '\n');
                            std::cout << "You have entered wrong input" << std::endl << "Enter a Name";
                            std::cin >> person[i].name;
                        } else
                            {
                            break;
                        }
                    }
                } break;
                case 3:
                {
                    std::cout << i + 1 << "." << "Enter a zodiac sign";
                    std::cin >> person[i].zodiacSign;
                    while (1) {
                        if (isdigit(*person[i].zodiacSign))
                        {
                            std::cin.clear();
                            std::cin.ignore(200, '\n');
                            std::cout << "You have entered wrong input" << std::endl << "Enter a Zodiac sign";
                            std::cin >> person[i].zodiacSign;
                        } else
                            {
                            break;
                        }
                    }
                }break;
                case 4:
                {
                    std::cout << i + 1 << "." << "Enter a birthday date";
                    for(int j=0; j<3; j++){
                        std::cin >> person[i].birthday[j];
                    }
                    while (1) {
                        if (std::cin.fail())
                        {
                            std::cin.clear();
                            std::cin.ignore(200, '\n');
                            std::cout << "You have entered wrong input" << std::endl << "Enter a Birthday date";
                            for (int j = 0; j < 3; j++)
                            {
                                std::cin >> person[i].birthday[j];
                            }
                        } else
                            {
                            break;
                        }
                    } break;

                }


            }
        }
        std::cout<<"Surname "<<person[i].surname<<std::endl;
        std::cout<<"Name "<<person[i].name<<std::endl;
        std::cout<<"Zodiac sign "<<person[i].zodiacSign<<std::endl;
        for (int j=0; j<3;j++ )
        {
            std::cout<<"Birthday date "<<person[i].birthday[j]<<std::endl;
        }
        std::cout<<std::endl;
    }
}

void DeletePerson(int n, znak* person)
{
    char m[10];
    std::cout<<"Enter a surname of a person you want to delete?";
    std::cin>>m;

    for (int i=0; i<n; i++){
        {
            std::cout<<"Surname "<<person[i].surname<<std::endl;
            std::cout<<"Name "<<person[i].name<<std::endl;
            std::cout<<"Zodiac sign "<<person[i].zodiacSign<<std::endl;
            for (int j=0; j<3;j++ )
            {
                std::cout<<"Birthday date "<<person[i].birthday[j]<<std::endl;
            }

        }
    }


}

int main()
{
    int n;
    std::cout<<"n =";
    std::cin>>n;
    znak* person;
    person = new znak[n];
    CinZnak(n, person);
    ZnakSort(n, person );
    FindMonth(n, person);
    MenuCrud();
    int choice;
    std::cout<<"Enter choice";
    std::cin>>choice;
    switch(choice)
    {
        case 1: AddPerson(n, person); break;
        case 2: SearchPerson(n, person);break;
        case 3: UpdatePerson(n, person);break;

    }
    return 0;
}
