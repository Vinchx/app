#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Daftar zodiak
    string zodiak[] = {"Arinies", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius", "Pisces"};

    // Meminta pengguna untuk memasukkan zodiak mereka dan pasangan
    string zodiak1, zodiak2;

    cout << "Masukkan zodiak Anda: ";
    getline(cin, zodiak1);

    cout << "Masukkan zodiak pasangan Anda: ";
    getline(cin, zodiak2);

    // Menghitung persentase kecocokan secara acak
    srand(time(0));  // Menetapkan seed untuk angka acak
    int persentaseKecocokan = rand() % 101;  // Menghasilkan angka acak antara 0 dan 100

    // Menampilkan hasil
    cout << "Kecocokan antara " << zodiak1 << " dan " << zodiak2 << " adalah: " << persentaseKecocokan << "%" << endl;

    return 0;
}
