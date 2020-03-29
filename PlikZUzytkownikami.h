#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include "MetodyPomocnicze.h"
#include "Uzytkownik.h"

using namespace std;

class PlikZUzytkownikami
{
    const string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty(fstream& plikTekstowy);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

    public:
    PlikZUzytkownikami(string NAZWA) : nazwaPlikuZUzytkownikami(NAZWA) {};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy);
};

#endif
