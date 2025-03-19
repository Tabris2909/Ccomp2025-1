#include<iostream>
using namespace std;

int main(){
    char val = 'A';
    int valnum = static_cast<int>(val) ;
    cout << val << " conversion " << valnum << endl;

    int d1 = 49;
    int d2 = 50;
    int d3 = 51;

    char e1 = static_cast<char>(d1);
    char e2 = static_cast<char>(d2);
    char e3 = static_cast<char>(d3);

    cout << e1 << " " << e2 << " " << e3 << endl;

    return 0;
}
