	#pragma once
#ifndef ISLEMCI_H
#define ISLEMCI_H
#include "IslemKuyrugu.h"


class Islemci {
public:
	Islemci();
	~Islemci();
	void yazdir();
	void calistir();
	void yeniIslemAl();
	void elemanEkle();
private:
	Islem* islem=NULL;
	OncelikliKuyruk* i=new OncelikliKuyruk();
	OncelikliKuyruk* temp;
	bool kontrol = false;
};


#endif