#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

vector<int> parseInts(string str){
    
    for (int i = 0; i <= str.length(); i++){
        if (str[i] == ','){
        str[i] = ' ';
        }
    }
    
    stringstream ss(str);
    vector<int> a;
    int num;
    
    while (ss >> num){
        a.push_back(num);
    }
    
    return a;
}

int main() {
    string entrada;
    cin >> entrada;
    
    vector<int> saida = parseInts(entrada);
    
    for (int i = 0; i <= saida.size()-1; i++){
        cout << saida[i] << endl; 
    }    
    return 0;
}
