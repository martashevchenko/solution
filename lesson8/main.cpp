#include <iostream>
void task1(){
    const int rows =3;
    const int cols =2;
    int a[rows][cols];
    for (int i=0; i<cols; ++i){
        for (int k=0; k<rows; ++k){
            std::cout<<"a[i][k] =";
            std::cin>>a[i][k];
        }
    }
    for (int i=0; i<cols; ++i){
        for(int k=0; k<rows; ++k){
            if (a[i][k]>0){
                std::cout<<"a[i][j] ="<<a[i][k]<<std::endl;
            }
        }
    }
}

void task2(){
    int m, n;
    int k=0;
    std::cout<<"m =";
    std::cin>>m;
    std::cout<<"n =";
    std::cin>>n;
    int **a = new int *[m];
    for (int i=0; i<m; ++i){
        a[i]=new int [n];
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            std::cin>>a[i][j];
        }
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            std::cout<<"a["<<i<<"]["<<j<<"] ="<<a[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
    if (m!=0){
        k+=1;
    }
    std::cout<<"k ="<<k;

    for (int i=0; i<m; ++i){
        delete [] a[i];
    }

    delete[] a;



}

void matrix1(){
    int m, n;
    int i=0; int j=0;
    std::cout<<"m =";
    std::cin>>m;
    std::cout<<"n =";
    std::cin>>n;
    int **a = new int *[m];
    for ( i=0; i<m; ++i){
        a[i]=new int [n];
    }

    for ( i=0; i<m; ++i){
        for ( j=0; j<n; ++j){
            a[i][j]=i*10;
        }
    }

    for ( i=0; i<m; ++i){
        for ( j=0; j<n; ++j){
            std::cout<<"a["<<i<<"]["<<j<<"] ="<<a[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
    for (int i=0; i<m; ++i){
        delete [] a[i];
    }

    delete[] a;


}

void matrix5(){
    int m, n, d;
    int i=0; int j=0;
    std::cout<<"m =";
    std::cin>>m;
    std::cout<<"n =";
    std::cin>>n;
    std::cout<<"d =";
    std::cin>>d;
    int **a = new int *[m];
    for ( i=0; i<m; ++i){
        a[i]=new int [n];
    }
    for (i=0; i<m; ++i){
        for (j=0; j<1; ++j){
            std::cin>>a[i][j];
        }
    }
    for ( i=0; i<m; ++i){
        for ( j=1; j<n; ++j){
            a[i][j]=a[i][j-1]+d;
        }
    }

    for ( i=0; i<m; ++i){
        for ( j=0; j<n; ++j){
            std::cout<<"a["<<i<<"]["<<j<<"] ="<<a[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
    for (int i=0; i<m; ++i){
        delete [] a[i];
    }

    delete[] a;

}

void matrix10(){
    int m, n;
    std::cout<<"m =";
    std::cin>>m;
    std::cout<<"n =";
    std::cin>>n;
    int **a = new int *[m];
    for (int i=0; i<m; ++i){
        a[i]=new int [n];
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            std::cin>>a[i][j];
        }
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<n; j+=2){
            std::cout<<"a["<<i<<"]["<<j<<"] ="<<a[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }

    for (int i=0; i<m; ++i){
        delete [] a[i];
    }

    delete[] a;

}

void matrix11(){

    int m, n;
    std::cout<<"m =";
    std::cin>>m;
    std::cout<<"n =";
    std::cin>>n;
    int **a = new int *[m];
    for (int i=0; i<m; ++i){
        a[i]=new int [n];
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            std::cin>>a[i][j];
        }
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            if (i%2==!0){
                std::cout<<"a["<<i<<"]["<<j<<"] ="<<a[i][n-j-1]<<"\t";
            }
            else {
                std::cout<<"a["<<i<<"]["<<j<<"] ="<<a[i][j]<<"\t";
            }
        }
        std::cout<<std::endl;
    }

    for (int i=0; i<m; ++i){
        delete [] a[i];
    }

    delete[] a;

}

void matrix15(){
    int m, n;
    std::cout<<"m =";
    std::cin>>m;
    int **a = new int *[m];
    for (int i=0; i<m; ++i){
        a[i]=new int [m];
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<m; ++j){
            std::cin>>a[i][j];
        }
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<m; ++j){
            std::cout<<"a["<<i<<"]["<<j<<"] ="<<a[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }

    for (int i=0; i<m; ++i){
        delete [] a[i];
    }

    delete[] a;



}

void matrix20(){
    int m, n;
    int *dob=new int[m];
    std::cout<<"m =";
    std::cin>>m;
    std::cout<<"n =";
    std::cin>>n;
    int **a = new int *[m];
    for (int i=0; i<m; ++i){
        a[i]=new int [n];
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            std::cin>>a[i][j];
        }
    }
    for (int j=0; j<n; ++j){
        dob[j]=1;
    }

    for (int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            dob[j]*=a[i][j];
            std::cout<<"dob ="<<dob[j]<<std::endl;
        }
    }


    for (int i=0; i<m; ++i){
        delete [] a[i];
    }

    delete[] a;


}

void matrix25(){
    int m, n;
    int *sum=new int[m];
    std::cout<<"m =";
    std::cin>>m;
    std::cout<<"n =";
    std::cin>>n;
    int **a = new int *[m];
    for (int i=0; i<m; ++i){
        a[i]=new int [n];
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            std::cin>>a[i][j];
        }
    }
    for (int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            sum[i]+=a[i][j];
            std::cout<<"sum ="<<sum[i]<<std::endl;
        }
    }

    for (int i=0; i<m; ++i){
        delete [] a[i];
    }

    delete[] a;


}

int main() {
    matrix25();

    return 0;
}
