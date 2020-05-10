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


int longitud(char cadena[])
{
   int acum = 0;
   while( cadena[acum] != '\0' ) //mientras no sea fin de cadena
       acum++;
   return acum;
}


int main(){

    char cadena[30];
    cout<<"¿Cuál es la cadena? "<<endl;
    cin>>cadena;
    cout<<"Tu nombre tiene "<<longitud(cadena)<<" letras";
 }
