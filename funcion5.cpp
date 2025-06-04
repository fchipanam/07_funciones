#include <iostream>
using namespace std;
int divisores(int);
int main(){
    int num1, num2;
    cin>>num1>>num2;
    divisores(num1);
    divisores(num2);
    if (divisores(num1) == num2 && divisores(num2) == num1){
        cout<<"Los numeros ingresados son amigos"<<endl;
    }
    else{
        cout<<"Los numeros ingresados NO son amigos"<<endl;
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