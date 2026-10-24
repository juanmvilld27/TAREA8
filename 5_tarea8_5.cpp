/*
Autor:  Juan Villacis
Ejercicio 5 — Contador actualizado con referencia
Desarrolla un programa que pida al usuario un número entero positivo n y luego
incremente un contador desde 0 hasta n, usando una función que actualice el valor
del contador.
El objetivo es que practiques el uso de paso por referencia para modificar una
variable desde una función.
El programa debe mostrar el valor del contador en cada incremento.
*/
#include<iostream>
using namespace std;

void leerDatos(int &n1);
void contador(int &n1);
void imprDatos(int nu1);


int main(){
    int a,cont,i;
    cout<<"CONTADOR CON REFERENCIA "<<endl;
    leerDatos(a);
    cont=0;
    for ( i = 0; i <= a; i++)
    {
        imprDatos(cont);
        contador(cont);
    }
    
    return 0;
}
void leerDatos(int &n1){
    cout<<"Ingrese numero: ";cin>>n1;
}
void contador(int &n1){
    n1+=1;
}
void imprDatos(int nu1){
    cout<<nu1<<" ";
}