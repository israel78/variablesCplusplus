//
// Created by israe on 13/02/2023.
//

#ifndef VARIABLES_ESTRUCTURASCONTROL_H
#define VARIABLES_ESTRUCTURASCONTROL_H


#include <conio.h>
#include <iostream>
using namespace std;
class estructurasControl {
public:
    static void main(){
        char c[4] = {'h','o','l','a'};
     /*   int resultado = 0;
        cout << "Cuanto es 39+50? ";
        //cin entrada por consola
        cin >> resultado;
        if(resultado == 39+50)
        {
            cout << "Respuesta Correcta. Felicitaciones!\n";
        } else if (resultado < 39) {
            cout << "Es menor a 39 Respuesta incorrecta.\n";
        } else {
            cout << "Respuesta incorrecta.\n";
        }

        cout << "Ingrese la Opción a ejecutar: ";
        int opcion = 0;
        cin >> opcion;

        switch(opcion)
        {
            case 1: cout << "Usted ha seleccionado la opción 1";
                break;
            case 2: cout << "Usted ha seleccionado la opción 2";
                break;
            case 3: cout << "Usted ha seleccionado la opción 3";
                break;
            default: cout << "Usted ha ingresado una opción incorrecta";
        }

        int numero;
        cout <<  "Ingrese un numero ";
        cin >> numero;
        while(numero <= 100)
        {
            cout <<  "Ingrese un numero ";
            cin >> numero;
        }

        do
        {
            cout <<  "Ingrese un numero ";
            cin >> numero;
        }
        while(numero <= 100);*/


        for(int i=0;i<=4;i++)
        {
            cout << c[i];
        }

        getch();
    }
};


#endif //VARIABLES_ESTRUCTURASCONTROL_H
