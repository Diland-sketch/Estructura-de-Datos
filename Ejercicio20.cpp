#include <iostream>
using namespace std;

int main() {
    int N, suma, i, j;
    int contadorNumerosPerfectos = 0; // Utilizamos un contador en lugar de un booleano
    
    cout << "Ingrese el valor de N: ";
    cin >> N;
    
    cout << "Los numeros perfectos entre 1 y " << N << " son: ";
    
    for(i = 1; i <= N; i++) {
        suma = 0;
        for(j = 1; j <= i / 2; j++) {
            if(i % j == 0) {
                suma += j;
            }
        }
        if(suma == i && i != 0) {
            cout << i << " ";
            contadorNumerosPerfectos++; // Incrementamos el contador para cada número perfecto encontrado
        }
    }
    
    cout<<"\nLa cantidad de numeros perfectos es de: "<<contadorNumerosPerfectos;
    
    if (contadorNumerosPerfectos == 0) {
        cout << "Ninguno.";
    }
    
    return 0;
}
