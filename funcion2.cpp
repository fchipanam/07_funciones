#include <iostream>
using namespace std;
void division(int val1, int val2);
int main (){
    int num1, num2;
    cin>>num1>>num2;
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
    cout<<"La el cociente de la division es "<<i<<" y su resto es igual a "<<val1<<endl;
}