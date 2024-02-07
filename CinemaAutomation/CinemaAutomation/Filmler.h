#include <iostream>
#include <chrono>
#include <vector>
#include "FileOperations.h"

#ifndef FILMLER_H
#define FILMLER_H

using namespace std;

class Vizyondaki
{
private:
    string vizyonFilmAdi;
    
public:
    
    void ortak()
    {
        cout << "Vizyondaki Menu" << endl;
        cout << "****************" << endl;
        cout << "* Aksiyon Filmi\n* Komedi Filmi\n* Gizem Filmi\n" << endl;
        
    }
    
};

class GelecekFilmler
{
private:
    string gelecekFilmAdi;
    
public:
    void ortak()
    {
        cout << "Gelecek Film Menu" << endl;
        cout << "******************" << endl;
        cout << "* Romantik Film\n* Korku Filmi\n " << endl;
        
        
    }
};

class AksiyonFilm : public Vizyondaki
{
public:
    void menu()
    {
        cout << "Aksiyon Film Menu" << endl;
        cout << "********************" << endl;
        Vizyondaki::ortak();
    }
};

class KomediFilm : public Vizyondaki
{
public:
    void menu()
    {
        cout << "Komedi Film Menu" << endl;
        cout << "*******************" << endl;
        Vizyondaki::ortak();
    }
};

class KorkuFilm : public GelecekFilmler
{
public:
    void menu()
    {
        cout << "Korku Film Menu" << endl;
        cout << "*************************" << endl;
        GelecekFilmler::ortak();
    }
};

class RomantikFilm : public GelecekFilmler
{
public:
    void menu()
    {
        cout << "Romantik Film Menu" << endl;
        cout << "************************" << endl;
        GelecekFilmler::ortak();
       
    }
};
class GerilimFilmi : public Vizyondaki {

public:
    void menu()
    {
        cout << "Gerilim Film Menu" << endl;
        cout << "************************" << endl;
        Vizyondaki::ortak();

    }
};

class Filmler : public AksiyonFilm, public KomediFilm, public KorkuFilm, public RomantikFilm, public GerilimFilmi
{
private:
    struct Film
    {
        string name;
        vector<string> showtimes;
    };

    vector<Film> films;
    vector<Film> movies;
    vector<Film> mov;
    vector<Film> fil;
    vector<Film> all;

    void showFilmInfo(const string& filmName)
    {
        for (const auto& film : films)
        {
            if (film.name == filmName)
            {
                cout << "Sectiginiz film: " << filmName << endl;
                cout << "Seanslar:" << endl;
                for (const auto& showtime : film.showtimes)
                {
                    cout << showtime << endl;
                }
                return;
            }
        }
        cout << "Film bulunamadi." << endl;
    }
    void showFilmInfo1(const string& filmName)
    {
        for (const auto& film : movies)
        {
            if (film.name == filmName)
            {
                cout << "Sectiginiz film: " << filmName << endl;
                cout << "Seanslar:" << endl;
                for (const auto& showtime : film.showtimes)
                {
                    cout << showtime << endl;
                }
                return;
            }
        }
        cout << "Film bulunamadi." << endl;
    }
    void showFilmInfo2(const string& filmName)
    {
        for (const auto& film : mov)
        {
            if (film.name == filmName)
            {
                cout << "Sectiginiz film: " << filmName << endl;
                cout << "Seanslar:" << endl;
                for (const auto& showtime : film.showtimes)
                {
                    cout << showtime << endl;
                }
                return;
            }
        }
        cout << "Film bulunamadi." << endl;
    }
    void showFilmInfo3(const string& filmName)
    {
        for (const auto& film : fil)
        {
            if (film.name == filmName)
            {
                cout << "Sectiginiz film: " << filmName << endl;
                cout << "Seanslar:" << endl;
                for (const auto& showtime : film.showtimes)
                {
                    cout << showtime << endl;
                }
                return;
            }
        }
        cout << "Film bulunamadi." << endl;
    }
    void showFilmInfo4(const string& filmName)
    {
        for (const auto& film : all)
        {
            if (film.name == filmName)
            {
                cout << "Sectiginiz film: " << filmName << endl;
                cout << "Seanslar:" << endl;
                for (const auto& showtime : film.showtimes)
                {
                    cout << showtime << endl;
                }
                return;
            }
        }
        cout << "Film bulunamadi." << endl;
    }
    void show(const string& filmName, const string& selectedShowtime) {
        for (const auto& film : films)
        {
            if (film.name == filmName)
            {
                cout << "Sectiginiz film: " << filmName << endl;
                cout << "Secilen Seans: " << selectedShowtime << endl;
                cout << "Seanslar:" << endl;
                for (const auto& showtime : film.showtimes)
                {
                    cout << showtime << endl;
                }
                return;
            }
        }
        cout << "Film bulunamadi." << endl;
    }


public:
    int selectedFilmCategory;
    double selectedFilmPrice;
    Filmler()
    {
        FileOperations fileOP = FileOperations();
        string aksiyonUrl = "Film\\Aksiyon\\filmAdi.txt";
        string aksiyonSaatUrl = "Film\\Aksiyon\\Hunger Games.txt";
        string url = "Film\\Aksiyon\\";


        films.push_back({ fileOP.readFileWithIndex(aksiyonUrl,0), {fileOP.readFileWithIndex(url + "Hunger Games.txt",0), fileOP.readFileWithIndex(url + "Hunger Games.txt",1) , fileOP.readFileWithIndex(url + "Hunger Games.txt",2) } });
        films.push_back({ fileOP.readFileWithIndex(aksiyonUrl,1), {fileOP.readFileWithIndex(url + "Maze Runner.txt",0), fileOP.readFileWithIndex(url + "Maze Runner.txt",1)} });
        films.push_back({ fileOP.readFileWithIndex(aksiyonUrl,2), {fileOP.readFileWithIndex(url + "Lucy.txt",0), fileOP.readFileWithIndex(url + "Lucy.txt",1) } });


        string romantikUrl = "Film\\Romantik\\filmAdi.txt";
        string romantikSaatUrl = "Film\\Romantik\\filmSeansi.txt";
        string url1 = "Film\\Romantik\\";


        movies.push_back({ fileOP.readFileWithIndex(romantikUrl,0), {fileOP.readFileWithIndex(url1 + "The Fault in Our Stars.txt",0), fileOP.readFileWithIndex(url1 + "The Fault in Our Stars.txt",1) } });
        movies.push_back({ fileOP.readFileWithIndex(romantikUrl,1), {fileOP.readFileWithIndex(url1 + "Su ve Ateþ.txt",0), fileOP.readFileWithIndex(url1 + "Su ve Ateþ.txt",1) } });

        string komediUrl = "Film\\Komedi\\filmAdi.txt";
        string komediSaatUrl = "Film\\Komedi\\filmSeansi.txt";
        string url2 = "Film\\Komedi\\";



        mov.push_back({ fileOP.readFileWithIndex(komediUrl,0), {fileOP.readFileWithIndex(url2 + "Kolpaçino.txt",0), fileOP.readFileWithIndex(url2 + "Kolpaçino.txt",1)  } });
        mov.push_back({ fileOP.readFileWithIndex(komediUrl,1), {fileOP.readFileWithIndex(url2 + "Ted.txt",0), fileOP.readFileWithIndex(url2 + "Ted.txt",1)} });

        string korkuUrl = "Film\\Korku\\filmAdi.txt";
        string korkuSaatUrl = "Film\\Korku\\filmSeansi.txt";
        string url3 = "Film\\Korku\\";


        fil.push_back({ fileOP.readFileWithIndex(korkuUrl,0), {fileOP.readFileWithIndex(url3 + "Truth or Dare.txt",0), fileOP.readFileWithIndex(url3 + "Truth or Dare.txt",1)  } });
        fil.push_back({ fileOP.readFileWithIndex(korkuUrl,1), {fileOP.readFileWithIndex(url3 + "Smile.txt",0), fileOP.readFileWithIndex(url3 + "Smile.txt",1) } });

        string gerilimUrl = "Film\\Gerilim\\filmAdi.txt";
        string gerilimSaatUrl = "Film\\Gerilim\\filmSeansi.txt";
        string url4 = "Film\\Gerilim\\";


        all.push_back({ fileOP.readFileWithIndex(gerilimUrl,0), {fileOP.readFileWithIndex(url4 + "Who Am I.txt",0), fileOP.readFileWithIndex(url4 + "Who Am I.txt",1)  } });
        all.push_back({ fileOP.readFileWithIndex(gerilimUrl,1), {fileOP.readFileWithIndex(url4 + "Nerve.txt",0), fileOP.readFileWithIndex(url4 + "Nerve.txt",1)  } });


    }

    void menu()
    {
        string aksiyonUrl = "Film\\Aksiyon\\filmAdi.txt";
        string romantikUrl = "Film\\Romantik\\filmAdi.txt";
        string komediUrl = "Film\\Komedi\\filmAdi.txt";
        string korkuUrl = "Film\\Korku\\filmAdi.txt";
        string gerilimUrl = "Film\\Gerilim\\filmAdi.txt";
        string aksiyonSaatUrl = "Film\\Aksiyon\\Hunger Games.txt";
        cout << "Hangi tur filmi tercih edersiniz?\n";
        string arrM[5] = { "Aksiyon Filmi","Romantik Film ","Komedi Filmi","Korku Filmi","Gerilim Filmi" };
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << "." << arrM[i] << endl;
        }


        cout << "\nLutfen Secim Numarasini Girin : ";
        int a;
        cin >> a;
        cout << "\n\n";


        FileOperations fileOP = FileOperations();

        switch (a)
        {
        case 1:
            cout << "Sectiginiz turde bugunlerde En Trend Filmler : " << endl;
            fileOP.readToFile("Film\\Aksiyon", "\\filmAdi.txt");
            cout << "\nSecim numarasini girin : ";
            int b;
            cin >> b;
            switch (b)
            {
            case 1:
                showFilmInfo(fileOP.readFileWithIndex(aksiyonUrl, 0));
                cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                int selectedShowtime;
                cin >> selectedShowtime;
                if (selectedShowtime == 1) {
                    cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Aksiyon\\Hunger Games.txt", 0);
                    cout << endl;
                }
                else if (selectedShowtime == 2) {
                    cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Aksiyon\\Hunger Games.txt", 1);
                    cout << endl;

                }
                else if (selectedShowtime == 3) {
                    cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Aksiyon\\Hunger Games.txt", 2);
                    cout << endl;
                }
                else {
                    cout << "";
                }

                break;
            case 2:
                showFilmInfo(fileOP.readFileWithIndex(aksiyonUrl, 1));
                cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                int selectedShowtime1;
                cin >> selectedShowtime1;
                if (selectedShowtime1 == 1) {
                    cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Aksiyon\\Maze Runner.txt", 0);
                    cout << endl;
                }
                else if (selectedShowtime1 == 2) {
                    cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Aksiyon\\Maze Runner.txt", 1);
                    cout << endl;
                }
                break;
            case 3:
                showFilmInfo(fileOP.readFileWithIndex(aksiyonUrl, 2));
                cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                int selectedShowtime2;
                cin >> selectedShowtime2;
                if (selectedShowtime2 == 1) {
                    cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Aksiyon\\Lucy.txt", 0);
                    cout << endl;
                }
                else if (selectedShowtime2 == 2) {
                    cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Aksiyon\\Lucy.txt", 1);
                    cout << endl;

                }
                break;


            default:
                cout << "Lutfen gecerli bir numara girin : ";
                cin >> b;
                break;
            }
           
                break;
            case 2:
                cout << "Sectiginiz turde bugunlerde En Trend Filmler : " << endl;
                cout << "\n1.The Fault in Our Stars \n2.Su ve Ateþ\n";
                cout << "\nSecim numarasini girin : ";
                int c;
                cin >> c;
                switch (c)
                {
                case 1:
                    showFilmInfo1(fileOP.readFileWithIndex(romantikUrl, 0));
                    cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                    int selectedShowtime;
                    cin >> selectedShowtime;
                    if (selectedShowtime == 1) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Romantik\\The Fault in Our Stars.txt", 0);
                        cout << endl;
                    }
                    else if (selectedShowtime == 2) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Romantik\\The Fault in Our Stars.txt", 1);
                        cout << endl;
                    }
                    break;
                case 2:
                    showFilmInfo1(fileOP.readFileWithIndex(romantikUrl, 1));
                    cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                    int selectedShowtime1;
                    cin >> selectedShowtime1;
                    if (selectedShowtime1 == 1) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Romantik\\Su ve Ateþ.txt", 0);
                        cout << endl;
                    }
                    else if (selectedShowtime1 == 2) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Romantik\\Su ve Ateþ.txt", 1);
                        cout << endl;
                    }
                    break;


                default:
                    cout << "Lutfen gecerli bir numara girin : ";
                    cin >> c;
                    break;
                }

                break;

            case 3:
                cout << "Sectiginiz turde bugunlerde En Trend Filmler : " << endl;
                cout << "\n1.Kolpaçino \n2.Ted\n";
                cout << "\nSecim numarasini girin : ";
                int d;
                cin >> d;
                switch (d)
                {
                case 1:
                    showFilmInfo2(fileOP.readFileWithIndex(komediUrl, 0));
                    cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                    int selectedShowtime;
                    cin >> selectedShowtime;
                    if (selectedShowtime == 1) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Komedi\\Kolpaçino.txt", 0);
                        cout << endl;
                    }
                    else if (selectedShowtime == 2) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Komedi\\Kolpaçino.txt", 1);
                        cout << endl;
                    }
                    break;
                case 2:
                    showFilmInfo2(fileOP.readFileWithIndex(komediUrl, 1));
                    cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                    int selectedShowtime1;
                    cin >> selectedShowtime1;
                    if (selectedShowtime1 == 1) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Komedi\\Ted.txt", 0);
                        cout << endl;
                    }
                    else if (selectedShowtime1 == 2) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Komedi\\Ted.txt", 1);
                        cout << endl;
                    }
                    break;

                default:
                    cout << "Lutfen gecerli bir numara girin : ";
                    cin >> c;
                    break;
                }

                break;
            case 4:
                cout << "Sectiginiz turde bugunlerde En Trend Filmler : " << endl;
                cout << "\n1.Truth or Dare\n2.Smile\n";
                cout << "\nSecim numarasini girin : ";
                int f;
                cin >> f;
                switch (f)
                {
                case 1:
                    showFilmInfo3(fileOP.readFileWithIndex(korkuUrl, 0));
                    cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                    int selectedShowtime;
                    cin >> selectedShowtime;
                    if (selectedShowtime == 1) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Korku\\Truth or Dare.txt", 0);
                        cout << endl;
                    }
                    else if (selectedShowtime == 2) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Korku\\Truth or Dare.txt", 1);
                        cout << endl;
                    }
                    break;
                case 2:
                    showFilmInfo3(fileOP.readFileWithIndex(korkuUrl, 1));
                    cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                    int selectedShowtime1;
                    cin >> selectedShowtime1;
                    if (selectedShowtime1 == 1) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Korku\\Smile.txt", 0);
                        cout << endl;
                    }
                    else if (selectedShowtime1 == 2) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Korku\\Smile.txt", 1);
                        cout << endl;
                    }
                    break;

                default:
                    cout << "Lutfen gecerli bir numara girin : ";
                    cin >> f;
                    break;
                }
                break;

            case 5:
                cout << "Sectiginiz turde bugunlerde En Trend Filmler : " << endl;
                cout << "\n1.Who Am I \n2.Nerve\n";
                cout << "\nSecim numarasini girin : ";
                int m;
                cin >> m;
                switch (m)
                {
                case 1:
                    showFilmInfo4(fileOP.readFileWithIndex(gerilimUrl, 0));
                    cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                    int selectedShowtime;
                    cin >> selectedShowtime;
                    if (selectedShowtime == 1) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Gerilim\\Who Am I.txt", 0);
                        cout << endl;
                    }
                    else if (selectedShowtime == 2) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Gerilim\\Who Am I.txt", 1);
                        cout << endl;
                    }
                    break;
                case 2:
                    showFilmInfo4(fileOP.readFileWithIndex(gerilimUrl, 1));
                    cout << "Hangi seansta izlemek istersiniz? (1,2,3,...):";
                    int selectedShowtime1;
                    cin >> selectedShowtime1;
                    if (selectedShowtime1 == 1) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Gerilim\\Nerve.txt", 0);
                        cout << endl;
                    }
                    else if (selectedShowtime1 == 2) {
                        cout << "Sectiginiz seans: " << fileOP.readFileWithIndex("Film\\Gerilim\\Nerve.txt", 1);
                        cout << endl;
                    }
                    break;

                default:
                    cout << "Lutfen gecerli bir numara girin : ";
                    cin >> c;
                    break;
                }

                break;
            default:
                cout << "Lutfen gecerli bir numara girin : ";
                cin >> a;
                break;
            }
        }
    

};

#endif // FILMLER_H