/**
 * @file main.cpp
 * @author Kevin Jimenez (kevin.jimenezr@udea.edu.co)
 * @brief 
 * @version 0.1
 * @date 2025-03-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */

// Standard Libraries 
#include <iostream>
using namespace std;

// Ejercicio 1:
// Escriba un programa que pida dos números A y B e 
// imprima en pantalla el residuo de la división A/B.
int division(int a, int b) {
    return a % b;
}

// Ejercicio 3:
// Escriba un programa que pida dos numeros A y B
// e imprima en pantalla el mayor de los dos.
int mayor(int a, int b) {
    return (a > b) ? a : b;
}

// Ejercicio 5:
// Escriba un programa que pida dos numeros A y B
// e imprima en pantalla la division A/B con redondeo mayor
int divisionRedondeo(float a, float b) {
    return (int)(a / b + 0.5);
}

// Ejercicio 7:
// Escriba un programa que pida un numero N e imprima
// en pantalla la suma de todos los numeros entre 0 y N (Incluyendo N).
int suma(int n) {
    int total = 0;
    for (int i = 0; i <= n; i++) {
        total += i;
    }
    return total;
}

// Ejercicio 9:
// Escriba un programa que pida un numero N e imprima
// el perimetro y area de un circulo con radio N. (usar 3.1416 como pi)
float area_perimetro(float n) {
    const float pi = 3.1416;
    float area = pi * n * n;
    float perimetro = 2 * pi * n;
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;
    return 0;
}

// Ejercicio 11:
// Escriba un programa que pida un numero N e imprima
// su tabla de multiplicar hasta 10XN.
int tabla_multiplicar(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << n << " = " << n * i << endl;
    }
    return 0;
}

// Ejercicio 13:
// Escriba un programa que pida un numero N e imprima
// todos los divisores de N.
int divisores(int n) {
    cout << "Divisores de " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

// Ejercicio 15:
// Escriba un programa que pida constantemente numeros
// hasta que se ingrese el numero 0 e imprima en pantalla
// la suma de todos los numeros ingresados.
int suma_constante() {
    int suma = 0;
    int n;
    do {
        cout << "Ingrese un numero (0 para salir): ";
        cin >> n;
        suma += n;
    } while (n != 0);
    cout << "Suma total: " << suma << endl;
    return 0;
}

// Ejercicio 17:
// Escriba un programa que pida un constantemente numeros hasta que
// se ingrese el numero 0 e imprima en pantalla el mayor de todos 
// los numeros ingresados.

int mayor_constante() {
    int mayor = 0;
    int n;
    do {
        cout << "Ingrese un numero (0 para salir): ";
        cin >> n;
        if (n > mayor) {
            mayor = n;
        }
    } while (n != 0);
    cout << "Mayor numero ingresado: " << mayor << endl;
    return 0;
}

// Ejercicio 19:
// Escriba un programa que pida un numero N e imprima 
// si es o no un numero primo.
bool primo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Ejercicio 21:
// Escriba un programa que pida un caracter C, si es una letra
// la debe convertir de mayuscula a minuscula y viceversa e imprimirla

int convertir(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c + 32; // Convertir a minuscula
    } else if (c >= 'a' && c <= 'z') {
        c = c - 32; // Convertir a mayuscula
    }
    cout << "Letra convertida: " << c << endl;
    return 0;
}

// Ejercicio 23:
// Escriba un programa que pida dos numeros A y B e imprima
// en pantalla el minimo comun multiplo entre los dos
int mcm(int a, int b) {
    int mayor = (a > b) ? a : b;
    while (true) {
        if (mayor % a == 0 && mayor % b == 0) {
            cout << "El MCM de " << a << " y " << b << " es: " << mayor << endl;
            break;
        }
        mayor++;
    }
    return 0;
}

// Ejercicio 25:
// Escriba un programa que pida un numero N e imprima
// en pantalla la cantidad de digitos de N.
int cantidad_digitos(int n) {
    int contador = 0;
    while (n != 0) {
        n /= 10;
        contador++;
    }
    cout << "Cantidad de digitos: " << contador << endl;
    return 0;
}
// Ejercicio 27:
// Escriba un programa que actue como una calculadora
// con operaciones de suma, resta, multiplicacion y division
// el usuario debe ingresar los operandos y la operacion a realizar
int calculadora(int a, int b, char operacion) {
    switch (operacion) {
        case '+':
            cout << "Resultado: " << a + b << endl;
            break;
        case '-':
            cout << "Resultado: " << a - b << endl;
            break;
        case '*':
            cout << "Resultado: " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Resultado: " << a / b << endl;
            } 
            break;
        default:
            cout << "Operacion no valida" << endl;
    }
    return 0;
}

// Ejercicio 29:
// Escriba un programa que adivine un numero A (entre 0 y 100)
// seleccionado por el usuario (el numero no se ingresa al programa)
// el programa imprimirá en pantalla un numero B y el usuario usará
// los simbolos '>' o '<' y '=' para indicarle al programa si B es 
// mayor, menor o igual que A. El programa imprimirá un nuevo numero B
// con base en simbolo ingresado por el usuario. y repetira el proceso
// hasta acertar el numero seleccionado por usuario

int adivinar(){
    int min = 0, max = 100, b;
    char simbolo;
    cout << "Piense en un numero entre 0 y 100" << endl;
    
    while (true) {
        b = (min + max) / 2;
        cout << "Es " << b << "? (Ingrese > si es mayor, < si es menor, = si es igual): ";
        cin >> simbolo;
        if (simbolo == '=') {
            cout << "El numero es: " << b << endl;
            break;
        } else if (simbolo == '>') {
            min = b + 1;
        } else if (simbolo == '<') {
            max = b - 1;
        }
    }
    return 0;

}



int main() {
    cout << "Hola, mundo" << endl;
    
    return 0;
}