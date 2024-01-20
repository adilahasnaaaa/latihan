#include <iostream>
#include <vector>

using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    // Membaca matriks S
    vector<vector<int>> S(R, vector<int>(C));
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> S[i][j];
        }
    }

    // Membaca batas persegi panjang
    int r1, r2, c1, c2;
    cin >> r1 >> r2 >> c1 >> c2;

    // Menghitung banyaknya pemindahan minimum
    int totalPeserta = 0;
    for (int i = r1 - 1; i < r2; ++i) {
        for (int j = c1 - 1; j < c2; ++j) {
            totalPeserta += S[i][j];
        }
    }

    // Output hasil
    if (totalPeserta == 0) {
        cout << "0\n";  // Tidak perlu pemindahan
    } else {
        int totalKursiKosong = 0;
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                totalKursiKosong += (S[i][j] == 0);
            }
        }
        if (totalPeserta <= totalKursiKosong) {
            cout << totalPeserta << "\n";
        } else {
            cout << "Tidak mungkin\n";
        }
    }

    return 0;
}
