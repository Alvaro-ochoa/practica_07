// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales.
// Fecha creación: 15/10/2024
// Número de ejercicio: 6
// Problema planteado: verificar si una palabra es un palindromo
#include <iostream>
#include <string>
using namespace std;
bool palindromo(char[30]);
bool palindromo(char pal[30])
{
    for(int i=0; i<30; i++)
    {
        pal[i]=toupper(pal[i]);
    }
    char inv[30]={""};
    for(int i=0; i<30; i++)
    {
        inv[i]=toupper(pal[29-1]);
    }
    return strcmp(inv,pal)==0;
}
int main()
{
    char pal[30]={""};
    system("cls");
    cout<<"ingrese una palabra: \n";
    cin.getline(palabra, 30);
    if(palindromo(pal))
    {
        cout<<"es palindromo";
    }
    else
    {
        cout<<"no es palindromo";
    }
    return 0;
}