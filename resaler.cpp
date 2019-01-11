//#include "stdafx.h"
#include "pch.h"
#include "automobil.h"
#include "producator.h"
#include "tesla.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{	
	automobil a("dacia logan",2700, 1);
	string denumire = a.getDenumire();
	double pret = a.getPret();

	//cout << denumire<<"\n "<<pret;

	producator b;
	b.addMasina(a);
	b.printMasini();
	Tesla t;
	t.setDenumire("Tesla");
	cout <<"\n"<< t.getDenumire();
	TeslaX x;
	x.vavans(pret);
	Tesla3 trei;
	trei.vcutieAutomata(pret);
	x.setmodel("Tesla3");
	cout <<"\n" << x.getmodel();
	automobil at("Tesla");
	cout << "\n----------------------------------------------------------------------\n\n\n";
	Tesla ts;
	if (at.getDenumire() == "Tesla") {
		
		cout << "modelul tesla dorit este: TeslaX, Tesla3 sau TeslaS?\n";
		string str;
		cin >> str;
		ts.setmodel(str);

		if (ts.getmodel()=="TeslaX") 
		{
			int nl;
			int tl;
			cout << "introduceti timpul de livrare:\n";
			cin >> tl;

			cout << "introduceti numarul de locuri(5,6 sau 7):\n";
			cin >> nl;

			if (nl != 6 && nl != 5 && nl != 7)
			{
				cout << "numarul de locuri a fost introdus gresit";
				return -1;
							}
			else ts.setnrLocuri(nl);
			if (tl>12)
			{
				cout << "timpul de livrare maxim depasit";
				return -1;
							}
			else ts.settimpLivrare(tl);
			
		}
		else if (ts.getmodel() == "TeslaS")
		{
			int tl;
			int nl;
			string da;
			cout << "timpul de livrare a fost mai mare de 1 luna?";
			cin >> da;
			if (da=="da")
			{
				cout << "timpul de livrare maxim depasit";
				return -1;
			}
			//else ts.settimpLivrare(tl);
			//...verificare in cate saptamani a venit masina
			 //ts.setnrLocuri(nl);
			 ts.setnrLocuri(7);

		}
		else if (ts.getmodel() == "Tesla3")
		{
			int tl;
			int nl;
			cout << "introduceti timpul de livrare:\n";
			cin >> tl;

			if(tl>18)
			{
				return -1;
				cout << "timpul de livrare maxim depasit";

			}
			else
				ts.settimpLivrare(tl);
				//...verificare in cate luni a venit masina
				 //ts.setnrLocuri(nl);
			ts.setnrLocuri(5);

		}
		cout << ts.getnrLocuri() << " , " << ts.gettimpLivrare();
	}
	//cout << ts.getmodel();

	return 0;
}