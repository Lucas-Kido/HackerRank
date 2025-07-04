#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix{
    public:
    vector<vector<int>> a;
    
    Matrix(){}
    
    Matrix(vector<vector<int>> matriz){
        a = matriz;
    }
};

Matrix operator+(Matrix const& m1, Matrix const& m2){
    int linhas = m1.a.size();
    int colunas = m1.a[0].size();
    vector<vector<int>> resultado(linhas, vector<int>(colunas));
        for (int i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
             resultado[i][j] = m1.a[i][j] + m2.a[i][j];  
            }
        }
    return Matrix(resultado);
};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
