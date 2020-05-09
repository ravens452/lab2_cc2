//
//  Ejercicio_1.cpp
//  Lab_02__Andrade_Guzman_Carlos_UNSA__EPCC_II_GRUPO_B
//
//  Created by carlos andrade guzman on 5/8/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//

//Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
//(Iterativa y recursiva).
#include <iostream>
using namespace std;

int sumar (int array[], int n){
    int suma = 0;
    for (int i=0;i<n;suma += array[i++]);
    return suma;
}
int main(){
    int array[] = {1,2,3,4,5,6,7};
    cout<<"Suma de elementos del arreglo es: "<<sumar(array, 7)<<endl;
    return 0;
}
