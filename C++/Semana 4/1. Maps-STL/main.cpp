#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string nome;
    int nota, id, busca;
    map<string, int> m;

    cin >> busca;
    for (int i = 1; i <= busca; i++) {
        cin >> id >> nome;

        if (id == 1) {
            cin >> nota;
            m[nome] += nota;
        }
        else if (id == 2) {
            m.erase(nome);
        }
        else if (id == 3) {
            cout << m[nome] << endl;
        }
    }
    return 0;
}
