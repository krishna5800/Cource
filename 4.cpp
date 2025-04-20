// PATTERN PRINTING

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // printing SQUARE pattern

    // outer loop --> rows are defined
    // for(int i = 0; i < 4; i++)
    // {

    //     // inner loop --> print 4 stars 
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }


    // Rectangle pattern

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }



    // half pyramid
    // approach 1
    // for(int i = 0; i < 10; i++)
    // {
    //     cout << "* ";

    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    

    // approach 2
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
        
    // }

    // inverted pyramid

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        
    }
    
    // Numeric Pyramid

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// { 
//     for(int i=0; i<5; i++)
//     {
//         for(int j =1; j<=i+1; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }


    return 0;
}


// Inverted numeric pyramid

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// { 
//     for(int i=0; i<5; i++)
//     {
//         for(int j = 1; j<=5-i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Hallow Rectangle

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// { 
//     for(int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if(i==0 || i == 4)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 if(j == 0 || j == 4)
//                 {
//                 cout << "* ";
//                 } 
//                 else{
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
        
//     }
//     return 0;
// }
