#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
using namespace::std;

char name1[] = "newfile.txt";
char name2[] = "laptops.txt";
char name3[] = "newfile2.txt";
struct NOTEBOOK
{
    struct disp_res { //разрешение
        int x;
        int y;

    } resolution;
    int f;//частота регенерации
    int d;//диагональ дсплея
    int price;
    char model[21];
};

void addtofile(NOTEBOOK& P, char *name)
{

    FILE* f;
    fopen_s(&f, name, "ab");
    fwrite(&P, sizeof(NOTEBOOK), 1, f);

    fclose(f);


}
void readfile(int i)
{

    FILE* f;
    fopen_s(&f, "newfile2.txt", "r");
    NOTEBOOK J;
    for (int k = 0; k < i; k++) {
        fseek(f, k * sizeof(NOTEBOOK), SEEK_SET);
        fread(&J, sizeof(J), 1, f);
        if (J.f == 2)
            addtofile(J, name2);
    }
    fclose(f);

}
void sortit( int i)
{
    FILE* f;
    fopen_s(&f, "newfile.txt", "r");

    NOTEBOOK* tosort=new NOTEBOOK [i];
    for (int k = 0; k < i; k++)
    {
        fseek(f, k * sizeof(NOTEBOOK), SEEK_SET); //записуємо в струтури інф про ноутбуки
        fread(&tosort[k], sizeof(NOTEBOOK), 1, f);
    };
    fclose(f);

    for (int k = 0; k < i - 1; k++)
    {
        for (int j = k + 1; j < i; j++)
        {
            if (tosort[k].d < tosort[j].d)
            {
                NOTEBOOK temp = tosort[k];
                tosort[k] = tosort[j];
                tosort[j] = temp;
                //delete [] &temp;
            }

        }
    };

    for (int k = 0; k < i; k++)
        addtofile(tosort[k], name3);

}
int main()
{


    int i = 0;
    char key;
    NOTEBOOK P;
    do {
        cout << "Enter the description of the laptop: " << endl;
        cout << "model= ";
        cin>>P.model;
        cout << endl;
        cout << "Resolution(x)= ";
        cin >> P.resolution.x;
        cout << endl;
        cout << "Resolution(y)= ";
        cin >> P.resolution.y;
        cout << endl;
        cout << "Amount of video memory= ";
        cin >> P.f;
        cout << endl;
        cout << "clock rate= ";
        cin >> P.d;
        cout << endl;
        cout << "price= ";
        cin >> P.price;
        cout << endl;
        addtofile(P,name1);

        cout << "continue? Y or N" << endl;
        cin >> key;
        cout << endl;
        i++;
    } while (key != 'n');

    sortit(i);
    readfile(i);

    FILE* f;
    fopen_s(&f, "laptops.txt", "r");
    NOTEBOOK K;
    int k = 0;
    while(!feof(f))
    {
        fseek(f, k * sizeof(NOTEBOOK), SEEK_SET);
        fread(&K, sizeof(K), 1, f);
        cout << K.resolution.x << " " << K.resolution.y << " " << K.f << " " << K.d << " " << K.price << " " << K.model << endl;
        k++;
    }
    fclose(f);
    return 0;
}