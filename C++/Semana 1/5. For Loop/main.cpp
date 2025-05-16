#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int a, b, aux;
    string saida[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    
    cin >> a >> b;
    
    if (a > b){
        aux = a;
        a = b;
        b = aux;
    }
    
    for(int i = a; i <= b; i++){
        if (i > 9 && i%2 != 0){
        cout << saida[10] << endl;
        }
        else if (i > 9 && i%2 == 0){
        cout << saida [9] << endl;
        }
        else if (i <= 9){
        cout << saida[i-1] << endl;
        }
    }
        
    return 0;
}
