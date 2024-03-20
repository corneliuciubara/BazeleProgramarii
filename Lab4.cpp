#include <iostream>
using namespace std;

// Structura pentru a stoca informatiile despre o carte
struct Carte {
    int cod;
    string titlu;
    string autor;
    int totalExemplare;
    int exemplareDisponibile;
};

// Nodul arborelui
struct Nod {
    Carte carte;
    Nod* stanga;
    Nod* dreapta;
};

// Functie pentru a crea un nou nod
Nod* creareNod(Carte carte) {
    Nod* nouNod = new Nod();
    nouNod->carte = carte;
    nouNod->stanga = nullptr;
    nouNod->dreapta = nullptr;
    return nouNod;
}

// Functie pentru a insera un nod nou in arbore
Nod* inserare(Nod* radacina, Carte carte) {
    if (radacina == nullptr) {
        radacina = creareNod(carte);
    } else if (carte.cod < radacina->carte.cod) {
        radacina->stanga = inserare(radacina->stanga, carte);
    } else {
        radacina->dreapta = inserare(radacina->dreapta, carte);
    }
    return radacina;
}

// Functie pentru a cauta o carte dupa autor
void cautaDupaAutor(Nod* radacina, string autor) {
    if (radacina == nullptr) return;
    cautaDupaAutor(radacina->stanga, autor);
    if (radacina->carte.autor == autor) {
        cout << "Titlu: " << radacina->carte.titlu << ", Exemplare disponibile: " << radacina->carte.exemplareDisponibile << endl;
    }
    cautaDupaAutor(radacina->dreapta, autor);
}

// Functie pentru a actualiza numarul total de exemplare si cel disponibil
void actualizeazaExemplare(Nod* radacina, int cod, int nouTotal, int nouDisponibil) {
    if (radacina == nullptr) return;
    if (radacina->carte.cod == cod) {
        radacina->carte.totalExemplare = nouTotal;
        radacina->carte.exemplareDisponibile = nouDisponibil;
    } else if (cod < radacina->carte.cod) {
        actualizeazaExemplare(radacina->stanga, cod, nouTotal, nouDisponibil);
    } else {
        actualizeazaExemplare(radacina->dreapta, cod, nouTotal, nouDisponibil);
    }
}

// Functie pentru a afisa cartile fara exemplare disponibile
void afiseazaFaraDisponibile(Nod* radacina) {
    if (radacina == nullptr) return;
    afiseazaFaraDisponibile(radacina->stanga);
    if (radacina->carte.exemplareDisponibile == 0) {
        cout << "Titlu: " << radacina->carte.titlu << " - Fara exemplare disponibile" << endl;
    }
    afiseazaFaraDisponibile(radacina->dreapta);
}

// Functie pentru a afisa cartile in ordine crescatoare a codurilor
void afiseazaInOrdine(Nod* radacina) {
    if (radacina == nullptr) return;
    afiseazaInOrdine(radacina->stanga);
    cout << "Cod: " << radacina->carte.cod << ", Titlu: " << radacina->carte.titlu << endl;
    afiseazaInOrdine(radacina->dreapta);
}

int main() {
    Nod* radacina = nullptr;

    // Exemplu de adaugare a cartilor
    radacina = inserare(radacina, {1, "Titlu1", "Autor1", 5, 5});
    radacina = inserare(radacina, {2, "Titlu2", "Autor2", 3, 2});
    radacina = inserare(radacina, {3, "Titlu3", "Autor1", 4, 0});

    // Cauta dupa autor
    cout << "Carti de la Autor1:" << endl;
    cautaDupaAutor(radacina, "Autor1");

    // Afiseaza cartile fara exemplare disponibile
    cout << "Carti fara exemplare disponibile:" << endl;
    afiseazaFaraDisponibile(radacina);

    // Afiseaza cartile in ordine crescatoare a codurilor
    cout << "Carti in ordine crescatoare a codurilor:" << endl;
    afiseazaInOrdine(radacina);

    return 0;
}
