//
//  Ejercicio_1_Recursiva.cpp
//  Lab_02__Andrade_Guzman_Carlos_UNSA__EPCC_II_GRUPO_B
//
//  Created by carlos andrade guzman on 5/8/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//


#include <iostream>
using namespace std;

int sumaArray (int arrayA[], int tam){ //Entrada el array y su tamaño
    if(tam==1) {  //Caso base: Si llega a un solo elemento del array devuelve ese elemento.
        return arrayA[0];
    }else{
        return arrayA[tam-1]+sumaArray(arrayA, tam-1); //forma recursiva
    }
}
int main(){
    int array[] = {1,2,3,4,5,6,7};
    int tam = 7;
    cout<<sumaArray(array, tam)<<endl;
    return 0;
}
