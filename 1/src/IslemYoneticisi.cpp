#include "IslemYoneticisi.h"

void IslemYoneticisi::baslat()
{
	yazdir();
	int secim;
	
	while (true)
	{
		cin >> secim;
		if (secim == 1)
		{
			i.yeniIslemAl();
		}
		else if (secim == 2)
		{
			i.calistir();
		}
		else if (secim == 3)
		{
			i.elemanEkle();
		}
		else if (secim == 4)
		{
			exit(0);
		}
		system("Cls");
		yazdir();
	}
	
	


}

void IslemYoneticisi::yazdir()
{
	system("Cls");
	i.yazdir();
	cout << endl;
	cout << "1.Yeni islem al" << endl;
	cout << "2.Islem Calistir"<<endl;
	cout << "3.Islem Ekle"<<endl;
	cout << "4.Cikis" << endl;
}
