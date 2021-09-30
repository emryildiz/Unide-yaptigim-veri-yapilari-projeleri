#include "Ogrenci.hpp"

Ogrenci::Ogrenci()

{
    
}
Ogrenci::~Ogrenci()

{
    delete ogrenci[];
    dosyaOku.close();
}


void Ogrenci::ogrenciEkle()
{
    for(int i=0;i<okul.length;i++)
    {
        for(int j=0;j<okul[i].length;i++)
        {
            if(okul[i][j]=='1')
            {
                ogrenci[i]->
            }
        }
    }
}
