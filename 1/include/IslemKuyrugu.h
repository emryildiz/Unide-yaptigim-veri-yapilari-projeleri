#ifndef ISLEMKUYRUGU_H
#define ISLEMKUYRUGU_H
#include "Islem.h"



class OncelikliKuyruk {     
public:
	
	OncelikliKuyruk();
	void    yazdir();
	OncelikliKuyruk* pSonraki;
	OncelikliKuyruk* head;
	OncelikliKuyruk* pOnceki;
	Islem* islem = new Islem();
	void kuyrukOlustur();
	void islemEkle(OncelikliKuyruk*);
	int elemanSayisi = 0;
private:
	Islem* islemOlustur();
	
	
};

#endif
