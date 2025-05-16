#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tamanho;
    cin >> tamanho;
    
    vector<int> v(tamanho);
        for (int i = 0; i <= tamanho; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        
        for (int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
    return 0;
}
