// Actividad 4.1 - Simulación de listas con grafos - Equipo 2
// Nota - Se agregó una clase Grafo, esta unió de manera indirecta la clase Vertice y la Arista

#include <iostream>
#include <cstdlib>
using namespace std;
#include "Grafo.h"

int main(){

    Grafo grafo1;

    string datosEntrada, numeroString="";
    char individualNumber;
    int dataToVertice;

    cout << "Ingrese los datos para insertar en el grafo" << endl;
    cin >> datosEntrada;
    datosEntrada.append(",");

    // Método para reconocer los datos de entrada
    for (int i=0; i < datosEntrada.length() ; i++)
    {
        if ((isdigit(datosEntrada[i])) || (datosEntrada[i]==','))
        {
            if (datosEntrada[i] != ',')
            {
                individualNumber = datosEntrada[i];
                numeroString.push_back(individualNumber);
            }
            else
            {
                dataToVertice = atoi(numeroString.c_str());
                grafo1.addVertice(dataToVertice);
                numeroString = "";
            }
        }
        else
        {
            cout << "Ingrese unicamente valores numericos y comas" << endl;
        }
    }

    cout << endl;
    grafo1.printVertices();
    cout << "--------------" << endl;

    grafo1.printAristas();
    return 0;
}