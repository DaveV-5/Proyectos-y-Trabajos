/**
 * @file proyecto Modulo B.cpp
 * @brief Proyecto N° 1 - Modelo B: Analizador de números
 * @author Integrantes: [Dave Mendoza]
 * @asignatura Lenguaje de Programación II (C++)
 * @seccion Sección A
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

// Prototipos de funciones
int leerEnteroEnRango(int min, int max);
bool esPrimo(int n);
long long factorial(int n);
int mcd(int a, int b);
long long mcm(int a, int b);
bool esPerfecto(int n);
long long invertirNumero(long long n);
long long decimalABinario(int n);
void mostrarEstadisticas(int cPrimo, int cFact, int cMcdMcm, int cPerf, int cInv, int cBin, int totalOp);
char preguntarRepetir(string nombreOpcion);

/**
 * @brief Lee y valida un número entero dentro de un rango determinado.
 */
int leerEnteroEnRango(int min, int max) {
    long long valor;
    while (true) {
        if (cin >> valor) {
            if (valor >= min && valor <= max) {
                return static_cast<int>(valor);
            } else {
                cout << "\n[!] Error: El numero debe estar entre " << min << " y " << max << ". Intente de nuevo: ";
            }
        } else {
            cout << "\n[!] Error: Entrada invalida (letras o caracteres no permitidos). Intente de nuevo: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

/**
 * @brief Pregunta al usuario si desea repetir la misma opción.
 */
char preguntarRepetir(string nombreOpcion) {
    char respuesta;
    while (true) {
        cout << "\nDesea realizar otra operacion de [" << nombreOpcion << "]? (s/n): ";
        cin >> respuesta;
        if (respuesta == 's' || respuesta == 'S' || respuesta == 'n' || respuesta == 'N') {
            return respuesta;
        }
        cout << "[!] Responda 's' para si o 'n' para no: ";
    }
}

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long mcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (static_cast<long long>(a) / mcd(a, b)) * b;
}

bool esPerfecto(int n) {
    if (n <= 1) return false;
    long long suma = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma == n;
}

long long invertirNumero(long long n) {
    long long invertido = 0;
    while (n > 0) {
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }
    return invertido;
}

long long decimalABinario(int n) {
    if (n == 0) return 0;
    long long binario = 0;
    long long multiplicador = 1;
    while (n > 0) {
        int resto = n % 2;
        binario += resto * multiplicador;
        n /= 2;
        multiplicador *= 10;
    }
    return binario;
}

void mostrarEstadisticas(int cPrimo, int cFact, int cMcdMcm, int cPerf, int cInv, int cBin, int totalOp) {
    cout << "\n========================================\n";
    cout << "       ESTADISTICAS DE LA SESION        \n";
    cout << "========================================\n";
    cout << " Total de operaciones realizadas: " << totalOp << "\n";
    cout << " - Es primo: " << cPrimo << "\n";
    cout << " - Factorial: " << cFact << "\n";
    cout << " - MCD y MCM: " << cMcdMcm << "\n";
    cout << " - Es numero perfecto: " << cPerf << "\n";
    cout << " - Invertir numero / Capicua: " << cInv << "\n";
    cout << " - Decimal a binario: " << cBin << "\n";
    cout << "========================================\n";
}

int main() {
    int opcion = 0;
    int cPrimo = 0, cFact = 0, cMcdMcm = 0, cPerf = 0, cInv = 0, cBin = 0;
    int totalOp = 0;

    do {
        cout << "\n========================================\n";
        cout << "     ANALIZADOR DE NUMEROS (MODELO B)   \n";
        cout << "========================================\n";
        cout << " 1. Es primo                            \n";
        cout << " 2. Factorial                           \n";
        cout << " 3. MCD y MCM                           \n";
        cout << " 4. Es numero perfecto                  \n";
        cout << " 5. Invertir numero y decir si es capicua\n";
        cout << " 6. Decimal a binario                   \n";
        cout << " 7. Estadisticas de la sesion           \n";
        cout << " 8. Salir                               \n";
        cout << "========================================\n";
        cout << " Seleccione una opcion (1-8): ";

        opcion = leerEnteroEnRango(1, 8);

        if (opcion == 1) {
            char repetir;
            do {
                cout << "\n--- OPCION 1: ES PRIMO ---\n";
                cout << "Ingrese un numero entre 1 y 100000: ";
                int n = leerEnteroEnRango(1, 100000);
                if (esPrimo(n)) {
                    cout << "==> El numero " << n << " ES primo.\n";
                } else {
                    cout << "==> El numero " << n << " NO es primo.\n";
                }
                cPrimo++;
                totalOp++;
                repetir = preguntarRepetir("Es Primo");
            } while (repetir == 's' || repetir == 'S');
        } 
        else if (opcion == 2) {
            char repetir;
            do {
                cout << "\n--- OPCION 2: FACTORIAL ---\n";
                cout << "Ingrese un numero entre 0 y 20: ";
                int n = leerEnteroEnRango(0, 20);
                long long res = factorial(n);
                cout << "==> El factorial de " << n << " es: " << res << "\n";
                cFact++;
                totalOp++;
                repetir = preguntarRepetir("Factorial");
            } while (repetir == 's' || repetir == 'S');
        } 
        else if (opcion == 3) {
            char repetir;
            do {
                cout << "\n--- OPCION 3: MCD y MCM ---\n";
                cout << "Ingrese el primer numero (1 a 100000): ";
                int a = leerEnteroEnRango(1, 100000);
                cout << "Ingrese el segundo numero (1 a 100000): ";
                int b = leerEnteroEnRango(1, 100000);
                
                int resultadoMcd = mcd(a, b);
                long long resultadoMcm = mcm(a, b);
                
                cout << "==> El MCD de " << a << " y " << b << " es: " << resultadoMcd << "\n";
                cout << "==> El MCM de " << a << " y " << b << " es: " << resultadoMcm << "\n";
                cMcdMcm++;
                totalOp++;
                repetir = preguntarRepetir("MCD y MCM");
            } while (repetir == 's' || repetir == 'S');
        } 
        else if (opcion == 4) {
            char repetir;
            do {
                cout << "\n--- OPCION 4: ES NUMERO PERFECTO ---\n";
                cout << "Ingrese un numero entre 1 y 100000: ";
                int n = leerEnteroEnRango(1, 100000);
                if (esPerfecto(n)) {
                    cout << "==> El numero " << n << " ES un numero perfecto.\n";
                } else {
                    cout << "==> El numero " << n << " NO es un numero perfecto.\n";
                }
                cPerf++;
                totalOp++;
                repetir = preguntarRepetir("Numero Perfecto");
            } while (repetir == 's' || repetir == 'S');
        } 
        else if (opcion == 5) {
            char repetir;
            do {
                cout << "\n--- OPCION 5: INVERTIR NUMERO Y CAPICUA ---\n";
                cout << "Ingrese un numero entre 0 y 999999999: ";
                long long n = leerEnteroEnRango(0, 999999999);
                long long invertido = invertirNumero(n);
                cout << "==> El numero invertido es: " << invertido << "\n";
                if (n == invertido) {
                    cout << "==> El numero " << n << " ES capicua.\n";
                } else {
                    cout << "==> El numero " << n << " NO es capicua.\n";
                }
                cInv++;
                totalOp++;
                repetir = preguntarRepetir("Invertir Numero");
            } while (repetir == 's' || repetir == 'S');
        } 
        else if (opcion == 6) {
            char repetir;
            do {
                cout << "\n--- OPCION 6: DECIMAL A BINARIO ---\n";
                cout << "Ingrese un numero decimal entre 0 y 1023: ";
                int n = leerEnteroEnRango(0, 1023);
                long long bin = decimalABinario(n);
                cout << "==> El numero " << n << " en binario es: " << bin << "\n";
                cBin++;
                totalOp++;
                repetir = preguntarRepetir("Decimal a Binario");
            } while (repetir == 's' || repetir == 'S');
        } 
        else if (opcion == 7) {
            mostrarEstadisticas(cPrimo, cFact, cMcdMcm, cPerf, cInv, cBin, totalOp);
            cout << "\nPresione Enter para volver al menu...";
            cin.ignore();
            cin.get();
        } 
        else if (opcion == 8) {
            cout << "\nSaliendo del programa...\n";
            mostrarEstadisticas(cPrimo, cFact, cMcdMcm, cPerf, cInv, cBin, totalOp);
            cout << "\n¡Gracias por usar el Analizador de Numeros!\n";
        }

    } while (opcion != 8);

    return 0;
}
