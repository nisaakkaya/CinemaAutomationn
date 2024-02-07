#include<iostream>
#include<string>


#include "BiletRezervasyon.h"
#include "Satis.h"
#include "Filmler.h"
#include "Salon.h"


using namespace std;


const string islemMenusu = "1# Bilet Rezervasyon\n2# Filmler\n3# Satis\n4# Salon\n5# Cikis ";
int main() {
	cout << "------------------" << endl 
		<< "CINEMA ADMIN SYSTEM" << endl 
		<< "-------------------" << endl;
	cout << "************Kullanici Girisi************" << endl;
	Musteri musteri = Musteri();
	musteri.display();
	musteri.display1();
	cout << endl;
	

	//Class tanimlamalari
	BiletRezervasyon biletRezervasyon =  BiletRezervasyon();
	Satis satis = Satis();
	Filmler film = Filmler();
	Vizyondaki vizyon = Vizyondaki();
	GelecekFilmler gelecek = GelecekFilmler();
	AksiyonFilm aksiyon = AksiyonFilm();
	KorkuFilm korku = KorkuFilm();
	RomantikFilm romantik = RomantikFilm();
	KomediFilm komedi = KomediFilm();
	GerilimFilmi gerilim = GerilimFilmi();
    Salon salon = Salon();
	

	while (true)
	{
		int islem;
		cout << islemMenusu << endl;
		cout << "Lutfen islem yapiniz: ";
		cin >> islem;

		switch (islem)
		{
		case 1:
			biletRezervasyon.menu();
			break;
		
		case 2:
			vizyon.ortak();
			gelecek.ortak();
			film.menu();
			break;
		
		case 3:
			satis.menu();
			break;
		
		case 4:
			salon.menu();
			break;
		
		case 5:
			cout << "CIKIS YAPILDI" << endl;
			return 0;
		
		default:
			cout << "Hatali"<< endl;
		}

		string eh;
		cout << "Devam etmek ister misiniz? (e/h): ";
		cin >> eh;

		if (eh == "e" || "E") {
			continue;
		}
		else if (eh == "h" || "H") {
			break;
		
		}
		else {
			cout << "Hatali Tuslama" << endl;
		}
	}
	


	return 0;
}