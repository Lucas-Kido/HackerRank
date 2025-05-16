#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int maior = a;
    
    if(b>maior) {maior = b;}
    if(c>maior) {maior = c;}
    if(d>maior) {maior = d;}
    
    return maior;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d; 
    
    cout << max_of_four(a, b, c, d) << endl; 
    
    return 0;
}
