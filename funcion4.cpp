#include <iostream>
using namespace std;
int divisores(int);
int main() {
    int num;
    cin>>num;
    divisores (num);
    if (divisores (num) ==  num){
        cout<<"El numero ingresado es perfecto"<<endl;
    }
    else{
        cout<<"El numero ingresado NO es perfecto"<<endl;
    }
    return 0;
}
int divisores(int a){
    int suma;
    suma = 0;
    for (int i = 1; i < a; i++){
        if (a % i == 0){
            suma = suma + i;
        }
    }
    return suma;
}