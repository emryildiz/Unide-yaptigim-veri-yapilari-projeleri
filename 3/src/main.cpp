#include <iostream>
#include "Liste.hpp"


int main(int argc, char** argv) {
	Liste* a = new Liste();
	a->txtCek();
	a->listeleriOlustur();
	

	cout << "Listelerin ilk hali : " << endl;

	cout << "Liste 1 : " ; 
	a->listeYazdir(a->liste1);
	cout << "Liste 2 : "; 
	a->listeYazdir(a->liste2);
	cout << endl << endl;


	
	
	a->islem();
	


	cout << "Islem Sonrasi: " << endl;
	a->birlestir();

	delete a;
	
	
}
