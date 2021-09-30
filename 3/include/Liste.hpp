#ifndef LISTE_HPP
#define LISTE_HPP

#include "Dugum.hpp"
#include <fstream>
#include <string>
#include <cstring>

class Liste{
	public:
	Liste();
	~Liste();
	
	Dugum* head;
	Dugum* son;
	Liste* listeOlustur(string);
	Dugum d;
	void listeYazdir(Liste*);
	string sayi1;
	string sayi2;

	void txtCek();
	
	void listeleriOlustur();
	
	Liste* liste1;
	Liste* liste2;


	
	void listeTersCevir(Liste*);
	void dugumleriYerDegistir(Dugum*,Dugum*);
	void islem();
	
	void birlestir();

	// BUYUK SAYILARDA CALISMIYOR
	//double cevap1,cevap2;
	
	
	
};


#endif
