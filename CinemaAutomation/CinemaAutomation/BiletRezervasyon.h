#include <iostream>
#include <vector>
#ifndef BILETREZERVASYON_H
#define BILETREZERVASYON_H

using namespace std;
struct KoltukDurumu {
    int salonNo;
    int koltukNo;
    bool dolu;

    KoltukDurumu(int salon, int koltuk, bool doluluk) : salonNo(salon), koltukNo(koltuk), dolu(doluluk) {}
};

class Bilet {
protected:
    string musteriAdi;
    
    bool biletAlindi;

public:
    Bilet() : musteriAdi(""), biletAlindi(false) {}
    Bilet(string ad) : musteriAdi(ad),  biletAlindi(false) {}
    ~Bilet();
    void BiletAl() {
        if (!biletAlindi) {
            cout << "Bilet alindi. Musteri: " << musteriAdi  << endl;
            biletAlindi = true;
        }
        else {
            cout << "Bilet zaten alinmis." << endl;
        }
    }

    // Saf sanal fonksiyon ile arayüz oluþturma
    virtual void filmSirala() = 0;
};

class BiletRezervasyon : public Bilet {
private:
    vector<KoltukDurumu> koltukDurumListesi;

public:
    BiletRezervasyon() : koltukDurumListesi() {}

    void menu() {
        cout << "1- Film Sirala" << endl;
       
        
        int islem;
        cout << "Rezervasyon Islemi Tuslayiniz:";
        cin >> islem;

        switch (islem) {
        case 1:
            filmSirala();
            break;
       
        default:
            cout << "Hatali tuslama";
            break;
        }
    }

    void filmSirala() override {
        cout << "Filmler" << endl;
        cout << "****************" << endl;
        cout << "+Hunger Games   +Maze Runner  +Lucy\n+The Fault in  Our Stars   +Su ve Ateþ\n+Kolpaçino   +Ted\n+Truth or Dare   +Smile\n+Who Am I   +Nerve";
        cout << endl;
    }

};



class Musteri {
    string musteriTelNo;
    char musteriName[20];
public:
    Musteri() {};
   
    void display() {
        cout << "Adinizi giriniz: ";
        cin >> musteriName;
        cout << "Telefon numaranizi giriniz: ";
        cin >>musteriTelNo;      

    }void display1() {
        cout << "\nMusteri Name: " << musteriName;
        cout << "\nMusteri Tel No: " << musteriTelNo;;
        cout << endl;
    }
};


#endif // BILETREZERVASYON_H