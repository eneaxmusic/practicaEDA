/* 
_798618_956306_956269

g++ -std=c++11 Principal.cpp anuncio.cpp fecha.cpp -o P3_EDA
*/

#include "anuncio.hpp"
#include "fecha.hpp"

#include<iostream>
using namespace std;

int main ()
{
    bool error;

    Fecha fpubl;
    Fecha ffin;

    crear(20, 2, 2001, fpubl, error);
    crear(20, 2, 2001, ffin, error);

    Anuncio e = crearAnuncio("7888", "Coche", "120000 km primer cliente", "MOTOR", fpubl, ffin);

    





    return 0;
}