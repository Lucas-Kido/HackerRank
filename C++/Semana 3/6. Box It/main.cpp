#include <iostream>
using namespace std;

class Box{
    private:
    int length, breadth, height;
    
    public:
    Box(){
        length = 0;
        breadth = 0;
        height = 0;
    }
    
    Box(int l, int b, int h){
        length = l;
        breadth = b;
        height = h;
    }
    
    Box(Box& b){
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }
    
    int getLength(){
        return length;
    }
    
    int getBreadth(){
        return breadth;
    }
    
    int getHeight(){
        return height;
    }
    
    long long CalculateVolume(){
        return static_cast<long long>(height) * breadth * length;
    }
    
    bool operator<(Box& b){
        if((length < b.length) || (breadth < b.breadth && length == b.length) || 
            (height < b.height && breadth == b.breadth && length == b.length))
            return true;
            
        else{
            return false;
        }
    }
    
    friend ostream& operator<<(ostream &saida, Box& b){
        saida << b.length << " " << b.breadth << " " << b.height;
        return saida; 
    }
};

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
