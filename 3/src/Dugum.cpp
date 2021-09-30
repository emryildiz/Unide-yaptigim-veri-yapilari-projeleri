#include "Dugum.hpp"



Dugum::Dugum()
{
	pSonraki = 0;
	pOnceki = 0;
	
}

Dugum* Dugum::dugumOlustur(int x, Dugum* oncesi, Dugum* sonrasi)
{
    

	Dugum* yeni = new Dugum();
	yeni->veri = x;
	yeni->pOnceki = oncesi;
	yeni->pSonraki = sonrasi;
	
	return yeni;
}



