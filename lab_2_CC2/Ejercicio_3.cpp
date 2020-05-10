//
//  Ejercicio_3_Iterativa.cpp
//  Lab_02__Andrade_Guzman_Carlos_UNSA__EPCC_II_GRUPO_B
//
//  Created by carlos andrade guzman on 5/8/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//

//Implementar una función que ordene los elementos de un arreglo: ascendente.
#include <iostream>
using namespace std;


void ordenarArray(int array[], int tam){
    int aux;
    for(int i = 0; i < tam; i++){
        for(int x = 0; x < tam; x++){
            if(array[i] < array[x]){
                aux = array[x];
                array[x] = array[i];
                array[i] = aux;
            }
        }
    }
    cout << "\nArray dinamico ordenado: ";
    for(int i = 0; i < tam; i++){
        cout << "{" << array[i] << "} ";
    }
    cout << "Fin!" << endl;
}



int main(){
    int arreglo[] = {3,1,8,4,5,9,7};
    int tam = 7;
    ordenarArray(arreglo, tam);
 
}
