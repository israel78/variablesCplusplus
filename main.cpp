#include "variables.h"
#include "estructurasControl.h"
#define dividir(a,b) a/b

using namespace std;


int sumar(int a , int b){
    return (a)+(b);
}
int sumarConParametrosXDefecto(int a = 6, int b = 8){
    return (a)+(b);
}
class cuentas{
public:
    int sumaDos(int arg);
    int sumaTres(int arg);
private:
    int resultado;
protected:

};

int cuentas::sumaDos(int arg) {
   return resultado = arg+2;
};
int cuentas::sumaTres(int arg){
    return resultado = arg+3;
};
int main() {
   //variables::main();
   // estructurasControl::main();
   typedef unsigned int sinNegativos;
    cout << dividir(6,2) << endl;
    cout << sumar(6,2) << endl;
    cout << sumarConParametrosXDefecto() << endl;
    struct Estructura{
        int myNum;
        string myString;
        Estructura(){
            myNum = 1;
            myString = "Adios mundo";
        }
        string verDir(){
            return myString;
        }

    } myStructure,myStructure2,myStructure3;


// Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    myStructure2 = myStructure;

// Print members of myStructure
    cout << myStructure2.myNum << "\n";
    cout << myStructure2.myString << "\n";

    cout << myStructure3.myNum << "\n";
    cout << myStructure3.verDir() << "\n";

    sinNegativos  a = 10;
    cout <<  a << "\n";

    cuentas cuenta;
    cout << cuenta.sumaDos(2) << "\n";
    cout << cuenta.sumaTres(2) << "\n";
    return 0;
}
