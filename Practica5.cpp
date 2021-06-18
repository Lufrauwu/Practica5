// Practica5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <ctype.h>
#include <stdio.h>
using namespace std;

int main()
{
    string nombre;
    string nombre_base = "Luis";
    cout << "Verifique su identidad" << endl;
    cin >> nombre;
    if (nombre == nombre_base)
    {
        cout << "Registro correcto";
    }
    else
    {
        cout << "Registro incorrecto";
    }
}

