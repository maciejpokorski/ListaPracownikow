//Hubert Sadecki Maciej Pokorski
#pragma once
#include "Pracownik.h"

class ListaZatrudnionych
{
public:
	ListaZatrudnionych(void);
	~ListaZatrudnionych(void);
	void Dodaj(const Pracownik& p);
	void Usun(const Pracownik& wzorzec);
	void WypiszListeZatrudnionych() const;
	const Pracownik* Szukaj(const char* nazwisko, const char* imie) const;
private:
	Pracownik* m_pPierwszy;
	Pracownik* m_pOstatni;
	int m_nLiczbaPracownikow;
};
