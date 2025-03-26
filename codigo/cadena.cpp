#include<iostream>
using namespace std;

int main(){
    cout << 'A' << endl;
    cout << "A" << endl;
    string cadena = "A";

    string name;
    int age;
    cout << "Ingresa tu nombre: " ;
    cin >> name;
    cout << "Ingresa tu edad: " ;
    cin >> age;

    cout << "Hola " << name << ", que cuentas" << endl;
    cout << "Tu tienes " << age << " años." << endl;

    return 0;
}

