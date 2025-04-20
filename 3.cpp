#include<bits/stdc++.h>
using namespace std;
int main()
{
    // A) Brain-rot problem

    // int i = 1;
    // for ( ; ;)
    // {   
    //     cout << "Value of i is " << i << endl;
    //     if(i < 5)
    //     {
    //         cout << "krishna" << endl;
    //         i = i+1;

    //         if(i >= 5)
    //         {
    //             break;   // this is that condition
    //         }
    //     }
    // }

    // cout << "Verifying that loop is over" << endl; 


    // B) print your name 11 times

    // for(int i = 1; i <= 11; i++)
    // {
    //     cout << "Name no. - " << i << endl;

    //     cout << "Krishna Hitnalikar" << endl;
    // }

    //3) Printing 19 table 

    // for(int i = 1; i <= 10; i++)
    // {
    //     cout << "19 * " << i << " = " << 19*i << endl;
    // }


    // 4) Print 0 to 100 all even numbers

    cout << "All even numbers" << endl;
    for(int i = 0; i <= 100; i++)
    {

        if(i%2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
    
}