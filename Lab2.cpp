#include <iostream>
#include <string>

using namespace std;

// Structura unui nod în listă
struct Consumator {
    string nume;
    string telefon;
    Consumator* urmator;
};

// Clasa pentru gestionarea listei de consumatori
class Lista {
private:
    Consumator* cap; // pointer către primul element din listă
public:
    Lista() : cap(nullptr) {}

    ~Lista(); // Destructor pentru curățarea memoriei

    void adaugaConsumator(string nume, string telefon);
    void stergeConsumator(string nume);
    void afiseazaLista();
};

Lista::~Lista() {
    Consumator* temp;
    while (cap != nullptr) {
        temp = cap;
        cap = cap->urmator;
        delete temp;
    }
}

void Lista::adaugaConsumator(string nume, string telefon) {
    Consumator* nou = new Consumator{nume, telefon, nullptr};
    if (cap == nullptr) {
        cap = nou;
    } else {
        Consumator* temp = cap;
        while (temp->urmator != nullptr) {
            temp = temp->urmator;
        }
        temp->urmator = nou;
    }
}

void Lista::stergeConsumator(string nume) {
    Consumator* temp = cap;
    Consumator* anterior = nullptr;

    while (temp != nullptr && temp->nume != nume) {
        anterior = temp;
        temp = temp->urmator;
    }

    if (temp == nullptr) {
        cout << "Consumatorul nu a fost gasit." << endl;
        return;
    }

    if (anterior == nullptr) {
        cap = cap->urmator;
    } else {
        anterior->urmator = temp->urmator;
    }
    delete temp;
}

void Lista::afiseazaLista() {
    Consumator* temp = cap;
    while (temp != nullptr) {
        cout << "Nume: " << temp->nume << ", Telefon: " << temp->telefon << endl;
        temp = temp->urmator;
    }
}

int main() {
    Lista lista;

    // Adăugarea consumatorilor în listă
    lista.adaugaConsumator("Ion Popescu", "0720001122");
    lista.adaugaConsumator("Maria Ionescu", "0733004455");
    lista.adaugaConsumator("George Vasile", "0744005566");

    // Afișarea listei înainte de ștergere
    cout << "Lista inainte de stergere:" << endl;
    lista.afiseazaLista();

    // Citirea numelui consumatorului care trebuie șters
    string numeDeSters;
    cout << "Introduceti numele consumatorului pentru stergere: ";
    getline(cin, numeDeSters);

    // Ștergerea consumatorului și afișarea listei actualizate
    lista.stergeConsumator(numeDeSters);
    cout << "Lista dupa stergere:" << endl;
    lista.afiseazaLista();

    return 0;
}
