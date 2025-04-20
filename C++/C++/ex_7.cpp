#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void update(int *a, int *b) {
    int aux = *a;
    *a = *a + *b;
    *b = abs(aux-*b);
}

int main() {
    int a, b;
    int *pa = &a;
    int *pb = &b;
    scanf("%d", &a);
    scanf("%d", &b);
    update(&a, &b);
    cout << a << endl << b;  
    return 0;
}  
