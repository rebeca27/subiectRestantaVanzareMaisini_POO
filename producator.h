#pragma once
//#include "stdafx.h"
#include "pch.h"
#include "automobil.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class producator {
private:
	vector<automobil> va;
	string nume;
	friend class automobil;
public:
	producator() {};
	~producator() {};
	producator(string ch) {
		nume = ch;
	};
	producator(const producator&p) {
		nume = p.nume;
	};
	
	producator &operator = (const producator&p) {
		if (this != &p)
		{
			nume = p.nume;
		}
		return *this;
	};
	friend istream &operator >> (istream&in, producator&p) {
		in >> p.nume;
		return in;
	};
	friend ostream &operator << (ostream&out, producator&p) {
		out << p.nume;
		return out;
	};

	string getNume() {
		return nume;
	};
	void setNume(string nume) {
		this->nume = nume;
	};

	void addMasina(const automobil &a) {
		va.push_back(a);
	}
	void printMasini() {
		for (int i = 0; i < va.size(); i++)
			cout << va[i].getDenumire();
	}
};
