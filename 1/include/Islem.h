#ifndef ISLEM_H
#define ISLEM_H
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
static int kimlikNo;

class Islem {

	public:
	Islem();
	int getOncelik();
	void setOncelik(int x);
	void yazdir();
	int kimlikNumara;
	int kalanIslemSuresi = 0;
private:
	int  oncelik;
	static int asd;

	



};





#endif