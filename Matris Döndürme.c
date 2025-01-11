#include <stdio.h>

#define N 6 // Matris boyutunu sabit tanımlıyoruz

// Fonksiyon: Matrisi saat yönünün tersine (sola) döndürme
void rotateLeft(int mat[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[N - j - 1][i] = mat[i][j];
        }
    }
}

// Fonksiyon: Matrisi saat yönünde (sağa) döndürme
void rotateRight(int mat[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[j][N - i - 1] = mat[i][j];
        }
    }
}

// Fonksiyon: Matrisi ekrana yazdırma
void printMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Orijinal matrisi tanımlıyoruz
    int matrix[N][N] = {
        {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };

    // Döndürülmüş sonuç matrisleri
    int rotatedLeft[N][N];
    int rotatedRight[N][N];

    // Fonksiyonları çağırarak matrisleri döndürüyoruz
    rotateLeft(matrix, rotatedLeft);
    rotateRight(matrix, rotatedRight);

    // Orijinal matrisi yazdırıyoruz
    printf("Orijinal Matris:\n");
    printMatrix(matrix);

    // Sola döndürülmüş matrisi yazdırıyoruz
    printf("\nSola Döndürülmüs Matris:\n");
    printMatrix(rotatedLeft);

    // Sağa döndürülmüş matrisi yazdırıyoruz
    printf("\nSağa Döndürülmüs Matris:\n");
    printMatrix(rotatedRight);

    return 0;
}

/*
Output:
Orijinal Matris:
 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36

Sola Döndürülmüş Matris:
 6 12 18 24 30 36
 5 11 17 23 29 35
 4 10 16 22 28 34
 3  9 15 21 27 33
 2  8 14 20 26 32
 1  7 13 19 25 31

Sağa Döndürülmüş Matris:
31 25 19 13  7  1
32 26 20 14  8  2
33 27 21 15  9  3
34 28 22 16 10  4
35 29 23 17 11  5
36 30 24 18 12  6
*/
