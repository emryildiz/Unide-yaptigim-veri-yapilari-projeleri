#include "IslemKuyrugu.h"
#include "Islem.h"
#include<iomanip>

OncelikliKuyruk::OncelikliKuyruk()
{
	pSonraki = NULL;
	pOnceki = NULL;
	head=NULL;
	
}

void OncelikliKuyruk::yazdir()
{
	
		OncelikliKuyruk* temp = head;
		while (temp != NULL)
		{
			cout << "******\t";

			temp = temp->pSonraki;
		}
		cout << endl;
		temp = head;
		while (temp != NULL)
		{
			cout << "* "<<temp->islem->kimlikNumara<<" *\t";

			temp = temp->pSonraki;
		}
		cout << endl;
		temp = head;
		while (temp != NULL)
		{
			cout << "******\t";

			temp = temp->pSonraki;
		}
		cout << endl;
		temp = head;
		while (temp != NULL)
		{
			cout << "*  " <<temp->islem->getOncelik()<< " *\t";

			temp = temp->pSonraki;
		}
		cout << endl;
		temp = head;
		while (temp != NULL)
		{
			cout << "******\t";

			temp = temp->pSonraki;
		}
		cout << endl;
		temp = head;
		while (temp != NULL)
		{
			if(temp->islem->kalanIslemSuresi>=10)
			cout << "* " << temp->islem->kalanIslemSuresi<< " *\t";
			else
		    cout << "*  " << temp->islem->kalanIslemSuresi << " *\t";

			temp = temp->pSonraki;
		}
		cout << endl;
		temp = head;
		while (temp != NULL)
		{
			cout << "******\t";

			temp = temp->pSonraki;
		}
		cout << endl;


	
	
}



void OncelikliKuyruk::islemEkle(OncelikliKuyruk* k1)
{
	OncelikliKuyruk* yeni;
	if (k1 == NULL)
	{
		yeni = new OncelikliKuyruk();
		yeni->islem = islemOlustur();
	}
		
	else
		 yeni = k1;

	
	if (head == NULL)
	{
		head = yeni;
		elemanSayisi++;
	}
	else
	{
		OncelikliKuyruk* temp = head;


		while (temp->pSonraki != NULL && temp->islem->getOncelik() >= yeni->islem->getOncelik())
			temp = temp->pSonraki;

		

		if (temp == head)
		{
			if (temp->islem->getOncelik() >= yeni->islem->getOncelik())
			{
				temp->pSonraki = yeni;
				yeni->pOnceki = temp;

			}
			else
			{
				temp->pOnceki = yeni;
				yeni->pSonraki = temp;
				head = yeni;

			}
		}
		else if (temp->pSonraki == NULL)
		{
			if (temp->islem->getOncelik() >= yeni->islem->getOncelik())
			{
				temp->pSonraki = yeni;
				yeni->pOnceki = temp;
				yeni->pSonraki = NULL;

			}
			else
			{
				OncelikliKuyruk* pTemp = temp->pOnceki;
				temp->pOnceki = yeni;
				yeni->pSonraki = temp;
				yeni->pOnceki = pTemp;
				pTemp->pSonraki = yeni;

			}

		}
		else
		{



			if (temp->pSonraki == NULL)
			{
				temp->pSonraki = yeni;
				yeni->pOnceki = temp;

			}
			else
			{
				OncelikliKuyruk* pTemp = temp->pOnceki;
				temp->pOnceki = yeni;
				pTemp->pSonraki = yeni;
				yeni->pOnceki = pTemp;
				yeni->pSonraki = temp;
			}

		}




		elemanSayisi++;

	}
}

Islem* OncelikliKuyruk::islemOlustur()
{
	Islem* yeni = new Islem();
	return yeni;

}

void OncelikliKuyruk::kuyrukOlustur()
{
	for (int i = 0;i <=9;i++)
	{
		islemEkle(NULL);
	}

}


