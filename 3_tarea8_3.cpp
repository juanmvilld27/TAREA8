/*
Autor:  Juan Villacis
Ejercicio 3 — Área de un rectángulo
Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
•leer los datos,
•calcular el área,
•mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.
*/
#include<iostream>
using namespace std;

void leerDatos(double &n1, double &n2);
double calArea(double a, double b);
void imprDatos(double c);

int main(){
    double base,altura,area;
    cout<<"AREA DE UN RECTANGULO "<<endl;
    leerDatos(base,altura);
    area=calArea(base,altura);
    imprDatos(area);
    return 0;
}
void leerDatos(double &n1, double &n2){
    cout<<"Ingrese base: ";cin>>n1;
    cout<<"Ingrese altura: ";cin>>n2;
}
double calArea(double a, double b){
    double ar;
    ar=a*b;
    return ar;
}
void imprDatos(double c){
    cout<<"El area es: "<<c<<endl;
}