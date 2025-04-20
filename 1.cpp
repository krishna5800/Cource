//DECIMAL TO BIANRY CONVERSION

// //a) Division Method
#include <bits/stdc++.h>
using namespace std;

int decimaltobinary1(int n)
{   
    int binaryno = 0;
    int i = 0;
    while(n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n/2;
    } 
     return binaryno;
 }
 int main()
 {   
     int n;
     cout << "Enter Number -" << endl;
     cin >> n;
     int binary = decimaltobinary1(n);
     cout << binary << endl;
 }


//b) Bitwise methode
// #include<bits/stdc++.h>
// using namespace std;

// int decimaltobinary2(int n)
// {
//     int binaryno = 0;
//     int i = 0;
//     while(n>0)
//     {
//         int bit =(n & 1);
//         binaryno = bit*pow(10, i++) + binaryno;
//         n = n >> 1;
//     }
//     return binaryno;
// }

// int main()
// {
//     int n;
//     cout << "Enter number -" << endl;
//     cin >> n;
//     int binary = decimaltobinary2(n);
//     cout << binary;

// }
