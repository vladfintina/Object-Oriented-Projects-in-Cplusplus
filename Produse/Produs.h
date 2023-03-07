#pragma once
#include <string>
using namespace std;

class Produs
{

private:
	int id;
	string nume;
	string tip;
	double pret;

public:
	Produs(int id, string nume, string tip, double pret): id{id}, nume{nume}, tip{tip}, pret{pret} {}

	int get_id()
	{
		return this->id;
	}

	string get_nume()
	{
		return this->nume;

	}

	string get_tip()
	{
		return this->tip;
	}

	double get_pret()
	{
		return this->pret;
	}


	string toString()
	{
		return to_string(id) + "," + this->nume + "," + this->tip + "," + to_string(this->pret);

	}

};

