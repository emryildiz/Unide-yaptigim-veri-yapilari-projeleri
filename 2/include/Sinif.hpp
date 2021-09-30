#ifndef SINIF_HPP
#define SINIF_HPP
#include "Okul.hpp"
class Sinif 
{
public:
Sinif();
~Sinif();

Okul* sinif[4]=new Okul();
char ogrencisi;
string okul[4];
private:
void sinifEkle();



};


#endif