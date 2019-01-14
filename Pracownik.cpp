//Hubert Sadecki Maciej Pokorski
#include "Pracownik.h"
#include <iostream>
using namespace std;

Pracownik::Pracownik(void)
{
	this->m_pNastepny = 0;
	this->m_pPoprzedni = 0;
}

Pracownik::~Pracownik(void)
{
}

const char* Pracownik::Imie() const
{
	return this->m_Imie.Zwroc();
}

const char* Pracownik::Nazwisko() const
{
	return this->m_Nazwisko.Zwroc();
}

void Pracownik::Imie(const char* nowe_imie)
{
	this->m_Imie.Ustaw(nowe_imie);
}

void Pracownik::Nazwisko(const char* nowe_nazwisko)
{
	this->m_Nazwisko.Ustaw(nowe_nazwisko);
}

void Pracownik::DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok)
{
	this->m_DataUrodzenia.Ustaw(nowy_dzien, nowy_miesiac, nowy_rok);
}

void Pracownik::Wypisz() const
{
	this->m_Imie.Wypisz();
	cout << " ";
	this->m_Nazwisko.Wypisz();
	cout << " ";
	this->m_DataUrodzenia.Wypisz();
}

void Pracownik::Wpisz()
{
	cout << "Podaj imie: ";
	this->m_Imie.Wpisz();
	cout << "Podaj naziwsko: ";
	this->m_Nazwisko.Wpisz();
	this->m_DataUrodzenia.Wpisz();
}

int Pracownik::SprawdzImie(const char* por_imie) const
{
	return this->m_Imie.SprawdzNapis(por_imie);
}

int Pracownik::SprawdzNazwisko(const char* por_nazwisko) const
{
	return this->m_Nazwisko.SprawdzNapis(por_nazwisko);
}

int Pracownik::Porownaj(const Pracownik& wzor) const
{
	int i,d;
	int n = this->m_Nazwisko.SprawdzNapis(wzor.m_Nazwisko.Zwroc());

	if ( n != 0)
		return n;
	else if ( (i = this->m_Imie.SprawdzNapis(wzor.m_Imie.Zwroc())) != 0)
		return i;
	else if ((d = this->m_DataUrodzenia.Porownaj(wzor.m_DataUrodzenia))!= 0)
		return d;
	else
		return 0;
}