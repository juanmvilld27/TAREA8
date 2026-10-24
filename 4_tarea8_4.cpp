/*
Autor:  Juan Villacis
Ejercicio 4 — Intercambio de dos números
Desarrolla un programa que permita ingresar dos números enteros y luego
intercambiar sus valores usando una función.
El programa debe:
•mostrar los valores antes del intercambio,
•realizar el intercambio usando una función,
•mostrar los valores después del intercambio.
*/
#include<iostream>
using namespace std;

void leerDatos(int &n1, int &n2);
void intercambio(int &n1, int &n2);
void imprDatos(int nu1,int nu2);


int main(){
    int a,b;
    cout<<"INTERCAMBIO DE NUMEROS "<<endl;
    leerDatos(a,b);
    imprDatos(a,b);
    intercambio(a,b);
    imprDatos(a,b);
    return 0;
}
void leerDatos(int &n1, int &n2){
    cout<<"Ingrese base: ";cin>>n1;
    cout<<"Ingrese altura: ";cin>>n2;
}
void intercambio(int &n1, int &n2){
    int aux;
    aux=n1;
    n1=n2;
    n2=aux;
}
void imprDatos(int nu1,int nu2){
    cout<<"Los valores son: "<<nu1<<" y "<<nu2<<endl;
}