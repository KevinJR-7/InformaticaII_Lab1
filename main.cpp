/**
 * @file main.cpp
 * @author Kevin Jimenez (kevin.jimenezr@udea.edu.co)
 * @brief Contiene la solucion a los ejercicios y problemas del laboratorio 1 (2025-1) (Impares)
 * @version 0.1
 * @date 2025-03-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */

/**
 * @brief Librerias necesarias para el programa
 */
#include <iostream>
using namespace std;

/**
 * @brief Ejercicio 1:
 * Escriba un programa que pida dos números A y B e
 * imprima en pantalla el residuo de la división A/B.
 * @param a Primer número (int)
 * @param b Segundo número (int)
 * @return residuo de la división A/B
 */
 
int division() {
    int a, b;
    cout << "Ingrese un numero A: ";
    cin >> a;
    cout << "Ingrese un numero B: ";
    cin >> b;
    cout << "Residuo de la division " << a << "/" << b 
    << " es: " << a % b << endl;

    return 0;
}
/**
 * @brief Ejercicio 3:
 * Escriba un programa que pida dos numeros A y B
 * e imprima en pantalla el mayor de los dos.
 * @param a Primer número
 * @param b Segundo número
 * @return mayor de los dos números
 * 
 */
int mayor() {
    int a, b;
    cout << "Ingrese un numero A: ";
    cin >> a;
    cout << "Ingrese un numero B: ";
    cin >> b;
    (a > b) ? cout << "El mayor es: " << a 
    << endl : cout << "El mayor es: " << b << endl;
    return 0;
}

/**
 * @brief Ejercicio 5:
 * Escriba un programa que pida dos numeros A y B
 * e imprima en pantalla la division A/B con redondeo mayor
 * @param a Primer número (float)
 * @param b Segundo número (float)
 * @return division A/B con redondeo mayor
 * 
 */

int divisionRedondeo() {
    float a, b;
    cout << "Ingrese un numero A: ";
    cin >> a;
    cout << "Ingrese un numero B: ";
    cin >> b;
    cout << "La division " << a << "/" << b << " es: "
         << (int)(a / b + 0.5) << endl;
    return 0;
}

/**
 * @brief Ejercicio 7:
 * Escriba un programa que pida un numero N e imprima
 * la suma de todos los numeros entre 0 y N.
 * @param n Número entero
 * @return suma de todos los números entre 0 y N
 */
int suma() {
    int n;
    cout << "Ingrese un numero N: ";
    cin >> n;

    int total = 0;
    for (int i = 0; i <= n; i++) {
        total += i;
    }
    cout << "La sumatoria desde 0 hasta " 
    << n << " es: " << total << endl;
    return 0;
}

/**
 * @brief Ejercicio 9:
 * Escriba un programa que pida el radio de un circulo
 * e imprima su area y perimetro.
 * @param n Radio del circulo (float)
 * @return area y perimetro del circulo
 */
float area_perimetro() {
    float r;
    
    cout << "Ingrese el radio del circulo: ";
    cin >> r;
    const float pi = 3.1416;
    float area = pi * r * r;
    float perimetro = 2 * pi * r;
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;
    return 0;
}

/**
 * @brief Ejercicio 11:
 * Escriba un programa que pida un numero N e imprima
 * la tabla de multiplicar de N.
 * @param n Número entero
 * @return tabla de multiplicar de N
 */
int tabla_multiplicar() {
    int n;
    cout << "Ingrese un numero N: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << n << " = " << n * i << endl;
    }
    return 0;
}

/**
 * @brief Ejercicio 13:
 * Escriba un programa que pida un numero N e imprima
 * en pantalla todos los divisores de N.
 * @param n Número entero
 * @return divisores de N
 */
int divisores() {
    int n;
    cout << "Ingrese un numero N: ";
    cin >> n;

    cout << "los divisores de " << n << " son: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

/**
 * @brief Ejercicio 15:
 * Escriba un programa que pida constantemente numeros
 * hasta que se ingrese el numero cero e imprima en pantalla
 * la suma de todos los numeros ingresados
 * @param 
 * @return Suma de todos los números ingresados
 */
int suma_constante() {
    int n;
    int suma = 0;
    do {
        cout << "Ingrese un numero (0 para salir): ";
        cin >> n;
        suma += n;
    } while (n != 0);
    return suma;
}

/**
 * @brief Ejercicio 17:
 * Escriba un programa que pida un numero N e imprima
 * en pantalla el mayor de los numeros ingresados.
 * @param n Número entero
 * @return mayor de los números ingresados
 */

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
    cout << "El numero mayor fue: " << mayor << endl;
    return 0;
}

/**
 * @brief Ejercicio 19:
 * Escriba un programa que pida un numero N e imprima
 * en pantalla si N es primo o no.
 * @param n Número entero
 * @return si N es primo o no
 */
int primo() {
    int n;
    cout << "Ingrese un numero N: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " no es un numero primo." << endl;
        return 0;
    }

    bool esPrimo = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo) {
        cout << n << " es un numero primo." << endl;
    } else {
        cout << n << " no es un numero primo." << endl;
    }

    return 0;
}

/**
 * @brief Ejercicio 21:
 * Escriba un programa que pida un caracter C e imprima
 * en pantalla el caracter convertido a mayuscula o minuscula
 * dependiendo de su estado actual.
 * @param c Caracter a convertir (char)
 * @return Letra convertida
 */

int convertir() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;
    if (c >= 'A' && c <= 'Z') {
        c = c + 32; // Convertir a minuscula
    } else if (c >= 'a' && c <= 'z') {
        c = c - 32; // Convertir a mayuscula
    }
    cout << "Letra convertida: " << c << endl;
    return 0;
}

/**
 * @brief Ejercicio 23:
 * Escriba un programa que pida dos numeros A y B e imprima
 * en pantalla el mcm de A y B.
 * @param a Primer número (int)
 * @param b Segundo número (int)
 * @return MCM de A y B
 */
int mcm(int a, int b) {
    int minimo = (a > b) ? a : b;
    while (true) {
        if (minimo % a == 0 && minimo % b == 0) {
            break;
        }
        minimo++;
    }
    return minimo;
}

/**
 * @brief Ejercicio 25:
 * Escriba un programa que pida un numero N e imprima
 * en pantalla la cantidad de digitos de N.
 * @param n Número entero
 * @return Cantidad de digitos de N
 */
int cantidad_digitos() {
    int n;
    int contador = 0;
    cout << "Ingrese un numero N: ";
    cin >> n;
    while (n != 0) {
        n /= 10;
        contador++;
    }
    return contador;
}


/**
 * @brief Ejercicio 27:
 * Escriba un programa que actue como una calculadora
 * con operaciones de suma, resta, multiplicacion y division
 * el usuario debe ingresar los operandos y la operacion a realizar
 * 
 * @param a numero entero A
 * @param b numero entero B
 * @param operacion operacion a realizar (+,-,*,/) (char)
 * @return operacion realizada
 */
int calculadora() {
    int a, b;
    char operacion;
    cout << "Ingrese un numero A: ";
    cin >> a;
    cout << "Ingrese un numero B: ";
    cin >> b;
    cout << "Ingrese la operacion a realizar (+,-,*,/): ";
    cin >> operacion;
    switch (operacion) {
        case '+':
            cout << a << operacion << b << "=" 
            << a + b <<endl;
            break;
        case '-':
            cout << a << operacion << b << "="
            << a - b << endl;
            break;
        case '*':
            cout << a << operacion << b << "="
            << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << a << operacion << b << "="
                << a / b << endl;
            } else {
                cout << "Division por cero no permitida" << endl;
            } 
            break;
        default:
            cout << "Operacion no valida" << endl;
    }
    return 0;
}


/**
 * @brief Ejercicio 29:
 * Escriba un programa que adivine un numero A (entre 0 y 100)
 * seleccionado por el usuario (el numero no se ingresa al programa)
 * el programa imprimirá en pantalla un numero B y el usuario usará
 * los simbolos '>' o '<' y '=' para indicarle al programa si B es
 * mayor, menor o igual que A. El programa imprimirá un nuevo numero B
 * con base en simbolo ingresado por el usuario. y repetira el proceso
 * hasta acertar el numero seleccionado por usuario
 * 
 * @return adivinacion del numero A
 */
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


/**
 * @brief Problema 1:
 * Escriba un programa que identifique  que si un carácter ingresado es una vocal
 * una consonante o ninguna de las 2 e imprima un mensaje según el caso
 * usando ascii
 * @param c letra a identificar
 * @return letra identificada
 */
int vocal_consonante() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cout << "Es una vocal" << endl;
        } else {
            cout << "Es una consonante" << endl;
        }
    } else {
        cout << "No es una letra" << endl;
    }
    return 0;
}

/**
 * @brief Problema 3:
 * Escriba un programa que debe leer un mes y un dia de dicho mes
 * para luego decir si esa combinacion de mes y dia son validos. 
 * El caso mas especial es el 29 de febrero, en dicho caso
 * imprimir "posiblemente año bisiesto"
 * @param mes mes (entero)
 * @param dia dia (entero)
 * @return validez de la fecha
 */
int fecha() {
    int mes, dia;
    cout << "Ingrese un mes: ";
    cin >> mes;
    cout << "Ingrese un dia: ";
    cin >> dia;
    bool valido = true;
    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        valido = false;
    } else if (mes == 2 && dia > 29) {
        valido = false;
    } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        valido = false;
    }
    
    if (valido) {
        cout << dia << "/" << mes << "es una fecha valida" << endl;
        if (mes == 2 && dia == 29) {
            cout << "Posiblemente año bisiesto" << endl;
        }
    } else {
        cout << dia << "/" << mes << "es una fecha invalida" << endl;
    }
    return 0;
}

// Problema 5:
//
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
// El tamaño del patrón estará determinado un número entero 
// impar que ingrese el usuario. En el ejemplo mostrado, el tamaño 
// de la figura es 7.

/**
 * @brief Problema 5:
 * Escriba un programa que muestre el siguiente patrón en la pantalla:
 *@code

 *    *   
 *   ***
 *  *****
 * *******
 *  ***** 
 *   ***   
 *    *  
 * @endcode 
 * @return patron 
 */
int patron() {
    int n;
    cout << "Ingrese un numero impar para el tamano del patron: ";
    cin >> n;
    int mid = n / 2;
    // Parte superior del patrón
    for (int i = 0; i <= mid; i++) {
        int numEspacios = mid - i;
        int numAsteriscos = 2 * i + 1;
        cout << string(numEspacios, ' ') 
        << string(numAsteriscos, '*') 
        << string(numEspacios, ' ') << "\n";
    }

    // Parte inferior del patrón
    for (int i = mid - 1; i >= 0; i--) {
        int numEspacios = mid - i;
        int numAsteriscos = 2 * i + 1;
        cout << string(numEspacios, ' ') 
        << string(numAsteriscos, '*') 
        << string(numEspacios, ' ') << "\n";
    }

    return 0;
}


/**
 * @brief Problema 7:
 * En la serie de Fibonacci, cada numero es la suma de los dos anteriores
 * e inicia con 1 y 1. Escriba un programa que reciba un numero n
 * y halle la suma de todos los numeros pares en la de Fibonacci menores a n
 * 
 * @return La suma de los numeros pares en la serie de Fibonacci menores a n
 */
int fibonacci() {
    int n, temp, a = 1, b = 1, suma = 0;
    cout << "Ingrese un numero n: ";
    cin >> n;
    
    while (b < n) {
        if (b % 2 == 0) {
            suma += b;
        }
        temp = b;
        b += a;
        a = temp;
    }
    cout << "El resutado de la suma es: " << n << ": " << suma << endl;
    return 0;
}



/**
 * @brief Problema 9:
 * Escriba un programa que pida un número entero N e imprima
 * el resultado de la suma todos sus dígitos elevados a sí mismos.
 * 
 * @return La suma de los dígitos elevados a sí mismos
 */
int suma_digitos() {
    int n, suma = 0;
    cout << "Ingrese un numero entero N: ";
    cin >> n;
    
    while (n != 0) {
        int digito = n % 10;
        int temp = digito;
        int resultado = 1;
        for (int i = 1; i <= temp; i++) {
            resultado *= digito;
        }
        suma += resultado;
        n /= 10;
    }
    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}


/**
 * @brief Problema 11:
 * Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
 * todos los números enteros entre 1 y el número ingresado.
 * @return El mínimo común múltiplo de todos los números enteros entre 1 y el número ingresado
 * 
 */

int mcm_rango() {
    int n, cont = 1;
    cout << "Ingrese un numero n: ";
    cin >> n;
    
    for (int i = 2; i <= n; i++) {
        cont = mcm(cont, i);
    }
    cout << "El MCM de los numeros entre 1 y " << n << " es: " << cont << endl;
    return 0;
}

/**
 * @brief Problema 13:
 * Escriba un programa que reciba un número y calcule la suma
 * de todos los primos menores que el número ingresado.
 * 
 * @return La suma de todos los primos menores que el número ingresado
 */
int suma_primos() {
    int n, suma = 0;
    cout << "Ingrese un numero n: ";
    cin >> n;
    
    for (int i = 2; i < n; i++) {
        bool Primo = true;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                Primo = false;
                break;
            }
        }
        if (Primo) {
            suma += i;
        }
    }
    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}

/**
 * @brief Problema 15:
 * Empezando con el número 1 y moviéndose hacia la izquierda
 * y en sentido horario se genera una espiral de números como
 * las siguientes:
 * @code
 * 21 22 23 24 25
 * 20 7 8 9 10
 * 19 6 1 2 11
 * 18 5 4 3 12
 * 17 16 15 14 13
 * @endcode
 * En el caso de esta espiral de 5x5, la suma de los números en la
 * diagonal es 101.
 * Escriba un programa que reciba un número impar n y calcule
 * la suma de los números en la diagonal de una espiral de nxn. 
 * bono: imprimir espiral
 * @return espiral formada
 */
int espiral() {
    int n;
    cout << "Ingrese un numero impar n: ";
    cin >> n;
    
    int matriz[n][n];
    int x = n / 2, y = n / 2, num = 1;
    matriz[x][y] = num++;
    
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < i; j++) {
            matriz[x][++y] = num++;
        }
        for (int j = 0; j < i; j++) {
            matriz[--x][y] = num++;
        }
        for (int j = 0; j < i + 1; j++) {
            matriz[x][--y] = num++;
        }
        for (int j = 0; j < i + 1; j++) {
            matriz[++x][y] = num++;
        }
    }
    
    int suma_diagonal = 0;
    for (int i = 0; i < n; i++) {
        suma_diagonal += matriz[i][i];
    }
    cout << "es una espiral de " << n << "x" << n << endl;
    cout << "La suma es: " << suma_diagonal << endl;
    cout << "La espiral es: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

/**
 * @brief Problema 17:
 * La secuencia de números triangulares se forma al sumar su posición
 * en el arreglo con el valor del número anterior:
 * 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
 * Si listamos los números triangulares y sus divisores tenemos:
 * @code 
 * 1:1
 * 3:1,3
 * 6:1,2,3,6
 * 10:1,2,5,10
 * 15:1,3,5,15
 * 21:1,3,7,21
 * 28:1,2,4,7,14,28
 * @endcode
 * Se observa que 28 es el primer número triangular que tiene más de
 * 5 divisores. Escriba un programa que reciba un número k y calcule
 * cual es el primer número triangular que tiene más de k divisores.
 * Tip: el enésimo número triangular se puede representar como n*(n+1)/2.
 * 
 * 
 * @return int 
 */
int triangular() {
    int k, n = 1, num_triang = 0, divisores = 0;
    cout << "Ingrese un numero k: ";
    cin >> k;
    
    while (divisores <= k) {
        num_triang = n * (n + 1) / 2;
        divisores = 0;
        for (int i = 1; i <= num_triang; i++) {
            if (num_triang % i == 0) {
                divisores++;
            }
        }
        n++;
    }
    cout << "El primer numero triangular con mas de " << k << " divisores es: " << num_triang << endl;
    return 0;
}

int main() {
    int opcion;
    do {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Ejercicios " << endl;
        cout << "2. Problemas " << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
        case 1: {
            int seleccion, a, b;
            cout << "Elija un ejercicio:" << endl;
            cout << "1. Division" << endl;
            cout << "3. Mayor" << endl;
            cout << "5. Division con redondeo" << endl;
            cout << "7. Suma" << endl;
            cout << "9. Area y perimetro" << endl;
            cout << "11. Tabla de multiplicar" << endl;
            cout << "13. Divisores" << endl;
            cout << "15. Suma constante" << endl;
            cout << "17. Mayor constante" << endl;
            cout << "19. Primo" << endl;
            cout << "21. Convertir" << endl;
            cout << "23. MCM" << endl;
            cout << "25. Cantidad de digitos" << endl;
            cout << "27. Calculadora" << endl;
            cout << "29. Adivinar" << endl;
            cin >> seleccion;

            switch (seleccion) {
            case 1: division(); break;
            case 3: mayor(); break;
            case 5: divisionRedondeo(); break;
            case 7: suma(); break;
            case 9: area_perimetro(); break;
            case 11: tabla_multiplicar(); break;
            case 13: divisores(); break;
            case 15: suma_constante(); break;
            case 17: mayor_constante(); break;
            case 19: primo(); break;
            case 21: convertir(); break;
            case 23:
                cout << "Ingrese un numero A: ";
                cin >> a;
                cout << "Ingrese un numero B: ";
                cin >> b;
                cout << "El MCM de " << a << " y " << b << " es: " << mcm(a, b) << endl;
                break;
            case 25: cantidad_digitos(); break;
            case 27: calculadora(); break;
            case 29: adivinar(); break;
            default: cout << "Opcion no valida" << endl;
            }
            break;
        }
        case 2: {
            int decision;
            cout << "Elija un problema:" << endl;
            cout << "1. Vocal o consonante" << endl;
            cout << "3. Fecha" << endl;
            cout << "5. Patron" << endl;
            cout << "7. Fibonacci" << endl;
            cout << "9. Suma digitos" << endl;
            cout << "11. MCM" << endl;
            cout << "13. Suma primos" << endl;
            cout << "15. Espiral" << endl;
            cout << "17. Triangular" << endl;
            cin >> decision;

            switch (decision) {
            case 1: vocal_consonante(); break;
            case 3: fecha(); break;
            case 5: patron(); break;
            case 7: fibonacci(); break;
            case 9: suma_digitos(); break;
            case 11: mcm_rango(); break;
            case 13: suma_primos(); break;
            case 15: espiral(); break;
            case 17: triangular(); break;
            default: cout << "Opcion no valida" << endl;
            }
            break;
        }
        case 3:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
        }
    } while (opcion != 3);

    return 0;
}
