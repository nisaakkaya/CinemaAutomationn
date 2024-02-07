#include<iostream>

#ifndef SATIS_H
#define SATIS_H 

using namespace std;

class Satis
{
private:
	
	string selectedFilmCategory;
	double selectedFilmPrice= 80;

public:
	friend class Salon;
	void menu() {
		cout << "1- Fiyat Listele" << endl
			<< "2- Satis Yap" << endl;
		int islem;
		cout << "Satis Islemi Tuslayiniz: ";
		cin >> islem;

		switch (islem)
		{
		case 1:
			fiyatListele();
			break;
		case 2:
			satisYap();
			break;
		default:
			cout << "Hatali tuslama";
			break;
		}
	}
	void fiyatListele()
	{
		
		cout << "Fiyat Liste:" << endl;
		cout << "****************" << endl;
		cout << "Yetiskin : 80" << endl;
		cout << "Ogrenci : 40 " << endl;
		cout << "0-6 yas arasi : ucretsiz " << endl;

	}

	void satisYap()
	{
		cout << "\n1.  Yetiskin(25+) \n2.  Ogrenci(18-25) \n3.  0-6 yas arasi" << endl;
		cout << "Yas araliginizi seciniz : " << endl;
		int c;
		cin >> c;
		if (c == 1) {
			cout << "fiyat:" << selectedFilmPrice << endl;
		}
		else if (c == 2) {
			cout << "fiyat:" << selectedFilmPrice / 2 << endl;
		}
		else if (c == 3) {
			cout << "fiyat: ücretsiz" << endl;
		}
		else {
			cout << "yanlis tuslama yaptiniz." << endl;
		}

		
	}
};
 


#endif SATIS_H

