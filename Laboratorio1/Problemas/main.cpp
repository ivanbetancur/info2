#include <iostream>
#include <cmath>
#include <set>

using namespace std;




void Ejercicio1() {
    /*Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
            de la división A/B.*/
    int a, b, c;
    std::cout << "Ingrese numero A: ";
    std::cin >> a;
    std::cout << "Ingrese numero B: ";
    std::cin >> b;
    c= a%b;
    std::cout << "El residuo de la division " << a << "/" << b << " es: " << c << std::endl;
}

void Ejercicio3() {
    /*Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.*/

    int a, b;
    std::cout << "Digite el numero A: ";
    std::cin >> a;
    std::cout << "Digite el numero B: ";
    std::cin >> b;

    if (a > b) {
        std::cout << "El numero mayor es " << a << std::endl;
    } else if (b > a) {
        std::cout << "El numero mayor es " << b << std::endl;
    }
    else {
        std::cout << "Ambos numeros son iguales." << std::endl;
    }

}

void Ejercicio5() {

    /*Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división
A/B con redondeo.*/

    double a, b,c;
    std::cout << "Ingrese A: ";
    std::cin >> a;
    std::cout << "Ingrese B: ";
    std::cin >> b;

    if (b != 0) {
        c=round(a/b);
        std::cout << "El resultado de la division redondeada es: " << c << std::endl;
    } else {
        std::cout << "Error: division por cero no permitida" << std::endl;
    }

}

void Ejercicio7() {

    /*Ejercicio 7.Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).*/

    int n;
    int suma = 0;

    std::cout << "digite un numero: ";
    std::cin >> n;

    std::cout << "La sumatoria desde 0 hasta " << n << " es: ";
    for (int i = 1; i <= n; i++)
    {
        suma = suma + i;
        std::cout << i;
        if (i < n)
        {
            std::cout << " + ";
        }
    }
    std::cout << " = " << suma << std::endl;

}

void Ejercicio9() {

    /*Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi. A = π r²  Perímetro = 2 · r · π */
    double PI= 3.1416;
    double n;
    std::cout << "Ingrese el radio del circulo: ";
    std::cin >> n;

    double perimetro = 2 * PI * n;
    double area = PI * n * n;

    std::cout << "el perimetro es: " << perimetro << std::endl;
    std::cout << "el area es: " << area << std::endl;

}

void Ejercicio11() {

/*Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar
hasta 10xN. */
    int n, mult;
    std::cout << "Ingrese N: ";
    std::cin >> n;
    std::cout << "la tabla del "<< n << " es:"<< std::endl;
    for (int i = 1; i < 11; i++)
    {
        mult=i*n;
        std::cout << i << "x" << n << "=" << mult << std::endl;
    }

}



void Ejercicio13() {

    /*Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N. */
    int n;
    std::cout << "Ingrese un numero ";
    std::cin >> n;

    std::cout << "Los divisores de " << n << " son:" << std::endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << ",";
        }
    }

}


void Ejercicio15() {

    /*Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla la suma de todos los números ingresados. */
    int num;
    int suma = 0;
    std::cout << "ingrese un numero: ";
    std::cin >> num;

    while (num != 0)
    {
        suma = suma + num;
        std::cout << "ingrese otro numero o digite 0 para finalizar: ";
        std::cin >> num;
    }

    std::cout << "El resultado de la sumatoria es: " << suma << std::endl;

}


void Ejercicio17() {

    /*Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el mayor de todos los números ingresados. */
    int num, mayor = 0;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    while (num != 0)
    {
        if (num > mayor)
        {
            mayor = num;
        }
        std::cout << "ingrese otro numero o digite 0 para finalizar: ";
        std::cin >> num;
    }

    std::cout << "El numero mayor ingresado es: " << mayor << std::endl;

}

void Ejercicio19() {

    /*Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo. */
    int n, i;
    int esPrimo = 1;// cuando esta en 0 significa que no es primo

    std::cout << "Ingrese un numero para validar si es primo: ";
    std::cin >> n;

    if (n < 2)
    {
        esPrimo = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo==1)
    {
        std::cout << n << " es primo." << std::endl;
    }
    else
    {
        std::cout << n << " no es primo." << std::endl;
    }

}


void Ejercicio21() {

    /*Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla. */
    //  en la tabla ASCII la diferencia entre una mayscula y su equivalente en
    //minuscula es exactamente 32 posiciones.

    char c, conver;
    std::cout << "digite un caracter: ";
    std::cin >> c;

    if (c >= 'A' && c <= 'Z')
    {
        conver = c + 32;  // Convertir a minúscula
    }
    else if (c >= 'a' && c <= 'z')
    {
        conver = c - 32;  // Convertir a mayúscula
    }

    std::cout << "Letra convertida: " << conver << std::endl;


}

void Ejercicio23() {

    /*Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.(mcm es el número más pequeño de los múltiplos comunes.) */

    int a, b, maximo, mcm;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;

    // busco el mayor de los dos
    if (a > b)
    {
        maximo = a;
    } else
    {
        maximo = b;
    }

    mcm = maximo;

    while (true)
    {
        if (mcm % a == 0 && mcm % b == 0)
        { // valido se es multiplo de ambos numeros
            std::cout << "El MCM de " << a << " y " << b << " es: " << mcm << std::endl;
            break;
        }
        mcm++;
    }
}


void Ejercicio25() {

    /*Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N. */

    int N,numero, contador;
    std::cout << "digite un numero de N digitos: ";
    std::cin >> N;
    numero = N;
    contador = 0;

    if (N == 0)
    {
        contador = 1;
    }
    else
    {
        while (N != 0) //uso el while para contar cuántas veces N puede dividirse por 10 antes de llegar a 0
        {
            N = N / 10;
            contador = contador + 1;
        }
    }

    std::cout << "El numero " << numero <<  " Tiene " << contador << " digitos." << std::endl;

}



void Ejercicio27() {

    /*Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar. */

    double a, b;
    int  opcion;

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

    if (opcion == 1)
    {
        std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    } else if (opcion == 2)
    {
        std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    } else if (opcion == 3)
    {
        std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    } else if (opcion == 4)
    {
        if (b != 0)
        {
            std::cout << a << " / " << b << " = " << (a / b) << std::endl;
        } else
        {
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
    int numIncognito;
    char respuesta;

    std::cout << "Piensa en un numero entre 0 y 100\n";

    while (true) {
        numIncognito = (min + max) / 2;  // Se genera un número en el medio del rango
        std::cout <<  " Tu numero es " << numIncognito <<  " ?\n";
        std::cout <<  " Ingresa > si es mayor  \n";
        std::cout <<  " Ingresa < si es menor \n";
        std::cout <<  " Ingresa = si es correcto :\n";
        std::cin >> respuesta;

        if (respuesta == '=')
        {
            std::cout << "Tu numero elegido es " << numIncognito << ".\n";
            break;
        } else if (respuesta == '>')
        {
            min = numIncognito + 1;  // si el numero es mayor se ajusta el rango
        } else if (respuesta == '<')
        {
            max = numIncognito - 1;  // si el numero es menor se ajusta el rango
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

        // calculo el sigite numero de Fibonacci
        siguiente = a + b;
        a = b;
        b = siguiente;
    }


    std::cout << "El resultado de la suma es: " << sumaPares << std::endl;


}


void Problema9() {

    /*Problema 9. Escriba un programa que pida un número entero N e imprima el resultado de la suma
    de todos sus dígitos elevados a sí mismos. */


    int N, suma = 0;

    std::cout << "Ingrese un numero: ";
    std::cin >> N;

    int temp = N; // se guarda en una var temporal

    while (temp > 0) {
        int digito = temp % 10;   // Extrae el último dígito
        suma += pow(digito, digito);  // Eleva el dígito a sí mismo y suma
        temp /= 10;   // Elimina el último dígito
    }

    std::cout << "El resultado de la suma es: " << suma << std::endl;


}


/*___________________________________________________________________________________________*/
/*Problema 11. Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
todos los números enteros entre 1 y el número ingresado. */
/*___________________________________________________________________________________________*/
// Función para verificar si un número es múltiplo de todos los números de 1 a N
bool esMultiplo(int num, int N) {
    for (int i = 1; i <= N; i++) {
        if (num % i != 0) {
            return false; // Si no es divisible por algún número, no es el MCM
        }
    }
    return true; // Si es divisible por todos, es el MCM
}
// Función para encontrar el MCM buscando el menor número que sea múltiplo de 1 a N
int calcularMCM(int N) {
    int mcm = N; // Empezamos desde el número N
    while (!esMultiplo(mcm, N)) {
        mcm++; // Aumentamos hasta encontrar el primer múltiplo de todos
    }
    return mcm;
}
void Problema11() {

    /*Problema 11. Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
todos los números enteros entre 1 y el número ingresado. */

    int N;
    std::cout << "Ingrese un numero: ";
    std::cin >> N;

    int resultado = calcularMCM(N);

    std::cout << "El minimo comun multiplo es: " << resultado << std::endl;


}

/*___________________________________________________________________________________________*/
/*Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado. */
/*___________________________________________________________________________________________*/

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num < 2) return false; // 0 y 1 no son primos

    for (int i = 2; i < num; i++) { // Revisamos desde 2 hasta num-1
        if (num % i == 0) {
            return false; // Si tiene algún divisor, no es primo
        }
    }
    return true; // Si no encontró divisores, es primo
}

void Problema13() {

    /*Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado. */

    int N;

    // Pedir el numero al usuario
    std::cout << "Ingrese un numero: ";
    std::cin >> N;

    int sumaPrimos = 0;

    // Recorremos todos los números menores a N
    for (int i = 2; i < N; i++) {
        if (esPrimo(i)) { // Si el número es primo, lo sumamos
            sumaPrimos += i;
        }
    }

    // Mostrar el resultado
    std::cout << "El resultado de la suma es: " << sumaPrimos << std::endl;

}

/*___________________________________________________________________________________________*/
/*Problema 15. Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
se genera una espiral de números como la siguiente: */
/*___________________________________________________________________________________________*/





void Problema15() {

    /*Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
se genera una espiral de números como la siguiente:  En el caso de esta espiral de 5x5,
la suma de los números en la diagonal es 101.
Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
de una espiral de nxn. */

    int n;

    // Solicitar un numero impar al usuario
    std::cout << "Ingrese un numero impar para la espiral: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "el numero ingresado debe ser impar." << std::endl;
        return;
    }

    int sumaDiagonal = 1; // La espiral siempre empieza en 1
    int numero = 1;

    // Sumar los números de las diagonales
    for (int lado = 3; lado <= n; lado += 2) {
        for (int i = 0; i < 4; i++) {
            numero += (lado - 1);
            sumaDiagonal += numero;
        }
    }

    // Imprimir el resultado
    std::cout << "En una espiral de " << n << "x" << n << ", la suma es: " << sumaDiagonal << std::endl;

}


/*___________________________________________________________________________________________*/
/*Problema 17. La secuencia de números triangulares se forma al sumar su posición en el arreglo
con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28... */
/*___________________________________________________________________________________________*/





int main()
{
    Ejercicio29();

}
