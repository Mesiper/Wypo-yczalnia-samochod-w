#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Klienci {
public:
    string imie;
    string nazwisko;
    string pesel;
    string dataurodzenia;
    string obywatelstwo;
    string dokument;
    string nrdokumentu;
    string datawaznoscidokument;
    string wazneprawojazdy; //czy to nie powinien byc bool?
    string id_samochodu;
    bool posiadanysamochod=0;

    void Dodawanie_klienta();
    
    void wyswietldane();
    void czyposiadasamochod();
    void wypozyczenie();
    void oddanie();


};
