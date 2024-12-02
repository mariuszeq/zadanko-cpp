#include <iostream>
#include <cmath>

using namespace std;

class Punkt2w {
private:
    double x, y;

public:
    Punkt2w(double x = 0, double y = 0) : x(x), y(y) {}

    void wczytaj() {
        cout << "Podaj wspolrzedne punktu (x, y): ";
        cin >> x >> y;
    }

    void wyswietl() const {
        cout << "Wspolrzedne punktu: (" << x << ", " << y << ")" << endl;
    }

    double wektor2w() const {
        // SQRT liczy pierwiastek z tego co jest w nawiasie
        return sqrt(x * x + y * y);
    }
};


class Punkt3w {
private:
    double x, y, z;

public:
    Punkt3w(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

    void wczytaj() {
        cout << "Podaj wspolrzedne punktu (x, y, z): ";
        cin >> x >> y >> z;
    }

    void wyswietl() const {
        cout << "Wspolrzedne punktu: (" << x << ", " << y << ", " << z << ")" << endl;
    }
};


int main() {
    Punkt2w punkt2D;
    punkt2D.wczytaj();
    punkt2D.wyswietl();
    cout << "Dlugosc wektora od punktu do (0, 0): " << punkt2D.wektor2w() << endl;

    Punkt3w punkt3D;
    punkt3D.wczytaj();
    punkt3D.wyswietl();

    return 0;
}
