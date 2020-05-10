//
//  Ejercicio_4.cpp
//  Lab_02__Andrade_Guzman_Carlos_UNSA__EPCC_II_GRUPO_B
//
//  Created by carlos andrade guzman on 5/8/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//

//Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)

#include <iostream>
using namespace std;


void longitudArray(int array[], int tam){
    int aux=0;
    for(int i = 0; i < tam; i++){
        aux++;
    }
    cout<<aux<<endl;
}



int main(){
    int arreglo[] = {3,1,8,4,5,9,7};
    int tam = 7;
    longitudArray(arreglo, tam);
 
}
