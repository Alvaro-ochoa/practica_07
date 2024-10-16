// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales.
// Fecha creación: 15/10/2024
// Número de ejercicio: 4
// Problema planteado: verificar si dos palabras son iguales
#include <iostream>
#include <string>
using namespace std;
void convertirmay(char & [30]);
void soniguales(char[30],char[30])
void convertirmay(char & pal[30])
{
    for(int i=0; i<30; i++)
    {
       pal[i]=toupper(pal[i]);
    }
}
void soniguales(char pal1[30], char pal2[30])
{
    if (strcmp(p1,p2)==0)
    {
        cout<<"son iguales "<<endl;
    }
    else
    {
        cout<<"no son iguales "<<endl;
    }
}
int main()
{
    char pal1[30]={""};
    char pal2[30]={""};
    system("cls");
    cout<<"ingrese una palabra: \n";
    cin.getline(pal1, 30);
    cout<<"ingrese una palabra: \n";
    cin.getline(pal2, 30);
    soniguales(pal1,pal2);
    return 0;
}