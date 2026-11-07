#include <iostream>
using namespace std;

// Classe Vecteur2D
class Vecteur2D {
private:
    double x;
    double y;

public:
    // Constructeur
    Vecteur2D(double a, double b) {
        x = a;
        y = b;
    }

    // Surcharge de l'operateur +
    Vecteur2D operator+(const Vecteur2D& v) {
        return Vecteur2D(x + v.x, y + v.y);
    }

    // Methode afficher
    void afficher() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {

    Vecteur2D v1(4, 9);
    Vecteur2D v2(3, 1);

    cout << "Vecteur 1 : ";
    v1.afficher();

    cout << "Vecteur 2 : ";
    v2.afficher();

    Vecteur2D v3 = v1 + v2;

    cout << "Resultat de l'addition : ";
    v3.afficher();

    return 0;
}
