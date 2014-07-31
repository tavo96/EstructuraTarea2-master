// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la pila son pares, de lo contrario devuelve false
bool sonPares(stack<int> mi_pila)
{



   while(!mi_pila.empty()) // no aseguramos que la pila no este vacia
        {

        if(mi_pila.top() % 2 == 0){ //evaluamos cada elemento de la pila para ver si es par

            mi_pila.pop();

        }else
        {

        return false;       // retornamos falso si este no es par
        }
        }
    return true; // si es par retornamos verdadero

}
//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{

  while(!mi_lista.empty()) // nos aseguramos que la lista no este vacia
    {
        if(mi_lista.front() % 2 == 0)  // evaluamos los elementos de la lista para ver si son pares o no
        {
            mi_lista.pop_front();
        }
        else
        {
            return false;     //si hay algun elemento impar devolvemos falso
        }
    }
    return true; // si todos los elementos son pares retornamos verdadero
}

//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(stack<string> mi_pila, string str)
{

    while(!mi_pila.empty()){   // comprobamos que la pila no este vacia

        if(mi_pila.top() == str)  // comparamos cada elemento de la pila con el elemento str para ver si este se encunetra dentro de la pila

            return true;// si esta dentro de la pila devolvemos true

            mi_pila.pop();

        }
        return false; // si no esta dentro de la pila devolvemos false

}
//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{

    while(!mi_lista.empty()) //comprobamos que la lista no este vacia
    {
        if(mi_lista.front() == str) //comparamos cada elemento de la lista con el elemento str para ver que se encunetre en la lista
        {
            return true; // si se encuentra el elemento devolvemos true
        }
        mi_lista.pop_front();
    }
    return false; // si no se encuentra devolvemos false

}
//devuelve la suma de los elementos de la cola
int getSuma(stack<int> mi_pila)
{

     int s = 0; //creamos una variable temporal para poder sumar los elementos
     while(!mi_pila.empty()){ //comprobamos que la pila no este vacia
        s = s + mi_pila.top(); // la variable s va a ser igual a ella misma mas el nuevo elemento hasta sumar todos los elementos
        mi_pila.pop();

    }
    return s;// devolvemos el total de la suma

}
//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{

    int  s = 0;// creamos una variable temporal
   for(list<int>:: iterator i = mi_lista.begin(); i != mi_lista.end();i++) // Recorremos toda la lista

    {
        s += *i;// sumamos los elementos de la lista
}
  return s;

}
//Devuelve true si los elementos de la lista son palindromos, de lo contrario devuelve false
bool esPalindroma(list<char>mi_lista)
{
    for(int i=0; i < mi_lista.size(); i++) //con este ciclo recorremos todos los elementos de la lista la lista
    {
        if(mi_lista.front() == mi_lista.back()) //si el primer elemento de la lista es igual al ultimo devolvemos true
        {
            return true; //
        }
        mi_lista.pop_front();
        mi_lista.pop_back();
    }
    return false; //si no retornamos false
}


int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
