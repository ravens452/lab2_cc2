//
//  Ejercicio_4_Recursiva.cpp
//  Lab_02__Andrade_Guzman_Carlos_UNSA__EPCC_II_GRUPO_B
//
//  Created by carlos andrade guzman on 5/8/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//

//Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)

#include <iostream>
using namespace std;


int longitudArray(int A[], int N)
{
    int acum =0;
    if (N <= 0)
        return 0;
    return (longitudArray(A, N - 1) + 1);
}



int main(){
    int arreglo[] = {3,1,8,4,5,9,7};
    int tam = 7;
    cout<<"La longitud del array es: "<<longitudArray(arreglo, tam)<<endl;
 
}
