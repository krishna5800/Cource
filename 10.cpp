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


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 6;
//     for (int row = 0; row < n; row++)
//     {
//         for(int col = 0; col < row+1; col++)
//         {
//             if(col == row)
//             {
//                 cout << 1 << " ";
//             }
//             else if(col == row-1)
//             {
//                 cout << n-col << " ";
//             }
//             else if(col == row-2)
//             {
//                 cout << (n-col-1)*2 << " ";
//             }
//             else if(row == 3 && col == 0)
//             {
//                 cout << 13 << " ";
//             }
//             else if(row == 4 && col ==0)
//             {
//                 cout << 15 << " ";
//             }
//             else if(row == 5 && col == 0)
//             {
//                 cout << 16 << " ";
//             }
//             else if(row == 4 && col == 1)
//             {
//                 cout << 10 << " ";
//             }
//             else if(row == 5 && col == 1)
//             {
//                 cout << 11 << " ";
//             }
//             else if(row == 5 && col == 2)
//             {
//                 cout << 7 << " ";
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

int main() {
    int n = 6;
    vector<int> firstElem(n);

    // Calculate leftmost values (6, 10, 13, 15, 16)
    firstElem[1] = 6;  // Row 1 (second row)
    for(int i = 2; i < n; i++) {
        firstElem[i] = firstElem[i-1] + (n - i);  // +4, +3, +2, +1
    }

    for(int row = 0; row < n; row++) {
        for(int col = 0; col <= row; col++) {
            if(col == row) {
                // Rightmost element = 1
                cout << 1 << " ";
            }
            else if(col == 0 && row > 0) {
                // Leftmost element from precomputed array
                cout << firstElem[row] << " ";
            }
            else if(col >= row-2) { 
                // Handle rightmost 3 elements
                if(col == row-1) cout << n - col << " ";
                else if(col == row-2) cout << (n - col -1)*2 << " ";
            }
            else {
                // Calculate middle elements using formula
                int j = col;
                int value = firstElem[row] - (j * (2*n - j - 1)) / 2;
                cout << value << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
