#include<iostream>
using namespace std;
int main(){
    int a=2,b=8;
    cout<<"Numeros iniciales"<<a<<" "<<b<<endl;
    int* a_;
    int* b_;
    a_ = &a;
    b_ = &b;
    int aux= *a_;
    *a_=*b_;
    *b_=aux;
    cout<<"Numeros invertidos"<<a<<" "<<b<<endl;
    return 0;
}
