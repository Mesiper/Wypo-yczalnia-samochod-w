#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;


class Car
{
public:
    string marka;
    string model;
    string tablica;
    string typ_paliwa;
    /*
    string kolor;
    string rodzaj_skrzyni;
    int moc;
    int rocznik;
    int ilosc_miejsc;
    bool dostepnosc; 
    */
    int ktory_samochod;

    void wczytywanie()
    {
        fstream plik;

        plik.open("samochody.txt", ios::in);

        if (plik.good()== true)
        {
            int nr_linii = (ktory_samochod-1)* 4; //4 bo ilosc atrybutow, do update jak bedzie wiecej gotowe
            string linia;
            int licznik =0;
            while (getline (plik, linia))
            {
                if (licznik == nr_linii) marka= linia;
                if (licznik == nr_linii +1) model= linia;
                if (licznik == nr_linii +2) tablica= linia;
                if (licznik == nr_linii +3) typ_paliwa= linia;
                licznik++;
            }
            plik.close();
        }
        else 
        {
            cout<<" Problem z plikiem! ";
        }
    }

    void wyswietl()
    {
        cout<< "-----------------------------------" <<'\n';
        cout<< marka << '\n';
        cout<< "Model: "<< model <<'\n';
        cout<< "Tablia: "<< tablica <<'\n';
        cout<< "Typ paliwa: "<< typ_paliwa <<'\n';
    }

	//zastanowmy sie nad inna metoda na zapisywanie raportu niz w stringu
    void dodawanie()
    {
        fstream plik;

        cout<< "Podaj marke: "; 
        cin>>marka;
        cout<< "Podaj model: ";
        cin>>model;
        cout<< "Podaj tablice: ";
        cin>>tablica;
        cout<< "Podaj typ paliwa: ";
        cin>>typ_paliwa;

        plik.open("samochody.txt", ios::out | ios::app);

        plik<<marka<<'\n';
        plik<<model<<'\n';
        plik<<tablica<<'\n';
        plik<<typ_paliwa<<'\n';

        plik.close();
    }
    /*
    void dodawanie_auta()
    {
        cout<<"DODAWNIE AUTA \n";
        cout<<"Podaj marke: ";
        cin>>marka;
        cout<<"Podaj model: ";
        cin>>model;
        cout<<"Podaj tablice: ";
        cin>>tablica;
        cout<<"Podaj typ paliwa: ";
        cin>>typ_paliwa;
        cout<<"Podaj kolor: ";
        cin>>kolor;
        cout<<"Podaj moc: ";
        cin>>moc;
        cout<<"Podaj rocznik: ";
        cin>>rocznik;
        cout<<"Podaj ilosc miejsc: ";
        cin>>ilosc_miejsc;
        cout<<"Podaj typ skrzyni biegow: ";
        cin>>rodzaj_skrzyni;
        cout<<"Podaj dostepnosc: ";
        cin>>dostepnosc;
    }

    void wyswietlanie()
    {
        cout<< '\n' << "Samochod: "<< '\n' <<'\n';
        cout<< "Marka: " << marka <<'\n'<< "Model: " << model <<'\n';
        cout<< "Tablica: " << tablica << '\n';
        cout<< "Typ paliwa: " << typ_paliwa <<'\n';
        cout<< "Kolor: " << kolor <<'\n';
        cout<< "Typ skrzyni: " << rodzaj_skrzyni <<'\n'; 
        cout<< "Moc w KM: " << moc <<'\n';
        cout<< "Rocznik: " << rocznik <<'\n';
        cout<< "Ilosc miejsc: " << ilosc_miejsc <<'\n';
        cout<< "Czy dostepny? " << dostepnosc <<'\n';
         
    }
    
    */

   void raport()
    {
        time_t czas;
        fstream raporcik;
        raporcik.open("raport.txt", ios::out | ios::app);
        time(&czas);

        raporcik<<ctime(&czas)<<'\n';

        /*raporcik<<"JD"<<'\t'; git ale dodaje jd na poczatku, a date potem.
        raporcik<<ctime(&czas)<<'\n'; */



        raporcik.close();
    }
};


