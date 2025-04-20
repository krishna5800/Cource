// 1)Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;

//     if('a' <= c && c <= 'z'){
//         cout << 0;
//     }
// 	else if('A' <= c && c <= 'Z'){
//         cout << 1;
//     }
//     else{
//         cout<<-1;
//     }
// }


// Debug the code. It is trying to print the given pattern.

/*
Pattern
1
23
345
4567
*/

// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int n=5;
//     int i=1;

//     while(i<n){

//         int j = i,count = 1;

//         while(count<=i){

//             cout<<j;

//             j = j + 1;

//             count = count + 1;

//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// Debug the code. It is trying to print the given pattern.

/*

Pattern
N = 4
   *
  ***
 *****
*******

*/

#include <iostream>
using namespace std;

int main()
{
   int n=4;

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n+3; j++)
      {
         if (i == 0)
         {
            if (j == 0 || j == 1 || j == 2 || j == 4 || j == 5 || j == 6)
            {
               cout << "  ";
            }
            else
            {
               cout << "* ";
            }
         }
         else if (i == 1)
         {
            if (j == 0 || j == 1 || j == 5 || j == 6)
            {
               cout << "  ";
            }
            else
            {
               cout << "* ";
            }
         }
         else if (i == 2)
         {
            if (j == 0 || j == 6)
            {
               cout << "  ";
            }
            else
            {
               cout << "* ";
            }
         }
         else
         {
            cout << "* ";
         }
      }
      cout << endl;
   }
}


//Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
1
22
333
4444
*/


#include<iostream>
using namespace std;

int main(){
  int i,j,n; 
   n = 4;

    for(i=1;i<=n;i++){

        for(j=1;j<i+1;j++){

	        cout<<i;

        }
    cout<<endl;
    }
}

// Pattern
// N = 4
// 1
// 21
// 321
// 4321

#include <iostream>
using namespace std;

int main()
{  

   int i, j;


   for (i = 0; i < 4; i++)
   {

      int p;

      for (j = i+1; j >= 1; j--)

      {
         cout << j;
      }

      cout << endl;
   }

}



// * * * *        ro  0     4  n-r0           
//  * * *         r1  1     3  n-r1
//   * *          r2  2     2  n-r2
//    *           r3  3     1  n-r3


// * * * *        4  n-r0           
//  * * *         3  n-r1   STAR LOGIC
//   * *          2  n-r2
//    *           1  n-r3



// * * * *        ro  0           
//  * * *         r1  1    SPACE LOGIC
//   * *          r2  2     
//    *           r3  3     

#include <iostream>
using namespace std;

int main()
{
   for(int row = 0; row < 4; row ++)
   {
      for(int col=0; col<row; col++)
      {
            //space
            cout << " ";
      }

      for(int col = 0; col < 4-row; col++)
      {
            cout << "* ";
      }
      cout << endl;
   }
}

//DIAMOND PATTERN


#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;

   for(int row = 0; row < n; row++)
   {
      for(int col = 0; col < n-row-1; col++)
      {
         // spaces
         cout << " ";
       
      }

      for(int col = 0; col < row+1; col++)
      {
         // spaces
         cout << "* ";
       
      }
      cout << endl;
   }

   for(int row = 0; row < n; row++)
   {
      for(int col = 0; col < row; col++)
      {
         // spaces
         cout << " ";
       
      }
   
      for(int col = 0; col < n-row; col++)
      {
         // spaces
         cout << "* ";
       
   }
   cout << endl;
   }
   return 0;
}


//    *
//   * *
//  *   *
// *     *


#include<bits/stdc++.h>
using namespace std;

int main()
{
   for (int row = 0; row < 4; row++)
   {
      for (int col = 0; col < 4-row-1; col++)
      {
         cout << " ";
      }
      for (int col = 0; col < row+1; col++)
      {
         if(col == 0 || col == row+1-1)
         {
         cout << "* ";
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




// *     *        ro  0     4  n-r0           
//  *   *         r1  1     3  n-r1
//   * *          r2  2     2  n-r2
//    *           r3  3     1  n-r3


// *     *        ro  0           
//  *   *         r1  1    SPACE LOGIC
//   * *          r2  2     
//    *           r3  3     



// *     *        4   0 to n-r0-1           
//  *   *         3   0 to n-r1-1   STAR LOGIC
//   * *          2   0 to n-r2-1
//    *           1   0 to n-r3-1


#include<bits/stdc++.h>
using namespace std;

int main()
{
   for (int row = 0; row < 4; row++)
   {
      for (int col = 0; col < row; col++)
      {
         cout << " ";
      }
      for (int col = 0; col < 4-row; col++)
      {
         if(col == 0 || col == 4-row-1)
         {
         cout << "* ";
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



// * * * *  * * * *
// * * *      * * *
// * *          * *
// *              *
// *              *
// * *          * * 
// * * *      * * * 
// * * * *  * * * *


#include<bits/stdc++.h>
using namespace std;

int main()
{

// * * * * * * * * 
// * * *     * * *
// * *         * *
// *             *

int n=4;
   for(int row = 0; row < n; row++)
   {

      //inverted pyramid 1
      for(int col = 0; col < n-row; col++)
      {
         cout << "*";
      }

      //full pyramid 1
      for(int col = 0; col < 2*row+1; col++)
      {
         cout << " ";
      }

      //inverted pyramid 2
      for(int col = 0; col < n-row; col++)
      {
         cout << "*";
      }

      cout << endl;
   }

   for(int row = 0; row < n; row++)
   {

      //inverted pyramid 1
      for(int col = 0; col < row+1; col++)
      {
         cout << "*";
      }

      //full pyramid 1
      for(int col = 0; col < 2*n-1-2*row; col++)
      {
         cout << " ";
      }

      //inverted pyramid 2
      for(int col = 0; col < row+1; col++)
      {
         cout << "*";
      }

      cout << endl;
   }

}
// * * * *   r0  0
//   * * *   r1  1        space logic
//     * *   r2  2 
//       *   r3  3


// * * * *   r0  n-r0
//   * * *   r1  n-r1        star logic
//     * *   r2  n-r2 
//       *   r3  n-r3




// 1                     r0 -  1= r0+1       odd number col = star
// 2 * 2                 r1 -  2= r1+1       even number col = digit 
// 3 * 3 * 3             r2 -  3= r2+1
// 4 * 4 * 4 * 4         r3 -  4= r3+1


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    n = 4;

   for(int row = 0; row < n; row++)
   {
        for(int col = 0; col < 2*row+1; col++)
        {
            if(col%2 == 0)
            {
                cout << row + 1;
            }
            else 
            {
                cout << "*";
            }
        }
        cout << endl;
   }
   return 0;
}



// 2nd aproach


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    n = 4;

   for(int row = 0; row < n; row++)
   {
        for(int col = 0; col < row+1; col++)
        {
            if(col == row+1-1){
                cout << row+1;
            }
            else
            {
                cout << row+1 << "*";
            }
        }
        cout << endl;
   }
   return 0;
}

// pattern-
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 3*3*3
// 2*2
// 1


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    n = 4;

   for(int row = 0; row < n; row++)
   {
        for(int col = 0; col < row+1; col++)
        {
            if(col == row+1-1){
                cout << row+1;
            }
            else
            {
                cout << row+1 << "*";
            }
        }
        cout << endl;
   }

for(int row = 0; row < 3; row++)
{
     for(int col = 0; col < 3-row; col++)
     {   

         cout << 3-row;

         if(col != 3 - row - 1)
         {
             cout << "*";
         }

     }
     cout << endl;
}
   return 0;
}



// * * * * * *   r0 = 5                           5
// *       *     r1 = 1 - - - 1
// *     *       r2 = 1 - - 1
// *   *         r3 = 1 - 1
// * *           r4 = 1 1
// *             r5 = 1


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    n = 6;

   for(int row = 0; row < n; row++)
   {
        for(int col = 0; col < n-row; col++)
        {   
            if(row == 0 || row == n-1)
            {   
                cout << "* ";
            }
            else 
            {
                if(col == 0 || col == n-row-1)
                {
                    cout << "* ";
                }
                else 
                {
                    cout << "  ";
                }
            }

        }
        cout << endl;
   }
   return 0;
}


// 1
// 1 _ 2
// 1 _ _ 3
// 1 _ _ _ 4
// 1 2 3 4 5

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    n = 5;

   for(int row = 0; row < n; row++)
   {
        for(int col = 1; col <= row+1; col++)
        {
            if(row == 0 || row == 4)
            {
                cout << col << " ";
            }
            else 
            {
                if(col == 1)
                {
                    cout << col << " ";
                }
                else
                {
                if (row == 1 && col == 2)
                {
                    cout << ""<< row+1;
                }
                else if (row == 2 && col == 3)
                {
                    cout << "  "<< row+1;
                }
                else if(row == 3 && col == 4)
                {
                    cout << "    "<< row+1;
                }
                }

            }
            
        }
        cout << endl;
   }
   return 0;
}


// A 
// A B A 
// A B C B A 
// A B C D C B A 
// A B C D E D C B A 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    n = 5;

   for(int row = 0; row < n; row++)
   {
    char ch;
        for(int col = 1; col <= row+1; col++)
        {
            ch = col + 'A' - 1;
            cout << ch << " ";
        }

        for( char alphabet = ch; alphabet > 'A';)
        {
            alphabet = alphabet - 1;
            cout << alphabet << " ";
        }
        cout << endl;
   }
   return 0;
}


// 1 2 3 4 5
// 2     5
// 3   5
// 4 5 
// 5 


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    n = 6;

   for(int row = 0; row < n; row++)
   {
        for(int col = 1; col < n-row; col++)
        {
            if(col == 1)
            {
                cout << row+1 << " ";
            }
            else if(row == 0)
            {
                cout << col << " ";
            }
            else if(row == 1 && col == 4)
            {
                cout << "    "<< n-1;
            }
            else if(row == 2 && col == 3)
            {
                cout << "  "<< n-1;
            }
            else if(row == 3 && col == 2)
            {
                cout << n-1;
            }
        }
        cout << endl;
   }
   return 0;
}