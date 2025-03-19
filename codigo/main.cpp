#include<iostream>
using namespace std;

int main(){
    int num1=9;
    float num2=2;

    // puntos
    short p1=1;
    long p2=2;
    double p3=3;
    long long p4=4;
    float p5=5;
    int p6=6;

    //limites +1
    short L1=32768;
    int L2=2147483648;

    // impresion
    cout << (num1+num2) << endl;
    cout << (num1-num2) << endl;
    cout << (num1*num2) << endl;
    cout << (num1/num2) << endl;
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    cout << sizeof(p6) << endl;

    cout << (L1) << endl;
    cout << (L2) << endl;

    return 0;
}
