#include "Liste.hpp"






Liste::Liste(){
	head=0;
	son=0;
}

Liste::~Liste()
{
	Dugum* temp = liste1->head;
	Dugum* temp2 = liste2->head;

	while(temp!=0 && temp2!=0)
	{
		liste1->head = liste1->head->pSonraki;
		liste2->head = liste2->head->pSonraki;
		
		delete temp;
		delete temp2;
		temp = liste1->head;
		temp2 = liste2->head;
		


	}

}

Liste* Liste::listeOlustur(string x){
	
	Liste* yeniListe = new Liste();
	
	
	int k=2;
	for(int i = 0 ; i<x.length()/3 ; i++)
	{
		int j=i*3;
		string temp;
		int tempsayi;
		
		
		for(;j<=k;j++)
		{
			temp+=x[j];	
		}
		
		if(temp[0] == '0')
		{
			temp[0] = 1;
		}
		
		tempsayi = stoi(temp);
		temp="";
		k+=3;
		Dugum* yeniDugum = d.dugumOlustur(tempsayi,0,0);
		
		
		
		
		
		if(yeniListe->head==0)
		{
			yeniListe->head = yeniDugum;
			yeniListe->son = yeniListe->head;

			
		}
		else{
			yeniDugum->pOnceki = yeniListe->son;
			yeniDugum->pSonraki = 0;
			yeniListe->son->pSonraki = yeniDugum;
			yeniListe->son = yeniDugum;



		}
		

		
		
	}
	
	return yeniListe;
	
	
	
	
}

void Liste::listeTersCevir(Liste* liste)
{
	Dugum* temp = liste->head;

	while(temp!=liste->son)
	{
		Dugum* geciciSonraki = temp->pSonraki;
		temp->pSonraki = temp->pOnceki;
		temp->pOnceki = geciciSonraki;

		temp=geciciSonraki;
		

	}
	Dugum* geciciSonraki = temp->pSonraki;
	temp->pSonraki = temp->pOnceki;
	temp->pOnceki = geciciSonraki;

	Dugum* gecicihead = liste->head;
	liste->head = liste->son;
	liste->son = gecicihead;


}



void Liste::dugumleriYerDegistir(Dugum* dugum1,Dugum* dugum2)
{
	Dugum* tempSonraki = dugum1->pSonraki;
	Dugum* tempOnceki = dugum2->pOnceki;
	
	if(dugum1 == liste1->head && dugum2 == liste2->head)
	{
		dugum1->pSonraki->pOnceki = dugum2;
		dugum2->pSonraki->pOnceki = dugum1;
		liste1->head = dugum2;
		liste2->head = dugum1;
		
		
	}
	else if(dugum1 == liste1->son && dugum2 == liste2->son)
	{
		dugum1->pOnceki->pSonraki = dugum2;
		dugum2->pOnceki->pSonraki = dugum1;
		liste1->son= dugum2;
		liste2->son = dugum1;
	
	}
	else
	{
		dugum1->pSonraki->pOnceki = dugum2;
		dugum1->pOnceki->pSonraki = dugum2;
		
		dugum2->pSonraki->pOnceki = dugum1;
		dugum2->pOnceki->pSonraki = dugum1;
	
		
	}
	
	

	dugum1->pSonraki = dugum2->pSonraki;
	dugum1->pOnceki = dugum2->pOnceki;
	dugum2->pOnceki = tempOnceki;
	dugum2->pSonraki = tempSonraki;



}





void Liste::txtCek()
{
	string yazi;
	fstream dosyaOku ;
	dosyaOku.open("sayilar.txt",ios::out|ios::in|ios::app);
	
	
	dosyaOku >> yazi;
	
	
	int i = 0;
	
	
	for(; yazi[i]!= '#' ; i++)
	{
		
		sayi1+= yazi[i];
		
	}
	
	
	i++;
	

	
	
	

	for(;i<yazi.length();i++)
	{
		sayi2+=yazi[i];
		
		
	}
	
	
	

}

void Liste::islem()
{
	


	Dugum* liste1Temp = liste1->head;
	Dugum* liste2Temp = liste2->head;
	Dugum* gecici;

	int sayac = 0;

	while(liste1Temp != 0 && liste2Temp != 0)
	{

		if(liste1Temp->veri > liste2Temp->veri)
		{
			
			listeTersCevir(liste1);
			Dugum* gecici2 = liste1->head;
			for(int i = 0 ; i<sayac;i++)
			{
				gecici2 = gecici2->pSonraki;

			}

			liste1Temp = gecici2;

		}
		else if(liste2Temp->veri > liste1Temp->veri)
		{
			dugumleriYerDegistir(liste1Temp,liste2Temp);
			Dugum* gecici2 = liste1->head;
			Dugum* gecici3 = liste2->head;
			for(int i=0;i<sayac;i++)
			{
				gecici2 = gecici2->pSonraki;
				gecici3 = gecici3->pSonraki;
			}
			liste1Temp = gecici2;
			liste2Temp = gecici3;


		}
		else{
			
		}
		
		liste1Temp = liste1Temp->pSonraki;
		liste2Temp= liste2Temp->pSonraki;
		sayac++;



	}
	


}



void Liste::listeleriOlustur()
{
	liste1 = listeOlustur(sayi1);
	liste2 = listeOlustur(sayi2);
}

void Liste::birlestir()
{
Dugum* temp1 = liste1->head;
	Dugum* temp2 = liste2->head;
	sayi1="";
	sayi2="";

	while(temp1!=NULL && temp2 != NULL)
	{
		sayi1+= to_string(temp1->veri);
		sayi2+= to_string(temp2->veri);
		temp1 = temp1->pSonraki;
		temp2 = temp2->pSonraki;
		

	}

	cout << "Birinci Sayi : " << sayi1 << endl;
	cout << "Ikinci Sayi  : " << sayi2 << endl;


}







void Liste::listeYazdir(Liste* liste)
{

	Dugum* temp = liste->head;

	while(temp->pSonraki!=0)
	{
		cout<<temp->veri << " ";
		temp = temp->pSonraki;
	}
	cout<< temp->veri  << endl;

}
