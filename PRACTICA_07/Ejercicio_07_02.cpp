// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales.
// Fecha creación: 15/10/2024
// Número de ejercicio: 2
// Problema planteado: contador de vocales
#include <iostream>
#include <string>
using namespace std;
int contarvocales(char[30]);
int contrarvocales(char palabra[30])
{
    int v=0;
    for(int i=0; i<30; i++)
    {
        if( palabra[i]=='a'||palabra[i]=='e'||palabra[i]=='i'||palabra[i]=='o'||palabra[i]=='u')
        {
            v++;
        }
    }
    return v;
}
int main()
{
    char palabra[30]={""};
    cout<<"ingrese una palabra: \n";
    cin.getline(palabra, 30);
    system("cls");
    int v=contarvocales(palabra);
    cout<<"tiene "<<v<<" vocales";
    return 0;
}