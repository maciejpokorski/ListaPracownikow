//Hubert Sadecki Maciej Pokorski
#pragma once

class Napis
{
public:
	Napis(void);
	~Napis(void);
	const char* Zwroc() const;
	void Ustaw(const char* nowy_napis);
	void Wypisz() const;
	void Wpisz();
	int SprawdzNapis(const char* por_napis) const;
private:
	char m_pszNapis[40];
};
