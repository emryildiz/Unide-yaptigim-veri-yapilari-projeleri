#include "Islemci.h"

Islemci::Islemci()
{
	
	i->kuyrukOlustur();
}

Islemci::~Islemci()
{
	OncelikliKuyruk* sil = i->head;
	while (sil != NULL)
	{
		sil = sil->pSonraki;
		delete i->head;
		i->head = sil;
	}
    delete i;
}

void Islemci::calistir()
{
    if(islem!=NULL)
    {
        if(islem->kalanIslemSuresi>5)
        {
            islem->kalanIslemSuresi -= 5;
        }
        
        else if (islem->kalanIslemSuresi == 0)
        {
            i->elemanSayisi--;
            kontrol = false;
            delete islem;
            islem=NULL;
        
        }
        else if(islem->kalanIslemSuresi<=5)
        {
            islem->kalanIslemSuresi = 0;
            islem->setOncelik(rand() % 10);
        }
    }
	else
    return;
	
	
}

void Islemci::yazdir()
{
	
	i->yazdir();
	cout << endl;
	cout << endl;
	if (kontrol)
	{
		cout << " __________________ " << endl;	
		cout << "|                  |"<<endl ;
		cout << "|\t******\t   |" << endl;
		cout << "|\t* " << islem->kimlikNumara << " *\t   |" << endl;
		cout << "|\t******\t   |" << endl;
		cout << "|\t*  " << islem->getOncelik() << " *\t   |" << endl;
		cout << "|\t******\t   |" << endl;
		if (islem->kalanIslemSuresi > 10)
			cout << "|\t* " << islem->kalanIslemSuresi << " *\t   |" << endl;
		else
			cout << "|\t*  " << islem->kalanIslemSuresi << " *\t   |" << endl;
		cout << "|\t******\t   |"<<endl;
		cout << "|__________________|";
	}
	else
	{
		cout << " __________________ " << endl;
		cout << "|                  |" << endl;
		cout << "|\t******\t   |" << endl;
		cout << "|\t*   " <<   " *\t   |" << endl;
		cout << "|\t******     |" << endl;
		cout << "|\t*   " <<   " *\t   |" << endl;
		cout << "|\t******\t   |" << endl;
		cout << "|\t*   " <<  " *\t   |" << endl;
		cout << "|\t******     |" << endl;
		cout << "|__________________|";
		

	}
}

void Islemci::yeniIslemAl()
{
    if(i->elemanSayisi>0)
    {
        if (islem == NULL)
        {
            islem = i->head->islem;
            temp = i->head;
            i->head = i->head->pSonraki;
            i->head->pOnceki = NULL;
            
        }
        else
        {
            
            i->islemEkle(temp);
            islem = i->head->islem;
            temp = i->head;
            i->head = i->head->pSonraki;
            i->head->pOnceki = NULL;
            
        }
        kontrol = true;
    }
	
	else
    return;
	
}

void Islemci::elemanEkle()
{
	if (i->elemanSayisi >= 10)
		return;
	else
		i->islemEkle(NULL);
}
