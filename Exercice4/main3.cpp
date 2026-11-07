#include <iostream>
#include <string>
using namespace std;

// Classe Produit
class Produit {
private:
    string nom;
    double prix;
    int quantite;

public:
    // Constructeur
    Produit(string n, double p, int q) {
        nom = n;
        prix = p;
        quantite = q;
    }

    // Surcharge de l'operateur <<
    friend ostream& operator<<(ostream& os, const Produit& p);
};

// Definition de l'operateur <<
ostream& operator<<(ostream& os, const Produit& p) {
    os << "Nom : " << p.nom << endl;
    os << "Prix : " << p.prix << " DH" << endl;
    os << "Quantite : " << p.quantite << endl;

    return os;
}

int main() {

    Produit p1("Ordinateur", 5000, 3);
    Produit p2("Clavier", 150, 10);
    Produit p3("Souris", 80, 15);

    cout << " LISTE DES PRODUITS " << endl;

    // Affichage direct avec cout
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    return 0;
}
