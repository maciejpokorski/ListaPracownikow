//Hubert Sadecki Maciej Pokorski
#pragma once

class Data
{
public:
	Data(void);
	~Data(void);
	void Ustaw(int d, int m, int r);
private:
	int m_nDzien;
	int m_nMiesiac;
	int m_nRok;
public:
	int Dzien(void) const;
	int Miesiac(void) const;
	int Rok(void) const;
	void Wypisz(void) const;
	void Wpisz(void);
	void Koryguj(void);
	int Porownaj(const Data &wzor) const;
};

