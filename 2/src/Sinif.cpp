#include "Sinif.hpp"

Sinif::Sinif(){
    
    for(int i=0;i<=sinif.length;i++)

    { 
      
        
        dosyaOku.getline(dosyaOku,okul[i]);
        string kelime = okul[i];
        okul[i]=NULL;
        for(int j=0;j<=kelime.length;j++)
        {
            if(kelime[j]==' ')
            continue;
            else
            okul[i]+=kelime[j];
        }
        sinifEkle();
    }
   
}

void Sinif::sinifEkle()
{
for(int i=0;i<okul.length;i++)
sinif[i]->sinifi=okul[i];
}

Sinif::~Sinif()
{
    delete sinif[];
}
