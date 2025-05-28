#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Dobra{
    public:
    Dobra(){
        A = 0;
    }
    
    int getA(){
        return A;
    }
    
    private:
    int A;
    void inc(){
        A++;
    }
    
    protected:
    void func(int& a){
        a = a*2;
        inc();
    }
    
};

class Triplica{
    public:
    Triplica(){
        B = 0;
    }
    
    int getB(){
        return B;
    }
    
    void saida(){
        cout << B;
    }
    
    private:
    int B;
    void inc(){
        B++;
    }
    
    protected:
    void func(int& a){
        a = a*3;
        inc();
    }
    
};

class Quintuplica{
    public:
    Quintuplica(){
        C = 0;
    }
    
    int getC(){
        return C;
    }
    
    private:
    int C;
    void inc(){
        C++;
    }
    
    protected:
    void func(int& a){
        a = a*5;
        inc();
    }
    
};

class valor : public Dobra, public Triplica, public Quintuplica{
    public:
    valor(){
        val = 1;
    }
    
    int val;
    
    void update(int novo){

        while (novo % 5 == 0) {
            novo /= 5;
            Quintuplica::func(val);
        };
        
        while (novo % 3 == 0) {
            novo /= 3;
            Triplica::func(val);
        };
        
        while (novo % 2 == 0) {
            novo /= 2;
            Dobra::func(val);
        };
    }
    
    void check(int);
};

int main() {
    int entrada;
    valor V;
    
    cin >> entrada;
    
    V.update(entrada);
    cout << "Value = " << entrada << endl;
    cout << "A's func called " << V.getA() << " times" << endl;
    cout << "B's func called " << V.getB() << " times" << endl;
    cout << "C's func called " << V.getC() << " times" << endl;
    return 0;
}
