/* 
Aluno: Alexandre Santato
Nro USP: 14555162
Pratica 1 - Introducao a Computacao II
*/

#include <iostream>
#include <ctime>

using namespace std;

void prefixMedia1(float X[], float A[], int n) {

    float a;
    for(int i = 0; i < n; i++) {
        a = 0;
        for(int j = 0; j <= i; j++) {
            a += X[i];
        }
        A[i] = a / (i+1);
    }
}

void prefixMedia2(float X[], float A[], int n) {
    
    float a = 0;
    for(int i = 0; i < n; i++) {
        a += X[i];
        A[i] = a / (i+1);
    }
}

int main() {

    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    float *aPtr = new float[n];
    float *xPtr = new float[n];

    for(int i = 0; i < n; i++) {
        xPtr[i] = 1.0;
    }

    clock_t time1, time2;

    time1 = clock();

    // tres vezes para ter uma estimativa melhor dos resultados
    for(int i = 0; i < 3; i++) {
        // chamada de funcao "prefixMediak(xPtr, aPtr, n);"
    }

    time2 = clock();

    float timeSeconds = difftime(time2, time1) / (3 * CLOCKS_PER_SEC);
    
    cout << "A media de tempo de execucao eh de " << timeSeconds << " segundos!\n";

    return 0;
}