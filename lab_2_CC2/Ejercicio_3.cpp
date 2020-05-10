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

//resolvemos usando punteros:


void ordenar(int* array, int n)   //Entrada del array y el tamaño
{
    int i, j, t;

    for (i = 0; i < n; i++) { //Ordenamos usando comparacion de dos en dos usando punteros.
        for (j = i + 1; j < n; j++) {
            if (*(array + j) < *(array + i)) {

                t = *(array + i); //usamos auxiliar t
                *(array + i) = *(array + j);
                *(array + j) = t;
            }
        }
    }
    
    for (i = 0; i < n; i++) //Imrpimiendo los resultados
        cout<<*(array + i)<<" ";
}


int main(){
    int arreglo[] = {3,1,8,4,5,9,7};
    int tam = 7;
    ordenar(arreglo, tam);
 
}




//Otra forma de resolver
/*
void ordenarArray(int array[], int tam){ //Entrada array y su tamaño
    int aux;
    for(int i = 0; i < tam; i++){        //Recoremos desde el principio del array hasta el final
        for(int x = 0; x < tam; x++){    //
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
    cout << endl;
}



int main(){
    int arreglo[] = {3,1,8,4,5,9,7};
    int tam = 7;
    ordenarArray(arreglo, tam);
 
}
*/
