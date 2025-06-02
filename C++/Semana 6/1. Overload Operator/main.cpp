#include <iostream>
#include <string>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
    Complex(){
        return;
    }
    
    Complex(int real, int img){
        a = real;
        b = img;
    }
    
};
    Complex operator+(Complex const& c1, Complex const& c2)
    {
        return Complex(c1.a + c2.a, c2.b + c1.b);    
    }
    
    ostream& operator<<(ostream& saida, Complex const& x)
    {
        saida << x.a << "+i" << x.b;
        return saida;  
    }

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}

// Talvez devesse fazer para um caso em que nao ha entrada imaginaria ou ha apenas entrada imaginaria
