//Hubert Sadecki Maciej Pokorski
#include "ListaZatrudnionych.h"
#include <iostream>
using namespace std;

ListaZatrudnionych::ListaZatrudnionych(void)
{
	m_pPierwszy = 0;
	m_pOstatni = 0;
	m_nLiczbaPracownikow = 0;
}

ListaZatrudnionych::~ListaZatrudnionych(void)
{
}

void ListaZatrudnionych::Dodaj(const Pracownik& p)
{
	if(this->m_pPierwszy == 0)
	{
		m_pOstatni = new Pracownik(p);
		m_pPierwszy = m_pOstatni;
		
	}else
	{
		m_pOstatni ->m_pNastepny = new Pracownik(p);
		m_pOstatni ->m_pNastepny ->m_pPoprzedni = m_pOstatni;
		m_pOstatni = m_pOstatni ->m_pNastepny;
		
	}
	
m_nLiczbaPracownikow++;
	
}

void ListaZatrudnionych::Usun(const Pracownik& wzorzec)
{

}

void ListaZatrudnionych::WypiszListeZatrudnionych() const
{
	Pracownik *p;
	p = this->m_pPierwszy;
	if(p!=0)
	{
		while(p != 0)
		{
			p->Wypisz();
			p = p->m_pNastepny;
		}
	}else
	{
		cout << "Lista pusta" <<endl;
	}
}

const Pracownik* ListaZatrudnionych::Szukaj(const char* nazwisko, const char* imie) const
{
	Pracownik *p;
	p = this->m_pPierwszy;
	while (p != 0)
	{
		if (p->SprawdzImie(imie) == 0 && p->SprawdzNazwisko(nazwisko) == 0)
			return p;
		p = p->m_pNastepny;
	}
	return 0;
}