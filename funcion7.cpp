#include <iostream>
using namespace std;
int factorial (int);
int main (){
    float m, n, combinatoria;
    cout<<"COMBINATORIA N EN M"<<endl;
    cout<<"Ingrese m:"<<endl;
    cin>>m;
    cout<<"Ingrese n:"<<endl;
    cin>>n;
    combinatoria = factorial(m)/(factorial(n) * factorial(m - n));
    cout<<"La combinatoria de "<<n<<" en "<<m<<" es:"<<endl;
    cout<<combinatoria<<endl;
    return 0;
}
int factorial(int a){
    int f;
    f = 1;
    for(int i = 2; i <= a; i = i + 1){
        f = f * i;
    }
    return f;
}