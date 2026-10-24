/*
Autor:  Juan Villacis
Ejercicio 2 — Número mayor entre dos valores
Desarrolla un programa que permita ingresar dos números enteros y determine cuál
de los dos es mayor.
El programa debe estar modularizado usando funciones para:
•leer los datos,
•comparar los valores,
•mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.
*/
#include<iostream>
using namespace std;

void mmi(int num1,int num2);

int main(){
    int n1,n2,mi;
    cout<<"MAYOR IGUAL O MENOR DE DOS NUMEROS "<<endl;
    cout<<"Ingrese numero 1: ";cin>>n1;
    cout<<"Ingrese numero 2: ";cin>>n2;
    mmi(n1,n2);
    return 0;
}
void mmi(int num1,int num2){
    if (num1==num2)
    {
        cout<<"Los numeros son Iguales"<<endl;
    }
    else if (num1<num2)
    {
        cout<<num1<<" es < "<<num2<<endl;
    }
    else{
        cout<<num1<<" es > "<<num2<<endl;
    }
}
