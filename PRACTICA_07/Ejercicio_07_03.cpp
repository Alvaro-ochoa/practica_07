// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales.
// Fecha creación: 15/10/2024
// Número de ejercicio: 3
// Problema planteado: eliminar espacios entre palabras
#include <iostream>
#include <string>
using namespace std;
void eliminarespacios(char[30])
void eliminarespacios(char palabra[30])
{
    char pal[30];
    int j=0;
    for(int i=0; i<30; i++)
    {
       if(palabra[i]!=' ')
       {
         pal[j]=palabra[i];
         j++;
       }
    }
    cout<<"sin espacios "<<palabra;
}
int main()
{
    char palabra[30]={""};
    system("cls");
    cout<<"ingrese una palabra: \n";
    cin.getline(palabra, 30);
    eliminarespacios(palabra);
    return 0;
}