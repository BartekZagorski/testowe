#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include <windows.h>

using namespace std;

class KsiazkaAdresowa
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <Uzytkownik> uzytkownicy;

private:
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    string wczytajLinie();
    bool czyIstniejeLogin(string login);

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
