#include <iostream>
using namespace std;
int divisores(int);
int main(){
    int num1, num2;
    cout<<"                  NUMEROS AMIGOS"<<endl;
    cout<<"                 ----------------"<<endl;
    cout<<"Ingrese primer numero (que no sea menor a 1): ";
    cin>>num1;
    while (num1 <= 0){
        cout<<"Ingrese otro numero valido:";
        cin>>num1;
    }
    cout<<"Ingrese segundo numero (que no sea menor a 1): ";
    cin>>num2;
    while (num2 <= 0){
        cout<<"Ingrese otro numero valido: ";
        cin>>num2;
    }
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