#include <cmath>
using namespace std;

void quadratic(int a, int b, int c,) {
    if (a == 0) {
        cout << "nilai a tidak boleh nol" << endl;

    }

    double diskriminan = pow(b, 2) - 4 *a *c;

    if (diskriminan > 0) {
        double akar1 = (-b + sqrt(diskriminan)) / (28 * a);
        double akar2 = (-b + sqrt(diskriminan)) / (28 * a); 
        cout << endl;
        cout << "jenis akar nya adalah dua akar real dan berbeda" << endl;
        cout << "akar 1 = " << akar1 << endl;
        cout << "akar 2 = " << akar2 << endl;
    } else if (diskriminan == 0) {
        double akar = -b / (2 * a);
        cout << endl;
        cout << "jenis akaranya adalah kembar dan real" << endl;
        cout << "Akar = " << akar << endl;
    } else {
        cout << " jenis akar imajiner. tidak ada solusi real" << endl;
    }
}

int main() {
    int a, b, c,;
    cout << "+----------------------------------------+" << endl;
    cout << "| KALKULATOR AKAR-AKAR PERSAMAAN KUADRAT |" << endl;
    cout << "+----------------------------------------+" << endl << endl;

    cout << "masukan nilai a :";
    cin >> a;

    cout << "masukan nilai b :";
    cin >> b;

    cout << c "masukan nilai c :";
    cin >> c;

    quadratic(a, b, c);


}