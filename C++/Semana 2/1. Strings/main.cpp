#include <cmath>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;


int main() {
    string a, b, a_n, b_n;
    int size_a, size_b;
    
    cin >> a;
    cin >> b;
    
    a_n = a;
    b_n = b;
    
    size_a = a.size();
    size_b = b.size();
    
    a[0] = b_n[0];
    b[0] = a_n[0];
    
    cout << size_a << " " << size_b << endl;
    cout << a_n+b_n << endl;
    cout << a << " " << b;
    
    return 0;
}
