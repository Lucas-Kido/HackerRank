#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

class Aluno{
    private:
        int idade, n_usp;
        string nome, sobrenome;
    
    public:
        void set_idade(){
            cin >> idade;
        }
        int get_idade(){
            return idade;
        }
        void set_nusp(){
            cin >> n_usp;
        }
        int get_nusp(){
            return n_usp;
        }
        void set_nome(){
            cin >> nome;
        }
        string get_nome(){
            return nome;
        }
        void set_sobrenome(){
            cin >> sobrenome;
        }
        string get_sobrenome(){
            return sobrenome;
        }
};

int main() {
    Aluno aluno;
    aluno.set_idade();
    aluno.set_nome();
    aluno.set_sobrenome();
    aluno.set_nusp();
    
    cout << aluno.get_idade() << endl;
    cout << aluno.get_sobrenome() << ", " << aluno.get_nome() << endl;
    cout << aluno.get_nusp() << endl << endl;
    cout << aluno.get_idade() << "," << aluno.get_nome() << "," << aluno.get_sobrenome() << "," << aluno.get_nusp();
    return 0;
}
