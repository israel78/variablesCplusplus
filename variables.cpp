//
// Created by israe on 13/02/2023.
//

#include "variables.h"
   void variables:: main(){
            int num = 34;
            int num2 = 5;
            char letra = 'd';
            char *cadena = "codifofacilito";
            int suma = num + num2;
            bool variable = false;
            float num3 = 2.56789;
//en la consola se redondea pero el valor se mantiene en memo5ria
            double num4 = 12.45898798070987089709798689965789;
            //constantes
            const int num5 = 12;
            cout << suma << "\n  \n" << cadena << endl;
//    a2 la hora de imprimir, las variables bool son 0 o 1
            cout << suma << "\n  \n" << variable << endl;

            cout << num3 << endl;

            cout << num4 << endl;
//Aritmeticos

// ++	Addition
//-	Subtraction
//*	Multiplication
// \/Division
//%	Modulo Operation (Remainder after division)


            int a, b;
            a = 7;
            b = 2;

// printing the sum of a2 and b2
            cout << "a2 + b2 = " << (a + b) << endl;

// printing the difference of a2 and b2
            cout << "a2 - b2 = " << (a - b) << endl;

// printing the product of a2 and b2
            cout << "a2 * b2 = " << (a * b) << endl;

// printing the division of a2 by b2
            cout << "a2 / b2 = " << (a / b) << endl;

// printing the modulo of a2 by b2
            cout << "a2 % b2 = " << (a % b) << endl;

//asignacion
            int a2, b2;

// 2 is assigned to a2
            a = 2;

// 7 is assigned to b2
            b = 7;

            cout << "a2 = " << a << endl;
            cout << "b2 = " << b << endl;
            cout << "\nAfter a2 += b2;" << endl;

// assigning the sum of a2 and b2 to a2
            a += b;  // a2 = a2 +b2
            cout << "a2 = " << a << endl;

//operadores comparación
            a = 3;
            b = 5;
            bool result;

            result = (a == b);   // false
            cout << "3 == 5 is " << result << endl;

            result = (a != b);  // true
            cout << "3 != 5 is " << result << endl;

            result = a > b;   // false
            cout << "3 > 5 is " << result << endl;

            result = a < b;   // true
            cout << "3 < 5 is " << result << endl;

            result = a >= b;  // false
            cout << "3 >= 5 is " << result << endl;

            result = a <= b;  // true
            cout << "3 <= 5 is " << result << endl;

//operadores logicos


            result = (3 != 5) && (3 < 5);     // true
            cout << "(3 != 5) && (3 < 5) is " << result << endl;

            result = (3 == 5) && (3 < 5);    // false
            cout << "(3 == 5) && (3 < 5) is " << result << endl;

            result = (3 == 5) && (3 > 5);    // false
            cout << "(3 == 5) && (3 > 5) is " << result << endl;

            result = (3 != 5) || (3 < 5);    // true
            cout << "(3 != 5) || (3 < 5) is " << result << endl;

            result = (3 != 5) || (3 > 5);    // true
            cout << "(3 != 5) || (3 > 5) is " << result << endl;

            result = (3 == 5) || (3 > 5);    // false
            cout << "(3 == 5) || (3 > 5) is " << result << endl;

            result = !(5 == 2);    // true
            cout << "!(5 == 2) is " << result << endl;

            result = !(5 == 5);    // false
            cout << "!(5 == 5) is " << result << endl;

            getch();
    };

