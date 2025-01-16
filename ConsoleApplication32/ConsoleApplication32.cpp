// ConsoleApplication32.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

vector<int> basicSort(vector<int> arr) {
    vector<int> sortedArray;

    // Mientras queden elementos válidos en el arreglo original
    while (sortedArray.size() < arr.size()) {
        // Encontrar el índice del elemento más pequeño
        int minIndex = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }

        // Agregar el elemento más pequeño al arreglo ordenado
        sortedArray.push_back(arr[minIndex]);

        // Marcar el elemento como "procesado"
        arr[minIndex] = numeric_limits<int>::max();
    }

    return sortedArray;
}

int main() {
    vector<int> originalArray = {5, 3, 8, 1, 2};
    vector<int> result = basicSort(originalArray);

    cout << "Arreglo original: ";
    for (int num : originalArray) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Arreglo ordenado: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
