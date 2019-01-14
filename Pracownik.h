//Hubert Sadecki Maciej Pokorski
#pragma once
#include "Napis.h"
#include "Data.h"

class Pracownik
{
public:
	Pracownik(void);
	~Pracownik(void);
	const char* Imie() const;
	const char* Nazwisko() const;
	void Imie(const char* nowe_imie);
	void Nazwisko(const char* nowe_nazwisko);
	void DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok);
	void Wypisz() const;
	void Wpisz();
	int SprawdzImie(const char* por_imie) const;
	int SprawdzNazwisko(const char* por_nazwisko) const;
	Pracownik *m_pNastepny;
	Pracownik *m_pPoprzedni;
	int Porownaj(const Pracownik& wzor) const;
private:
	Napis m_Imie;
	Napis m_Nazwisko;
	Data m_DataUrodzenia;
};
