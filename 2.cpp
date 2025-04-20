//BIANRY TO DECIMAL CONVERSION
#include<bits/stdc++.h>
using namespace std;

int binarytodecimal(int n)
{   int decimalno = 0;
    int i = 0;
    while(n)
    {
        int bit = n % 10;
        decimalno = bit * pow(2, i++) + decimalno;
        n /= 10;
    } 
    return decimalno;
}
int main()
{   
    int n;
    cout << "Enter Number -" << endl;
    cin >> n;
    int decimal = binarytodecimal(n);
    cout << decimal << endl;
}
