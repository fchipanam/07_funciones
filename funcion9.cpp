#include <iostream>
using namespace std;
double factorial(int);
int main(){
    int n;
    double s;
    cin>>n;
    s = 0;
    for(int i = 1; i <= n; i = i + 1){
        s = (factorial(i)/(2*i)) + s;
    }
    cout<<s<<endl;
    return 0;
}
double factorial(int a){
    double f;
    f = 1;
    for (int h = 2; h <= a; h = h + 1){
        f = f * h;
    }
    return f;
}