#include <iostream>
using namespace std;
int primo (int);
int main (){
    int num;
    cin>>num;
    primo (num);
    if (primo (num) == 2){
        cout<<"Su numero es primo"<<endl;
    }
    if (primo(num) > 2){
        cout<<"Su numero NO es primo"<<endl;
    }
    return 0;
}
int primo (int a){
    int conteo;
    conteo = 0;
    for(int i = 1; i <= a; i++){
        if (a % i == 0){
            conteo = conteo + 1;
        }
    }
    return conteo;
}