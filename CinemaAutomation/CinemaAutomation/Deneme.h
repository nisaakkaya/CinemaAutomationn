#include <iostream>
#ifndef DENEME_H
#define DENEME_H
using namespace std;
class Deneme
{
private:
    string vizyonFilmAdi;
public:
    void menu()
    {
        cout << "Vizyondaki Menu" << endl;
        cout << "****************" << endl;
        cout << "Film Adi: " << vizyonFilmAdi << endl;
    }
};
class GelecekFilmler
{
private:
    string gelecekFilmAdi;
   
public:
    void menu()
    {
        cout << "Gelecek Film Menu" << endl;
        cout << "******************" << endl;
        cout << "Film Adi: " << gelecekFilmAdi << endl;
        cin >> gelecekFilmAdi ;
    }
};

class AksiyonFilm : public Deneme
{
private:
    int aksiyonPuan;

public:
    void menu()
    {
        cout << "Aksiyon Film Menu" << endl;
        cout << "********************" << endl;
        cout << "1#HIZLI VE OFKELI \n2# JOHN WÝCK \n3# TRANSFORMERS  \n ";
        Deneme::menu();
    }
};

class KomediFilm : public Deneme
{
private:
    int komediPuan;

public:
    void menu()
    {
        cout << "Komedi Film Menu" << endl;
        cout << "*******************" << endl;
        cout << "1# FAMÝLY SWÝTCH \n2# DOLÝTTLE \n3# STUBER\n ";
        Deneme::menu();
    }
};

class BilimKurguFilm : public GelecekFilmler
{
private:
    int bilimKurguPuan;

public:
    void menu()
    {
        cout << "Bilim Kurgu Film Menu" << endl;
        cout << "*************************" << endl;
        cout << "1# AVATAR\n2# INDIANA JONES\n3# VENEOM \n ";
        GelecekFilmler::menu();
    }
};

class RomantikFilm : public GelecekFilmler
{
private:
    int romantikPuan;

public:
    void menu()
    {
        cout << "Romantik Film Menu" << endl;
        cout << "************************" << endl;
        cout << "1# LOVE STORY\n2# LOVE AND MONSTERS \n3# GUZEL VE CIRKIN \n ";
        GelecekFilmler::menu();
    }
};

class Filmler : public AksiyonFilm, public KomediFilm, public BilimKurguFilm, public RomantikFilm
{
public:
    void menu()
    {
        cout << "1- Aksiyon Filmler" << endl
            << "2- Komedi Filmler" << endl
            << "3- Bilim Kurgu Filmler" << endl
            << "4- Romantik Filmler" << endl;

        int islem;
        cout << "Film Islemi Tuslayiniz: ";
        cin >> islem;

        switch (islem)
        {
        case 1:
            AksiyonFilm::menu();
            break;
        case 2:
            KomediFilm::menu(); 
            break;
        case 3:
            BilimKurguFilm::menu();
            break;
        case 4:
            RomantikFilm::menu();
            break;
        default:
            cout << "Hatali tuslama";
            break;
        }
    }
};

#endif // DENEME_H

