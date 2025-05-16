#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> a(n);

   
    for (int i = 0; i < n; i++) {
        int elementos;
        cin >> elementos;

        vector<int> a_atual(elementos);

        for (int j = 0; j < elementos; j++) {
            cin >> a_atual[j];
        }
        a[i] = a_atual;
    }

  
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;

        cout << a[x][y] << endl;
    }

    return 0;
}
