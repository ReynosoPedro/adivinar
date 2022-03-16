#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include "funciones.h"
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int numero_adivinado;
    int vec[11]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int cota_superior=11,cota_inferior=0,contador=0;
    bool correcto=true;

    cout<<"PIENSE UN NUMERO ENTRE 0 Y 10 PARA QUE EL PROGRAMA LO ADIVINE: "<<endl;
    while (correcto==true)
    {

        numero_adivinado=crear_validar(vec,&cota_superior,&cota_inferior);
        guardar_numero(numero_adivinado,contador,vec);
        contador++;
        correcto=test(numero_adivinado,&cota_superior,&cota_inferior);

    }

    return 0;
}
