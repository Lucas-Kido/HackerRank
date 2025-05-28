#define FUNCTION(name, op) int name(int a, int b) {return (a op b) ? a : b;} 
#define toStr(x) #x
#define io(a) cin >> a
#define INF 10000000

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif
 
#include <iostream>
#include <vector>
using namespace std;

FUNCTION(minimum, <)
FUNCTION(maximum, >)
    
int main(){
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<=n; i++) {
        io(v[i]);
    }
    int mn = INF;
    int mx = -INF;
    for(int i = 0; i <= n; i++) {
        mn = minimum(mn, v[i]);
        mx = maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) <<' '<< ans;
    return 0;

}
