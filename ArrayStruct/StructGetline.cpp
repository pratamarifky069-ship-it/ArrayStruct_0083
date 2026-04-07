#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};
struct orang{
    string nama;
    DetailAlamat alamat;
    int umur;
};
int main()
{
    //Deklarasi obyek dari struct orang
    orang mhs;
    //Isi obyek
    cout << "Nama Mahasiswa:";
    getline(cin, mhs.nama);
    cout << "Alamat Desa:";
    getline(cin, mhs.alamat.desa);
    cout << "Alamat Kota:";
    getline(cin, mhs.alamat.kota);
    cout << "Umur:";
    cin >> mhs.umur;
    cout << endl;
    //Menampilkan Isi Obyek
    cout << "Nama : " << mhs.nama <<endl;
    cout << "Desa : " << mhs.alamat.desa <<endl;
    cout << "Kota : " << mhs.alamat.kota <<endl;
    cout << "Umur : " << mhs.umur <<endl;
}