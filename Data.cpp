//Hubert Sadecki Maciej Pokorski
#include "Data.h"
#include <iostream>
using  namespace std;

Data::Data(void)
{
	m_nDzien = 1;
	m_nMiesiac = 1;
	m_nRok = 2000;
}

Data::~Data(void)
{
}

void Data::Ustaw(int d, int m, int r)
{
	this->m_nDzien = d;
	this->m_nMiesiac = m;
	this->m_nRok = r;
	this->Koryguj();
}

int Data::Dzien(void) const
{
	return m_nDzien;
}

int Data::Miesiac(void) const
{
	return m_nMiesiac;
}

int Data::Rok(void) const
{
	return m_nRok;
}

void Data::Wypisz(void) const
{
	cout << this->Dzien() << "-" << this->Miesiac() << "-" << this->Rok() << endl;
}

void Data::Wpisz(void)
{
	cout <<"Podaj dzien: ";
	cin >> this->m_nDzien;
	cout<<"Podaj miesiac: ";
	cin >> this->m_nMiesiac;
	cout << "Podaj rok: ";
	cin >> this->m_nRok;
	this->Koryguj();
}

void Data::Koryguj(void)
{
	if(this->m_nMiesiac >12)
		this->m_nMiesiac = 12;
	else if(this->m_nMiesiac <1)
		this->m_nMiesiac = 1;

	switch(m_nMiesiac)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(this->m_nDzien>31)
				this->m_nDzien = 31;
			else if(this->m_nDzien<1)
				this->m_nDzien = 1;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(this->m_nDzien>30)
				this->m_nDzien = 30;
			else if(this->m_nDzien<1)
				this->m_nDzien = 1;
			break;
		case 2:
			if(this->m_nDzien>28 && this->m_nRok % 4 != 0)
				this->m_nDzien = 28;
			else if(this->m_nDzien>29 && this->m_nRok % 4 == 0)
				this->m_nDzien = 29;
			else if(this->m_nDzien<1)
				this->m_nDzien = 1;
			break;
	}
}

int Data::Porownaj(const Data &wzor) const
{
	if(this->Dzien() == wzor.Dzien() && this->Miesiac() == wzor.Miesiac() && this->Rok() == wzor.Rok())
		return 0;
	else if(this->Rok() < wzor.Rok() || (this->Rok() == wzor.Rok() && this->Miesiac() < wzor.Miesiac()) || (this->Miesiac() == wzor.Miesiac() && this->Rok() == wzor.Rok() && this->Dzien() < wzor.Dzien()))
		return -1;
	else 
		return 1;
}
