// tema_examen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int r = 2;

class Clasa1 {
	int t;
protected:
	int x;
public:
	Clasa1() {
		r++;
		x = r + 1;
		t = r + 3;
		cout << "Clasa1_FP: x=" << x << " t=" << t << endl;
	}

	Clasa1(int x, int t = 3) {
		this->x = r + x;
		this->t = t + 5;
		cout << "Clasa1_CP: x= " << this->x << " t=" << t << endl;
	}

	Clasa1& operator+=(int a) {
		x += a;
		Afiseaza();
		return (*this);
	}

	virtual void Afiseaza() {
		cout << "x=" << x << "t=" << t << endl;
	}

	virtual ~Clasa1() {
		cout << "Gata_1" << endl;
	}
};

class Clasa2 : public Clasa1 {
protected:
	int y;
	int z;
public:
	Clasa2() {
		y = 1;
		z = 2;
		cout << "Clasa2_FP: x=" << x << " y=" << y << " z=" << this->z << endl;
	}

	Clasa2(int x, int y, int z = 1) {
		this->y = y + 1;
		this->z = z + 2;
		cout << "Clasa2_CP: x=" << x << " y=" << y << " z=" << this->z << endl;
	}

	virtual void Afiseaza() {
		cout << "x=" << x << " y=" << y << " z=" << z << endl;
	}

	~Clasa2() {
		cout << "Gata_2" << endl;
	}
};

class Clasa3 : public Clasa2 {
protected:
	int r;
public:
	Clasa3() {
		r = 6;
		cout << "Clasa3_FP: x=" << x << " y=" << y << " z=" << z << " r=" << r << endl;
	}

	Clasa3(int x, int y, int z = 1, int r = 6) :Clasa2(x, y, z + 1) {
		this->r = r;
		cout << "Clasa3_CP: x=" << x << " y=" << this->y << " z=" << z << " r=" << this->r << endl;
	}

	void Afiseaza() {
		cout << "x=" << x << " y=" << y << " z=" << z << " r=" << r << endl;
	}

	~Clasa3() {
		cout << "Gata_3" << endl;
	}
};

int main()
{
	/*1*/ Clasa1* x;
	/*2*/ Clasa2 y(4, 1), z[2];
	/*3*/ x = new Clasa3(1, 5, 2, 3);
	/*4*/ y += 3;
	/*5*/ *x += 8;
	/*6*/ x->Afiseaza();
	/*7*/ y.Afiseaza();
	/*8*/ z[0].Afiseaza();
	/*9*/ delete x;
}



