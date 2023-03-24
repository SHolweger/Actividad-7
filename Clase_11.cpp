#include <iostream>
using namespace std;
//estructuras struct (una forma de agrupar varias variables en un solo lugar)

/*
struct Estudiante{
    int codigo[4];
    string nombre[4];
    int nota[4];
};
*/
struct Estudiante{
    int *codigo;
    string *nombre;
    int **notas;
};


int main(){
  Estudiante estudiante;
/*
  for (int i = 0; i < 4; i++)
  {
  cout<<"==========================="<<endl;
  cout<<"ingrese codigo: ";
  cin>>estudiante.codigo[i];
  cin.ignore();
  cout<<"ingrese nombre completo: ";
  getline(cin,estudiante.nombre[i]);
  cin.ignore();
  cout<<"ingrese nota: ";
  cin>>estudiante.nota[i];
  cin.ignore();
  }  

  for (int i = 0; i < 4; i++)
  {
  cout<<"==========================="<<endl;
  cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
  cout<<"Nombre Completo: "<<estudiante.nombre[i]<<endl;
  cout<<"Nota: "<<estudiante.nota[i]<<endl;
  }
  */
  
  int fila=0,columna=0;
  cout<<"Cuantos estudiantes desea agregar: ";
  cin>>fila;
  
  cout<<"Cuantas por estudiante desea agregar: ";
  cin>>columna;

  estudiante.codigo= new int [fila];
  estudiante.nombre= new string[fila];
  estudiante.notas= new int *[fila];
  for (int i = 0; i <fila; i++)
  {
    estudiante.codigo= new int [columna];
  }

  cout<<" ================= Ingreso de Notas ================= "<<endl;
  for (int i = 0; i <fila; i++)
  {
    cout<<"Codigo["<<i<<"]: ";
    cin>>estudiante.codigo[i];
    cin.ignore();

    cout<<"Nombre Completo["<<i<<"]: ";
    getline(cin,estudiante.nombre[i]);
    cin.ignore();

    for (int ii = 0; ii <columna; ii++)
  {
    cout<<"Ingrese nota["<<ii<<"]: ";
    cin>>*(*(estudiante.notas+i)+ii);
  }
  cout<<" =================================================== ";
  }

    cout<<" ================= Mostrar Datos ================= "<<endl;
for (int i = 0; i <fila; i++)
  {
    cout<<"Codigo["<<i<<"]: "<<estudiante.codigo[i]<<endl;
    cout<<"Nombre Completo["<<i<<"]: "<<estudiante.nombre[i]<<endl;

    for (int ii = 0; ii <columna; ii++)
  {
    cout<<"Nota["<<ii<<"]: "<<*(*(estudiante.notas+i)+ii)<<endl;
  }
  cout<<" =================================================== ";
  }

  for (int i = 0; i <fila; i++)
  {
    delete[] estudiante.codigo;
  }

  delete[] estudiante.codigo;
  delete[] estudiante.nombre;
  delete[] estudiante.notas;

  system("pause");
}