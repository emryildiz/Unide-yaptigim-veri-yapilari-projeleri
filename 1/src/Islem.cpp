#include "Islem.h"

Islem::Islem()
{
	
	if (kimlikNo==0)
	kimlikNo = rand() % 100;
	else
	{
		kimlikNo++;
	}
	
	Sleep(1);
	kalanIslemSuresi = rand() % 11 + 5;
	oncelik = rand() % 10;
	kimlikNumara = kimlikNo/2;

}

int Islem::getOncelik()
{
	return oncelik;
}

void Islem::setOncelik(int x)
{
	if (x < 0);
	else if (x > 9);
	else
		oncelik = x;
}


void Islem::yazdir()
{
	cout << kimlikNumara << "\t";
	cout << kalanIslemSuresi << "\t";
	cout << oncelik << endl;
}

