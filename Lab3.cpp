#include <iostream>
#include <string>
#include <map> // Pentru a număra frecvențele caracterelor

using namespace std;

struct Nod {
    char caracter;
    int frecventa;
    Nod* anterior;
    Nod* urmator;

    Nod(char c, int f) : caracter(c), frecventa(f), anterior(nullptr), urmator(nullptr) {}
};

class ListaDubluInlantuita {
private:
    Nod* cap;
    Nod* coada;

public:
    ListaDubluInlantuita() : cap(nullptr), coada(nullptr) {}

    ~ListaDubluInlantuita(); // Destructor pentru eliberarea memoriei

    void adaugaInLista(char caracter, int frecventa);
    void afiseazaLista();
};

ListaDubluInlantuita::~ListaDubluInlantuita() {
    while (cap != nullptr) {
        Nod* temp = cap;
        cap = cap->urmator;
        delete temp;
    }
}

void ListaDubluInlantuita::adaugaInLista(char caracter, int frecventa) {
    Nod* nodNou = new Nod(caracter, frecventa);

    if (cap == nullptr) {
        cap = nodNou;
        coada = nodNou;
        return;
    }

    Nod* temp = cap;
    while (temp != nullptr && temp->caracter < caracter) {
        temp = temp->urmator;
    }

    if (temp == cap) {
        nodNou->urmator = cap;
        cap->anterior = nodNou;
        cap = nodNou;
    } else if (temp == nullptr) {
        coada->urmator = nodNou;
        nodNou->anterior = coada;
        coada = nodNou;
    } else {
        nodNou->urmator = temp;
        nodNou->anterior = temp->anterior;
        temp->anterior->urmator = nodNou;
        temp->anterior = nodNou;
    }
}

void ListaDubluInlantuita::afiseazaLista() {
    Nod* temp = cap;
    while (temp != nullptr) {
        cout << temp->caracter << " " << temp->frecventa << endl;
        temp = temp->urmator;
    }
}

int main() {
    string s;
    cout << "Introduceti textul: ";
    getline(cin, s);

    map<char, int> frecvente;

    // Calcularea frecvențelor pentru fiecare caracter
    for (char c : s) {
        if (isalpha(c)) { // Considerăm doar caracterele alfabetice
            c = tolower(c); // Normalizăm toate caracterele la minuscule
            frecvente[c]++;
        }
    }

    ListaDubluInlantuita lista;

    // Adăugarea caracterelor și a frecvențelor lor în listă
    for (auto const& pereche : frecvente) {
        lista.adaugaInLista(pereche.first, pereche.second);
    }

    // Afișarea listei
    lista.afiseazaLista();

    return 0;
}
