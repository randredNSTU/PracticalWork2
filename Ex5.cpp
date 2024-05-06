#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double osnovanie, stepen1, stepen2;

    cout << "Введите число: ";
    cin >> osnovanie;
    cout << "Введите степень: ";
    cin >> stepen1;
    cout << "Введите новую степень: ";
    cin >> stepen2;

    cout << fixed << setprecision(2) << "Новая степень: " << stepen2 << endl;

    return 0;
}
