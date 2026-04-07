#include <iostream>
using namespace std;

// Variabel global
int angka, pilihan;

// Function cek bilangan prima
bool cekPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// Function cek bilangan fibonacci
bool cekFibonacci(int n) {
    int a = 0, b = 1, c;

    while (a <= n) {
        if (a == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// Function menu
void tampilMenu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih: ";
}

// Main program
int main() {

    while (true) {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan angka: ";
                cin >> angka;

                if (cekPrima(angka)) {
                    cout << "Bilangan PRIMA" << endl;
                } else {
                    cout << "Bukan bilangan prima" << endl;
                }
                break;

            case 2:
                cout << "Masukkan angka: ";
                cin >> angka;

                if (cekFibonacci(angka)) {
                    cout << "Termasuk bilangan Fibonacci" << endl;
                } else {
                    cout << "Bukan bilangan Fibonacci" << endl;
                }
                break;

            case 0:
                cout << "Program selesai." << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }
}