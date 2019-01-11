#pragma once
//#include "stdafx.h"
#include "pch.h"
#include "Model.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class automobil {
private:
	string denumire;
    double pret;
    int nrOrd;
public:
	automobil() {};
	automobil(string ch) {
		denumire = ch;
		pret = 0;
		incrNrord(denumire, nrOrd);
	};
	automobil(string ch, double p, int nrOrd)
	{
		denumire = ch;
		pret = p;
		incrNrord(denumire, nrOrd);
	};
	automobil(const automobil& a)
	{
		denumire = a.denumire;
		pret = a.pret;
		incrNrord(denumire, nrOrd);
	};

	//virtual ~automobil();

	automobil &operator = (const automobil&a)
	{
		if (this != &a)
		{
			denumire = a.denumire;
			pret = a.pret;
			nrOrd = a.nrOrd;
		}
		return *this;
	};
	friend istream &operator >>(istream&in, automobil&a)
	{
		in >> a.denumire >> a.pret >> a.nrOrd;
		return in;
	};
	friend ostream &operator <<(ostream&out, automobil&a)
	{
		out << a.denumire << a.pret << a.nrOrd;
		return out;
	};

	string getDenumire()
	{
		return denumire;
	};
	void setDenumire(string denumire)
	{
		this->denumire = denumire;
	};
	double getPret()
	{
		return pret;
	};
	void setPret(double pret)
	{
		this->pret = pret;
	};
	int getNrord()
	{
		return nrOrd;
	};
	void setNrord(int nrOrd)
	{
		this->nrOrd = nrOrd;
	};
	
	void incrNrord(string denumire, int &nrOrd)
	{
		nrOrd++;
	}
};