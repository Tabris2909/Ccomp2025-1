#include<iostream>
using namespace std;

int main(){
    char num1, num2;
    int val1, val2, val3;
    cout << "introduce 2 numeros" << endl;
    cout << "Numero 1: " ;
    cin >> num1;
    cout << "Numero 2: " ;
    cin >> num2;

    if((num1 >=48 && num1 <= 57) && (num2 >= 48 && num2 <= 57) ){
        int val1 = static_cast<int>(num1);
        int val2 = static_cast<int>(num2);
        int val3 = (val1 -48) + (val2 - 48);
        cout << "la suma es: " << val3 << endl;
    }
    else{
        cout << "Error" << endl;;
    }
    return 0;
}
