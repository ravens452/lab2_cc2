//
//  Ejercicio_5.cpp
//  Lab_02__Andrade_Guzman_Carlos_UNSA__EPCC_II_GRUPO_B
//
//  Created by carlos andrade guzman on 5/8/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//


//Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).
#include <iostream>
using namespace std;

int longitud(char cadena[])
{
   int acum = 0;
   while( cadena[acum] != '\0' ) //mientras no sea fin de cadena
       acum++;
   return acum;
}
void insertarCadena(char    cadenaA[],char cadenaB[]){
    int tam1 = longitud(cadenaB);
    int a=0;
    for (int i = tam1; i<50; i++) {
        cadenaB[i] = cadenaA[a];
        a++;
    }
    
}

int c = 0;
int main(){
    char a[50];
    char b[50];
    cout<<"Escriba la cadena a: "<<endl;cin>>a;
    cout<<"Escriba la cadena b: "<<endl;cin>>b;
    insertarCadena(a, b);
    cout<<"LACADENA UNIDA ES: "<<b<<endl;
}
