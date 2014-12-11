#include "Lista.h"
#include "ArbolTrinario.h"
#include "Evaluador.h"
#include <fstream>
#include <list>
#include <vector>
#include <math.h>
#include <cstring>
using namespace std;
int cont=0;

//1 a realizar estan ubicados en el archivo Lista.h

float obtenerPromedio(std::list<float> mi_lista)
{
    float total=0;
    float prom=0;
    int cont2=0;
    for(std::list<float>::iterator i=mi_lista.begin(); i!=mi_lista.end(); i++)
    {
        total+=(*i);
        cont2++;
        if(i!=mi_lista.end())
            prom=total/cont2;
    }
    return prom;
}

int obtenerMediana(std::vector<int> mi_vector)
{

   if(mi_vector.size()%2==0){
    return mi_vector[mi_vector.size()%2==0];
   }
    return 0;
}

bool existeEnArchivo(string nombre_archivo, string cadena)
{
    ifstream in(nombre_archivo.c_str(),ios::ate);
    int fin = in.tellg();
    in.seekg(0);
    string palabra;
    while(!in.eof())
    {
        in>>palabra;
        if(strcmp(palabra.c_str(),cadena.c_str())==0)
            return true;

    }
    in.close();
    return false;

}

char obtenerUltimaLetra(string nombre_archivo)
{
ifstream in(nombre_archivo.c_str(), ios::ate);
in.seekg(in.tellg()-1);
char letra;
in >> letra;
in.close();
return letra;

}

int contarEnArbol(NodoTrinario* raiz, int num)
{

    if(raiz==NULL){

    return cont;
    }
if(raiz->num==num)
    cont+=1;
if(contarEnArbol(raiz->izq,num))
    cont+=1;
if(contarEnArbol(raiz->medio,num))
   cont+=1;
if(contarEnArbol(raiz->der,num))
    cont+=1;

    return cont;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

