#include <iostream>
#include <stdexcept>
using namespace std;

// Classe Tableau
class Tableau {
private:
    int* data;
    int taille;

public:
    // Constructeur
    Tableau(int t) {
        taille = t;
        data = new int[taille];

        // Initialisation des elements
        for (int i = 0; i < taille; i++) {
            data[i] = 0;
        }
    }

    // Surcharge de l'operateur []
    int& operator[](int indice) {
        if (indice < 0 || indice >= taille) {
            throw out_of_range("Indice invalide !");
        }

        return data[indice];
    }

    // Destructeur
    ~Tableau() {
        delete[] data;
    }
};

int main() {

    Tableau t(5);

    // Remplissage du tableau
    t[0] = 10;
    t[1] = 20;
    t[2] = 30;
    t[3] = 40;
    t[4] = 50;

    cout << " AFFICHAGE DU TABLEAU " << endl;

    // Affichage des elements
    for (int i = 0; i < 5; i++) {
        cout << "Element [" << i << "] = " << t[i] << endl;
    }

    // Test d'un indice invalide
    try {
        cout << "\nElement [8] = " << t[8] << endl;
    }
    catch (const out_of_range& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}
