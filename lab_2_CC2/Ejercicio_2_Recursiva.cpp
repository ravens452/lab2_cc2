//
//  Ejercicio_2_Recursiva.cpp
//  Lab_02__Andrade_Guzman_Carlos_UNSA__EPCC_II_GRUPO_B
//
//  Created by carlos andrade guzman on 5/8/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//

//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).
#include <iostream>
using namespace std;

void invertirArray (int arrayA[], int tam){ //Entrada el array y su tamaño
    if(tam <= 1){
        return;
    }else{
        int tem ; //Creamos una variable temporal
        int i=0;
        tem = arrayA[i]; //guardamos el valor de posicion 0 en el auxiliar
        arrayA[i] = arrayA[tam-1]; //el comienzo toma el valor del final
        arrayA[tam-1] = tem;       // el final toma el valor del auxiliar
        invertirArray(&arrayA[1], tam-2); //recursion
    }
}
int main(){
    int array[] = {1,2,3,4,5,6,7};
    int tam = 7;
    invertirArray(array, tam);
    for (int i=0; i<tam; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}
