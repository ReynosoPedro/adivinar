#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;
bool buscar_guardados(int *vec,int prueba){ // test para revisar que la pc no de numeros repetidos

    bool result=false;
    for(int y=0; y<11; y++)
        {

            if (vec[y]==prueba)
            {

                return true;
            }
        }
        return false;

}
bool validar_condiciones(int numero,int cota_inferior){//creada por boludo


        if (numero<cota_inferior){
            return true;
        }else{
        return false;}
    }

void guardar_numero(int numero,int contador,int*vec) //almacena las opciones incorrectas para no repetirlas
{
    vec[contador]=numero;
}

int crear_validar(int *vec,int *cota_superior,int *cota_inferior) //crea la siguiente numeracion y la valida
{

    int numero;
    bool check=true;
    while(check==true)
    {

        numero=rand()%*cota_superior;
        if((validar_condiciones(numero,*cota_inferior)==true)&&(validar_condiciones(numero,*cota_inferior)==true)){
            check=true;
        }
        else{
            check=false;
        }

}
return numero;
}

bool test(int numero_adivinado,int *cota_superior,int *cota_inferior) //testea con el usuario si adivino o no la respuesta y realiza las moficaciones pertinentes a las cotas
{
    char respuesta,pista;
    bool correcto=true;
    cout<<"Es "<<numero_adivinado<<" tu numero?  "<<"<S/N>"<<endl;
    cin>>respuesta;

    if (respuesta=='S'||respuesta=='s')
    {
        cout<<"GG easy"<<endl;
        correcto=false;
    }
    else
    {

        cout<<"mmmm .. tu numero es menor o mayor?  "<<"<+/->"<<endl;
        cin>>pista;
        if (pista=='+')
        {
            *cota_inferior=numero_adivinado;

        }
        else
        {
            *cota_superior=numero_adivinado;

        }

    }
    return correcto;
}


#endif // FUNCIONES_H_INCLUDED
