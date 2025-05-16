#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

struct Aluno{
    int idade;
    string nome;
    string sobrenome;
    int n_usp;
};

Aluno dadosAluno(){
    Aluno a;
    
    cin >> a.idade;
    cin >> a.nome;
    cin >> a.sobrenome;
    cin >> a.n_usp;
    
    return a;
}


int main() {
    Aluno aluno1;
    
    aluno1 = dadosAluno();
    
    cout << aluno1.idade << ' ' << aluno1.nome << ' ' << aluno1.sobrenome << ' ' << aluno1.n_usp;
    
    return 0;
}
