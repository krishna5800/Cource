// HW QUESTIONS FOR FUNCTIONS

// 1)
// FUNCTION FOR PRIME NUMBER

// #include<bits/stdc++.h>
// using namespace std;

// bool primenumber(int n)
// {
//     for(int i = 2; i < n; i++)
//     {
//         if(n%i == 0)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     int n;
//     cout << "Enter Number - " << endl;
//     cin >> n;
//     bool prime = primenumber(n);

//     if(prime)
//     {
//         cout << "Is a prime number !!" << endl;
//     }
//     else
//     {
//         cout << "Is not a prime number !!" << endl;
//     }

//     return 0;
// }

// 2)
// AREA OF CIRCLE

// #include<bits/stdc++.h>
// using namespace std;

// float areaofcircle(int n)
// {
//     float area = 3.14 * n * n;

//     cout << "Area of Circle is - " << area << endl;
// }

// int main()
// {
//     int n;
//     cout << "Enter Radius Of Circle !!" << endl;
//     cin >> n;

//     areaofcircle(n);
//     return 0;
// }

// 3)
// Function to find factorial of number

// #include<bits/stdc++.h>
// using namespace std;

// int factorialnum(int n)
// {
//     long int fact = 1;

//     if(n<0)
//     {
//         cout << "Invalid Input !!" << endl;
//     }
//     else{
//         for(int i = n; i >= 1; i--)
//         {

//             fact *= i;    // IMPORTANT
//         }
//         cout << "Factorial of " << n << " is " << fact << endl;
//     }

// }

// int main()
// {
//     int n;
//     cout << "Enter Nmber !!" << endl;
//     cin >> n;

//     factorialnum(n);
//     return 0;
// }

// 4)
// PRINT ALL PRIME NUMBERS FROM 1 TO N

// #include <bits/stdc++.h>
// using namespace std;

// bool primenum(int n)
// {
//     if (n <= 1)
//         return false;

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     cout << "Prime numbers between 1 and " << n << " are:" << endl;

//     for (int i = 1; i <= n; i++) // Loop from 1 to n
//     {
//         if (primenum(i)) // If i is prime
//         {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }



// 5)
// Print all digits of integer


#include <bits/stdc++.h>
using namespace std;

int integernum(int n)
{
    
}

int main()
{

    return 0;
}