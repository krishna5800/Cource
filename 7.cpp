// TYPE CASTING

// //IMPLICIT TYPE CASTING

// // AKA-AUTOMATIC TYPE CASTING
// // EXAMPLE  =
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// //     int num1 = 10;

// //     float num2 = 10.1010;

// //     cout << num1 + num2 << endl;
//     // NOW HERE IT CHANGES INT INTO FLOAT AUTOMATICALLY AND GIVES OUTPUT THIS IS IMPLICIT TYPE CASTING

//     char ch = 'A';

//     int a = 1 + ch;

//     cout << a << endl;

//     return 0;
// }

// EXPLICIT TYPE CASTING

// AKA-MANUAL TYPE CASTING
// EXAMPLE  =
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int num1 = 10;

//     float num2  = 10.1010;

//     cout << num1 + (int)num2 << endl;
//     // IN THIS CODE WE HAVE CONVERTED float TO int MANUALLY USING CASTING OPERATOR

//     return 0;
// }

// SWITCH CASE IN C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter number for month-" << endl;

    cin >> a;

    switch (a)
    {
    case 1:
        cout << "January" << endl;
        break;

    case 2:
        cout << "February" << endl;
        break;

    case 3:
        cout << "March" << endl;
        break;

    case 4:
        cout << "April" << endl;
        break;

    case 5:
        cout << "May" << endl;
        break;

    case 6:
        cout << "June" << endl;
        break;

    case 7:
        cout << "July" << endl;
        break;

    case 8:
        cout << "August" << endl;
        break;

    case 9:
        cout << "September" << endl;
        break;

    case 10:
        cout << "October" << endl;
        break;

    case 11:
        cout << "November" << endl;
        break;

    case 12:
        cout << "December" << endl;
        break;

    default:
        cout << "Invalid Input" << endl;
        break;
    }
    return 0;
}
