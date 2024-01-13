
#include <iostream>
#include <string>
#include <fstream>
#include "klasaklient.h"
using namespace std;


    void Klienci::Dodawanie_klienta() {
        cout << "Podaj imie\n";
        cin >> imie;
        cout << "Podaj nazwisko\n";
        cin >> nazwisko;
        cout << "Podaj pesel\n";
        cin >> pesel;
        /*cout << "Podaj date urodzenia\n";
        cin >> dataurodzenia;
        cout << "Podaj obywatelstwo \n";
        cin >> obywatelstwo;
        cout << "Podaj dokument\n";
        cin >> dokument;
        cout << "Podaj numer dokumentu\n";
        cin >> nrdokumentu;
        cout << "Podaj date waznosci dokuemntu\n";
        cin >> datawaznoscidokument;
        cout << "Podaj date waznosci prawa jazdy\n";
        cin >> wazneprawojazdy;
        */
        fstream plik;
        plik.open("bazaklient.txt", ios::out|ios::app);
        plik << imie << '\n';
        plik << nazwisko << '\n';
        plik << pesel << '\n';
        /*
        plik << dataurodzenia << '\n';
        plik << obywatelstwo << '\n';
        plik << dokument << '\n';
        plik << nrdokumentu << '\n';
        */
       // brakuje plik datawaznosci, i plik wazne prawo jazdy jak cos.
        plik.close();

    }
    void Klienci::wyswietldane() {
        cout << imie<<'\n';
        cout << nazwisko<<'\n';
        cout << pesel<< '\n';
    }
    void Klienci::czyposiadasamochod() {
        if (posiadanysamochod) {
            cout << "gotowy oddac samochod?" << '\n';
        }
    }
    void Klienci::wypozyczenie() {
        if (posiadanysamochod) {
            cout << "gotowy oddac samochod?" << '\n';
        }
        else {
            cout << "podaj id wypozycznego samochodu" << '\n';
            cin >> id_samochodu;
            posiadanysamochod = 1;
        }
        
        /*fstream plik;
        plik.open("bazaklient.txt", ios::out | ios::app);
        plik << id_samochodu << '\n';
        plik.close();
        */

    
    
    }
    void Klienci::oddanie() {
        if (posiadanysamochod) {
            cout << "gotowy oddac samochod?" << '\n';
            posiadanysamochod = 0;

        }
    }








int main()
{
    Klienci klient1;
    klient1.Dodawanie_klienta();
    //klient1.wypozyczenie();
    klient1.czyposiadasamochod();
    //klient1.wyswietldane();

}
    
    

