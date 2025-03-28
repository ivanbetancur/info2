#include <iostream>
#include <cmath>
#include <set>

using namespace std;




void Ejercicio1() {
    /*Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
            de la división A/B.*/
    int a, b;
    std::cout << "Ingrese numero A: ";
    std::cin >> a;
    std::cout << "Ingrese numero B: ";
    std::cin >> b;
    std::cout << "El residuo de la division " << a << "/" << b << " es: " << (a % b) << std::endl;
}

void Ejercicio3() {
    /*Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.*/

    int a, b;
    std::cout << "Ingrese numero A: ";
    std::cin >> a;
    std::cout << "Ingrese numero B: ";
    std::cin >> b;
    if (a > b) {
        std::cout << "El numero mayor es " << a << std::endl;
    } else {
        std::cout << "El numero mayor es " << b << std::endl;
    }

}

void Ejercicio5() {

    /*Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división
A/B con redondeo.*/

    double a, b;
    std::cout << "Ingrese A: ";
    std::cin >> a;
    std::cout << "Ingrese B: ";
    std::cin >> b;

    if (b != 0) {
        std::cout << "El resultado de la division redondeada es: " << round(a / b) << std::endl;
    } else {
        std::cout << "Error: division por cero no permitida" << std::endl;
    }

}

void Ejercicio7() {

    /*Ejercicio 7.Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).*/

    int n, suma = 0;
    std::cout << "Ingrese N: ";
    std::cin >> n;

    std::cout << "La sumatoria desde 0 hasta " << n << " es: ";
    for (int i = 1; i <= n; i++) {
        suma += i;
        std::cout << i;
        if (i < n) {
            std::cout << "+";
        }
    }
    std::cout << "=" << suma << std::endl;

}

void Ejercicio9() {

    /*Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi. A = π r²  Perímetro = 2 · r · π */
    #define PI 3.1416
    double n;
    std::cout << "Ingrese N: ";
    std::cin >> n;

    double perimetro = 2 * PI * n;
    double area = PI * n * n;

    std::cout << "Perimetro: " << perimetro << std::endl;
    std::cout << "Area: " << area << std::endl;

}

void Ejercicio11() {

/*Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar
hasta 10xN. */
    int n;
    std::cout << "Ingrese N: ";
    std::cin >> n;

    for (int i = 1; i < 11; i++) {
        std::cout << i << "x" << n << "=" << i * n << std::endl;
    }

}

void Ejercicio13() {

    /*Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N. */
    int n;
    std::cout << "Ingrese N: ";
    std::cin >> n;

    std::cout << "Los divisores de " << n << " son:" << std::endl;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            std::cout << i << std::endl;
        }
    }

}

void Ejercicio15() {

    /*Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla la suma de todos los números ingresados. */
    int num, suma = 0;
    std::cout << "Ingrese un numero (0 para terminar): ";
    std::cin >> num;

    while (num != 0) {
        suma += num;
        std::cout << "Ingrese un numero (0 para terminar): ";
        std::cin >> num;
    }

    std::cout << "El resultado de la sumatoria es: " << suma << std::endl;

}

void Ejercicio17() {

    /*Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el mayor de todos los números ingresados. */
    int num, mayor = 0;
    std::cout << "Ingrese un numero (0 para terminar): ";
    std::cin >> num;

    while (num != 0) {
        if (num > mayor) {
            mayor = num;
        }
        std::cout << "Ingrese un numero (0 para terminar): ";
        std::cin >> num;
    }

    std::cout << "El numero mayor fue: " << mayor << std::endl;

}

void Ejercicio19() {

    /*Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo. */
    int n, i;
    int esPrimo = 1;

    std::cout << "Ingrese N: ";
    std::cin >> n;

    if (n < 2) {
        esPrimo = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo) {
        std::cout << n << " es primo." << std::endl;
    } else {
        std::cout << n << " no es primo." << std::endl;
    }

}


void Ejercicio21() {

    /*Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla. */

    char c, Lconver;
    std::cout << "digite un caracter: ";
    std::cin >> c;

    if (c >= 'A' && c <= 'Z') {
        Lconver = c + 32;  // Convertir a minúscula
    } else if (c >= 'a' && c <= 'z') {
        Lconver = c - 32;  // Convertir a mayúscula
    }
//  en la tabla ASCII la diferencia entre una mayscula y su equivalente en
//minuscula es exactamente 32 posiciones.
    std::cout << "Letra convertida: " << Lconver << std::endl;

}

void Ejercicio23() {

    /*Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.(mcm es el número más pequeño de los múltiplos comunes.) */

    int a, b, maximo, mcm;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;

    maximo = (a > b) ? a : b; // Tomamos el mayor de los dos

    mcm = maximo;

    while (true) {
        if (mcm % a == 0 && mcm % b == 0) { // Si es múltiplo de ambos
            std::cout << "El MCM de " << a << " y " << b << " es: " << mcm << std::endl;
            break;
        }
        mcm++; // Aumentamos en 1 hasta encontrar el MCM
    }
}


void Ejercicio25() {

    /*Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N. */

    int N,numero, contador;
    std::cout << "Ingrese un numero: ";
    std::cin >> N;
    numero = N;
    contador = 0;

    if (N == 0) {
        contador = 1;
    } else {
        while (N != 0) {
            N = N / 10;
            contador = contador + 1;
        }
    }

    std::cout << "El numero " << numero <<  " Tiene " << contador << " digitos." << std::endl;

}


void Ejercicio27() {

    /*Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar. */

    double a, b, opcion;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;

    std::cout << "Seleccione la operacion:\n";
    std::cout << "1. Suma\n";
    std::cout << "2. Resta\n";
    std::cout << "3. Multiplicacion\n";
    std::cout << "4. Division\n";
    std::cout << "Opcion: ";
    std::cin >> opcion;

    if (opcion == 1) {
        std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    } else if (opcion == 2) {
        std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    } else if (opcion == 3) {
        std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    } else if (opcion == 4) {
        if (b != 0) {
            std::cout << a << " / " << b << " = " << (a / b) << std::endl;
        } else {
            std::cout << "Error: No se puede dividir por cero." << std::endl;
        }
    } else {
        std::cout << "Opcion no valida." << std::endl;
    }

}


void Ejercicio29() {

    /*Ejercicio 29. Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
el usuario usará los símbolos '>', '<' y '=' para indicarle al programa si B es mayor, menor o igual
que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
repetira el proceso hasta acertar el número seleccionado por usuario. */


    int min = 0;
    int max = 100;
    int B;
    char respuesta;

    std::cout << "Piensa en un numero entre 0 y 100\n";

    while (true) {
        B = (min + max) / 2;  // Se genera un número en el medio del rango
        std::cout << "Tu numero es " << B << " (Ingresa > si es mayor  \n ";
        std::cout <<  " Ingresa < si es menor \n ";
        std::cout <<  " Ingresa = si es correcto :\n ";
        std::cin >> respuesta;

        if (respuesta == '=') {
            std::cout << "Tu numero elegido es " << B << ".\n";
            break;
        } else if (respuesta == '>') {
            min = B + 1;  // El número es mayor, se ajusta el rango
        } else if (respuesta == '<') {
            max = B - 1;  // El número es menor, se ajusta el rango
        }
    }


}

/*___________________________________________________________________________________________*/
/*PROBLEMAS*/
/*___________________________________________________________________________________________*/
void Problema1() {

    /*Problema 1. Escriba un programa que identique si un carácter ingresado es una vocal, una consonante
o ninguna de las 2 e imprima un mensaje según el caso. */


    std::set<char> vocales = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    std::set<char> consonantes = {
        'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z',
        'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'
    };

    char caracter;
    std::cout << "Ingrese un caracter: ";
    std::cin >> caracter;
    // "el motodo count devulve 1 o 0 si esta en el conjunto"
    if (vocales.count(caracter) > 0) {
        std::cout << caracter << " es una vocal.\n";
    } else if (consonantes.count(caracter) > 0) {
        std::cout << caracter << " es una consonante.\n";
    } else {
        std::cout << "no es una letra.\n";
    }


}


void Problema3() {

    /*Problema 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir posiblemente año bisiesto. */

    int mes, dia;

    std::cout << "digita el mes : ";
    std::cin >> mes;
    std::cout << "digita el dia : ";
    std::cin >> dia;

    // Días maximos por mes
    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes < 1 || mes > 12) {
        std::cout << mes << " es un mes invalido.\n";
    } else if (dia < 1 || dia > diasPorMes[mes - 1]) {
        if (mes == 2 && dia == 29) {
            std::cout << "29/2 es valida en bisiesto.\n";
        } else {
            std::cout << dia << "/" << mes << " es una fecha invalida.\n";
        }
    } else {
        std::cout << dia << "/" << mes << " es una fecha valida.\n";
    }

}


void Problema5() {

    /*Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla: */


int n;

// Solicitar al usuario un número impar
std::cout << "Ingrese un numero impar : ";
std::cin >> n;

// Validar que sea impar
while (n % 2 == 0) {  // Si el número es par, solicitar de nuevo
    std::cout << "Por favor ingrese un numero q sea impar: ";
    std::cin >> n;
}

// Imprimir la parte superior del patrón
for (int i = 1; i <= n; i += 2) {
    for (int j = 0; j < i; j++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}

// Imprimir la parte inferior del patrón
for (int i = n - 2; i >= 1; i -= 2) {
    for (int j = 0; j < i; j++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}


}


void Problema7() {

    /*En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n. */
    int n;

    // Pedir al usuario un número límite
    std::cout << "favor ingrese el numero limite: ";
    std::cin >> n;

    // Variables para la serie de Fibonacci
    int a = 1, b = 1, siguiente = 0, sumaPares = 0;

    // Generar la serie de Fibonacci y sumar los números pares menores a n
    while (b < n) {  // Iteramos hasta que b sea menor que n
        if (b % 2 == 0) { // Si el número es par, se suma
            sumaPares += b;
        }

        // Calcular el siguiente número de Fibonacci
        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    // Mostrar el resultado
    std::cout << "El resultado de la suma es: " << sumaPares << std::endl;


}



int main()
{
    Problema7();

}
