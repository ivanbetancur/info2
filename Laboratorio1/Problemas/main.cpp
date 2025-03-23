#include <iostream>
#include <cmath>


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
int main()
{
    Ejercicio13();

}
