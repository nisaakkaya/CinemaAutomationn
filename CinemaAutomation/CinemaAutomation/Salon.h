#include <iostream>
#include "FileOperations.h"
#include <vector>
#include <cstring>
#include <string.h>
#include <string>

#ifndef SALON_H
#define SALON_H

using namespace std;

class Salon
{
private:
    string fileLocation = "Salon\\";
    vector<vector<bool>> salonAvailability;

public:
    string salonTuru;
    Salon()
    {
        salonAvailability = vector<vector<bool>>(5, vector<bool>(10, true));
    }
    void menu()
    {
        cout << "1- Salon Ekleme" << endl;
        cout << "2- Salon Silme" << endl;
        cout << "3- Dolu Salonlari Listele" << endl;
        cout << "4- Salon Listeleme" << endl;
        int islem;
        cout << "Salon Islemi Tuslayiniz: ";
        cin >> islem;
        switch (islem)
        {
        case 1:
            salonEkle();
            break;
        case 2:
            salonSilme();
            break;
        case 3:
            doluSalonlariListele();
            break;
        case 4:
            salonListeleme();
            break;
        default:
            cout << "Hatali tuslama";
            break;
        }
    }
    void salonEkle() {
        FileOperations file = FileOperations();
        file.createToFile("oda.txt", fileLocation, "Oda");
        cout << "Salon Ekle" << endl;
    }
    void salonSilme() {
        cout << "Salon silme" << endl;
    }

    void salonListeleme() {
        cout << "Salon Listeleme" << endl;
        int dizi[5] = { 1,2,3,4,5 };
        int i;
        for (i = 0; i < 5; i++) {
            cout << "Salon Listele :"
                << "SALON " << dizi[i] << " BOS" << endl;
        }
    }


    void doluSalonlariListele()
    {
        cout << "Dolu Salon Listeleme" << endl;

        for (int salonIndex = 0; salonIndex < salonAvailability.size(); salonIndex++)
        {
            cout << "Salon " << (salonIndex + 1) << ":" << endl;

            for (int seatIndex = 0; seatIndex < salonAvailability[salonIndex].size(); seatIndex++)
            {
                if (salonAvailability[salonIndex][seatIndex])
                {
                    cout << "KOLTUK " << (seatIndex + 1) << ": BOS" << endl;
                }
                else
                {
                    cout << "KOLTUK " << (seatIndex + 1) << ": DOLU" << endl;
                }
            }

            cout << endl;
        }
    }


    void splitChar(string* str, int salonIndex)
    {
        int len = str[0].length();
        int seatIndex = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[0][i] == '0')
            {
                cout << "SALON " << (salonIndex + 1) << " KOLTUK " << (seatIndex + 1) << " BOS" << endl;

                salonAvailability[salonIndex][seatIndex] = false;
            }
            else
            {
                cout << "SALON " << (salonIndex + 1) << " KOLTUK " << (seatIndex + 1) << " DOLU" << endl;
            }

            seatIndex++;
        }
    }
   
};

#endif // SALON_H