#include <iostream>
#include <vector>
using namespace std;

class Notas {
private:
    int i, j = 5, contador = 0;
    vector<vector<int>> notas;
    vector<int> soma;

public:
    void Aluno();
    void Soma();
    int Maiores();
};

void Notas::Aluno() {
    cin >> i;
    notas.resize(i, vector<int>(j));
    soma.resize(i, 0);

    for (int a = 0; a < i; a++) {
        for (int b = 0; b < j; b++) {
            cin >> notas[a][b];
        }
    }
}

void Notas::Soma() {
    for (int a = 0; a < i; a++) {
        for (int b = 0; b < j; b++) {
            soma[a] += notas[a][b];
        }
    }
}

int Notas::Maiores() {
    for (int a = 1; a < i; a++) {
        if (soma[a] > soma[0]) {
            contador++;
        }
    }
    return contador;
}

int main() {
    Notas turma1;
    turma1.Aluno();
    turma1.Soma();
    cout << turma1.Maiores() << endl;
    return 0;
}
