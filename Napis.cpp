//Hubert Sadecki Maciej Pokorski
#include "Napis.h"
#include <string>
#include <iostream>
using namespace std;


Napis::Napis(void)
{
}

Napis::~Napis(void)
{
}

const char* Napis::Zwroc() const
{
	return this->m_pszNapis;
}

void Napis::Ustaw(const char* nowy_napis)
{
	strncpy(this->m_pszNapis,nowy_napis,40);
}

void Napis::Wypisz() const
{
	cout << this->Zwroc();
}

void Napis::Wpisz()
{
	cin >> this->m_pszNapis;
}

int Napis::SprawdzNapis(const char* por_napis) const
{
	return strcmp(this->m_pszNapis, por_napis);
}