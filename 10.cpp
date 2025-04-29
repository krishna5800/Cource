// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 8;

//     for(int row = 0; row < n; row++)
//     {
//         for(int col = 0; col < row+1; col++)
//         {
//             if(col == 0 || col == row || row == n-1)
//             {
//                 cout << col+1 << " ";
//             }
//             else 
//             {
//                 cout << "  ";
//             }

//         }
//         cout << endl;
//     }
//     return 0;
// }


// Inverted pyramid

// 1 2 3 4 5                   
// 1     4
// 1   3
// 1 2
// 1


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 5;

//     for(int row = 0; row < n; row++)
//     {
//         for(int col = 0; col < n-row; col++)
//         {
//             if(col == 0 || row == 0 || col == n-row-1)
//             {
//                 cout << col+1 << " ";
//             }
//             else 
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n-row; col++)
        {
            if(col == 0 || row == 0 || col == n-row-1)
            {
                cout << col+1 << " ";
            }
            else 
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}




