//
//  Ejercicio_2.cpp
//  Lab_02__Andrade_Guzman_Carlos_UNSA__EPCC_II_GRUPO_B
//
//  Created by carlos andrade guzman on 5/8/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//


//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).
#include <iostream>
using namespace std;
void invertirArray (int arrayA[], int tam){
    int arrayB[tam];
    for (int i=0;i<tam;i++){
        arrayB[i] = arrayA[tam-(i+1)];
    }
    for (int i=0; i<tam; i++) {
        cout<<" "<<arrayB[i];
    }
    cout<<endl;
}

int main(){
    int array[] = {1,2,3,4,5,6,7};
    int tam = 7;
    invertirArray(array, tam);
    return 0;
}
