#include <iostream>
#include <ctime>
using namespace std;

// Fungsi menghitung umur dalam tahun
int hitungUmurTahun(int tgl, int bln, int thn) {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int tahun_sekarang = 1900 + ltm->tm_year;
    int bulan_sekarang = 1 + ltm->tm_mon;
    int hari_sekarang = ltm->tm_mday;

    int umur = tahun_sekarang - thn;

    if (bulan_sekarang < bln || (bulan_sekarang == bln && hari_sekarang < tgl)) {
        umur--;
    }

    return umur;
}

// Fungsi menghitung umur dalam bulan
int hitungUmurBulan(int tgl, int bln, int thn) {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int tahun_sekarang = 1900 + ltm->tm_year;
    int bulan_sekarang = 1 + ltm->tm_mon;

    int total_bulan = (tahun_sekarang - thn) * 12 + (bulan_sekarang - bln);

    return total_bulan;
}

// Fungsi menentukan hari dalam minggu (Zeller’s Congruence)
string hitungHari(int tgl, int bln, int thn) {
    if (bln < 3) {
        bln += 12;
        thn--;
    }

    int K = thn % 100;
    int J = thn / 100;

    int h = (tgl + (13 * (bln + 1)) / 5 + K + (K / 4) + (J / 4) + 5 * J) % 7;

    string hari[] = {"Sabtu", "Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat"};

    return hari[h];
}

int main() {
    int tgl, bln, thn;

    cout << "Masukkan tanggal lahir (dd mm yyyy): ";
    cin >> tgl >> bln >> thn;

    cout << "Umur (tahun): " << hitungUmurTahun(tgl, bln, thn) << endl;
    cout << "Umur (bulan): " << hitungUmurBulan(tgl, bln, thn) << endl;
    cout << "Hari lahir: " << hitungHari(tgl, bln, thn) << endl;

    return 0;
}