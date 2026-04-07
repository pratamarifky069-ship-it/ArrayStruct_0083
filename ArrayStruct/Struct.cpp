#include <iostream>
using namespace std;

struct orang{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    //Deklarasi obyek dari struct orang
    orang mhs;
    //Isi obyek
    cout << "Nama Mahasiswa:";
    cin >> mhs.nama;
    cout << "Alamat Asal:";
    cin >> mhs.alamat;
    cout << "Umur:";
    cin >> mhs.umur;
    cout << endl;
    //Menampilkan Isi Obyek
    cout << "Nama : " << mhs.nama <<endl;
    cout << "Alamat : " << mhs.alamat <<endl;
    cout << "Umur : " << mhs.umur <<endl;
}