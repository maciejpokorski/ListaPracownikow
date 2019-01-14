//Hubert Sadecki Maciej Pokorski
#include "Data.h"
#include "Napis.h"
#include "Pracownik.h"
#include "ListaZatrudnionych.h"
#include <iostream>
using namespace std;

int main()
{
Pracownik p,p2,p3;
p.Imie("Hubert");
p.Nazwisko("Sadecki");
p.DataUrodzenia(12,2,1994);
p2.Imie("Hubert");
p2.Nazwisko("Sadecki");
p2.DataUrodzenia(1,2,1994);
p3.Imie("Maciej");
p3.Nazwisko("Pokorski");
p3.DataUrodzenia(27,5,1994);


ListaZatrudnionych L;
L.Dodaj(p);
L.Dodaj(p2);
L.Dodaj(p3);
L.WypiszListeZatrudnionych();
}