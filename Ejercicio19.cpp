#include <iostream>

using namespace std;

int main() {
    int N, i, j, count = 0;
    bool numPrimo;

    cout << "Ingrese el limite superior (N): ";
    cin >> N;

    cout << "Numeros primos entre 1 y " << N << ": ";

    for (i = 2; i <= N; i++) {
        numPrimo = true;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                numPrimo = false;
                break;
            }
        }

        if (numPrimo) {
            cout << i << " ";
            count = count  + 1;
        }
    }
    

    cout << endl;
    cout << "La Cantidad de Numeros primos entre 1 y " << N << ": "<<count;

    return 0;

}
