#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], hasil[3][3];
    int pilihan;
    
    cout << "Masukkan elemen Matriks A (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    cout << endl;
    
    cout << "Masukkan elemen Matriks B (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
    cout << endl;
    
    cout << "Matriks A:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Matriks B:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Pilih operasi:" << endl;
    cout << "1. Penjumlahan (A + B)" << endl;
    cout << "2. Pengurangan (A - B)" << endl;
    cout << "3. Perkalian (A x B)" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;
    cout << endl;
    
    if (pilihan == 1) {
        cout << "Hasil A + B:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                hasil[i][j] = A[i][j] + B[i][j];
                cout << hasil[i][j] << " ";
            }
            cout << endl;
        }
        
    } else if (pilihan == 2) {
        cout << "Hasil A - B:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                hasil[i][j] = A[i][j] - B[i][j];
                cout << hasil[i][j] << " ";
            }
            cout << endl;
        }
        
    } else if (pilihan == 3) {
        cout << "Hasil A x B:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                hasil[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    hasil[i][j] += A[i][k] * B[k][j];
                }
                cout << hasil[i][j] << " ";
            }
            cout << endl;
        }
        
    } else {
        cout << "Pilihan tidak valid!" << endl;
    }
    
    return 0;
}