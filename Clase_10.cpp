#include <iostream>

using namespace std;
// Metodos y funciones: ejecutan porcion de codigo N cantidad de veces
// Metodo: No retorna tipo de dato
// Funcion: Retorna un tipo de dato determinado

int sumaf2(int num1,int num2){ //funcion
    int resultado = 0;
    resultado = num1+num2;
    return resultado;
}

int suma3(int num1,int num2,int num3){
    int resultado = 0;
    resultado = num1+num2+num3;
    return resultado;
}


//int sumam2(int num1,int num2){ por valor
int sumam2(int &num1,int &num2){ //metodo // Por referencia
    int resultado = 0;
    num1+=1;
    num2+=1;
    resultado = num1+num2;
    cout<<resultado<<endl;
}

int main(){
    int a=10,b=20;
    sumaf2(a,b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

/*
    cout<<sumaf2(10,20); //funcion
    sumam2(10, 20); //Metodo
    cout<<suma3(10,20,40);
*/
    system("pause");
}