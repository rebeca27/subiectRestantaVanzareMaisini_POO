#pragma once
//#include "stdafx.h"
#include "pch.h"
#include "automobil.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tesla : public automobil {
private:
	int timpLivrare, nrLocuri;
	string model;
public:
	Tesla() {};
	Tesla(int timpLivrare, int nrLocuri, string model)
	{
		this->timpLivrare = timpLivrare; 
		this->nrLocuri=nrLocuri;
		this->model=model;
	}
	~Tesla() {};
	int gettimpLivrare() {
		return  timpLivrare;
	};
	void settimpLivrare(int timpLivrare) {
		this->timpLivrare =  timpLivrare;
	};
	int getnrLocuri()
	{
		return nrLocuri;
	};
	void setnrLocuri(int nrLocuri) {
		this->nrLocuri = nrLocuri;
	};
	string getmodel() {
		return model;
	};
	void setmodel(string model) {
		this->model = model;
	};
};

class TeslaX : public Tesla {
private:
	int dataPrecomanda;
	double pret;

public:
	TeslaX() {};
	TeslaX(int dataPrecomanda, double pret)
	{
		this->dataPrecomanda = dataPrecomanda;
		this->pret = pret;
	};
	~TeslaX() {};

	void vavans(double &pret)
	{
		pret -= 1000;
		cout << "\navansul a fost dat. pretul ramas este de: " << pret;
	};
	int getdataPrecomanda() {
		return dataPrecomanda;
	};
	double getpret() {
		return pret;
	};
	void setdataPrecomanda() {
		this->dataPrecomanda = dataPrecomanda;
	}
	void setpret() {
		this->pret = pret;
	};
};

class TeslaS : public Tesla {

private:

public:
	TeslaS() { cout << "exista posibilitate de tractiune pe spate"; };
	~TeslaS();
};

class Tesla3 : public Tesla {

private:
	double pret;
public:
	Tesla3() {};
	~Tesla3() {};
	void vcutieAutomata(double pret)
	{
		pret +=  8000;
		cout << "\npretul pentru Tesla3 este: " << pret;
	};
};
