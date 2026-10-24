/*
Autor:  Juan Villacis
Ejercicio 1 — Suma y promedio de 3 números
Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
•leer los números,
•calcular la suma,
•calcular el promedio,
•mostrar los resultados.
*/
#include<iostream>
using namespace std;
void leerNumeros(int $num[], int tam);
int calcularSuma(int num1[], int tam);
int calcularPromedio(int pro, int tam);

int main(){
    int a[3],prome;
    cout<<"SUMA Y PROMEDIO DE 3 NUMEROS"<<endl;
    leerNumeros(a,3);
    prome=calcularSuma(a,3);
    cout<<"La suma es: "<<prome<<endl;
    cout<<"El promedio es: "<<calcularPromedio(prome,3)<<endl;
    return 0;
}

void leerNumeros(int $num[], int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
        cout<<"Ingrese numero: "; cin>>$num[i];
    }
}
int calcularSuma(int num1[], int tam){
    int sum,i;
    sum=0;
    for ( i = 0; i < tam; i++)
    {
        sum+=num1[i];
    }
    return sum;
}
int calcularPromedio(int pro, int tam){
    double promedio;
    promedio=pro/tam;
    return promedio;
}