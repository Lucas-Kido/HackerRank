#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    
    string saida[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
    
    cin >> i;
    
    if (i > 9)
    {
        cout << saida[9];
    }
    else {
        cout << saida[i-1];
    }

    return 0;
}

