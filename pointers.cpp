#include<iostream>
using namespace std;
int main(){
    int a = 40 ;
    int *ptra;
    ptra = &a;
    cout<<"The address of the value is "<<&a<<endl;
    cout<<"The value at address is "<<*ptra;
    return 0;
}