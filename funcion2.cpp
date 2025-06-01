#include <iostream>
using namespace std;
void division(int val1, int val2);
int main (){
    int num1, num2;
    cout<<"            DIVISION  "<<endl;
    cout<<"           ----------"<<endl;
    cout<<"Ingrese primer numero: ";
    cin>>num1;
    cout<<"Ingrese segundo numero: ";
    cin>>num2;
    while(num2 > num1){
        cout<<"Ingrese un numero que no sea mayor al primero: ";
        cin>>num2;
    }
    while(num2 <= 0){
        cout<<"Ingrese un numero no negativo y no igual a cero: ";
        cin>>num2;
    }
    division(num1, num2);
    return 0;
}
void division (int val1, int val2){
    double restas;
    int i;
    i = 0;
    do{
        i = i + 1;
        restas = val1 - val2;
        if (restas >= 0){
            val1 = restas;
        }
        else{
            i = i - 1;
        }
    }while(restas >= 0);
    cout<<"El cociente de la division es "<<i<<" y su resto es igual a "<<val1<<endl;
}