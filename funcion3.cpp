#include <iostream>
using namespace std;
int suma (int);
int main (){
    int cantidad, a1, a2, siguiente;
    a1 = 0;
    a2 = 1;
    cout<<"       SERIE FIBONACCI"<<endl;
    cout<<"      ------------------"<<endl;
    cout<<"\nIngrese cantidad de terminos: ";
    cin>>cantidad;
    while(cantidad <= 0){
        cout<<"Ingrese una cantida no negativa";
        cin>>cantidad;
    }
    if (cantidad >= 1) {
        cout << a1;
        if (cantidad >= 2) {
            cout << ", " << a2;
        }
    }
    if (cantidad > 2) {
        for (int i = 3; i <= cantidad; i++) {
            siguiente = a1 + a2;
            cout << ", " << siguiente;
            a1 = a2;
            a2 = siguiente;
        }
    }
    cout<<" \nLa suma es: " <<suma(cantidad)<<endl;
    return 0;
}
int suma (int n){
   int f0, f1, suma, next;
   f0 = 0;
   f1 = 1;
   suma = 1;
   if (n == 1){
    suma = 1;
   }
   else {
        for (int h = 2; h < n; h = h + 1){
            next = f0 + f1;
            suma = suma + next;
            f0 = f1; 
            f1 = next;
        }
   }
   return suma;
}