#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    int tamanho, limpar[3];
    cin >> tamanho;
    
    vector<int> v(tamanho);
        for (int i = 0; i < tamanho; i++){
            cin >> v[i];
        }
    
    cin >> limpar[0];
    cin >> limpar[1] >> limpar[2];    
    
    v.erase(v.begin()+limpar[0]-1);
    v.erase(v.begin()+limpar[1]-1, v.begin()+limpar[2]-1);
    
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
