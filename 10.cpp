// DEBUG EXERCISE

// 1) Area of rectangle
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	float width, height;
//     cout << "Enter Breadth -" << endl;
// 	cin >> width;
//     cout << "Enter Length -" << endl;
//     cin >> height;
// 	float area = width * height;
// 	cout << "Area of Rectangle is - " << area << endl;
// 	return 0;
// }

// 2) binary to decimal

#include<bits/stdc++.h>
using namespace std;

int binarytodecimalno(int n)
{
    int decimalno = 0;
    int i = 0;

    while(n)
    {
        int bit = n % 10;
        decimalno = bit*pow(2,i++)+ decimalno;
        n = n/10;
    }
    return decimalno;
}


int main()
{
    int n;
    cout << "Enter binary number -" << endl;
    cin >> n;
    int decimal = binarytodecimalno(n);

    cout << "Decimal Number - " << decimal << endl;
    return 0;
}