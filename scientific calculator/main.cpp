#include <iostream>
#include <bits/stdc++.h>    //
#include <iomanip>
#include <complex>          //
using namespace std;

int main()
{
    //int number, hsin;

   float number, htan, e = 2.71828;
    cout << "Enter your number";
    cin >> number;

    // This is the math formula for tanh
    htan =  ((pow(e,number)-pow(e,-number))/2) /
            ((pow(e,number)+pow(e,-number))/2);

    cout << "This is tanh " << htan;


    return 0;
}



/* This is sinh formula
int sinh(int)
{
    float number, hsin, e = 2.71828;


    cout << "Enter your number";
    cin >> number;

    hsin = (pow(e,number)-pow(e,-number))/2;

    cout << "This is sinh " << hsin;

    return 0;
} */


/* This is cosh formula
int cosh(int)
{
    float number, hcos, e = 2.71828;


    cout << "Enter your number";
    cin >> number;

    hcos = (pow(e,number)+pow(e,-number))/2;

    cout << "This is sinh " << hcos;

    return 0;
} */

/* This is tanh formula
int tanh(int)

{
    float number, htan, e = 2.71828;


    cout << "Enter your number";
    cin >> number;

    htan =  ((pow(e,number)-pow(e,-number))/2) /
            ((pow(e,number)+pow(e,-number))/2);

    cout << "This is tanh " << htan;
} */

/* This is a fibonacci series
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << " " << t1;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
    }
*/

/* This is permutation or combination based on the formulas.
   We have to use int fact to get the factorial for the formula.

int fact(int n) {           //formula for factorial not working currently i have to get back it
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
int main() {                //formula for combination and permutation nor working due to the need of factorial.
   int n, r, comb, per;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"\nEnter r : ";
   cin>>r;
   comb = fact(n) / (fact(r) * fact(n-r)); //formula for the combination
   cout << "\nCombination : " << comb;
   per = fact(n) / fact(n-r);              //formula for the permutation
   cout << "\nPermutation : " << per;
   return 0;
}
*/

/* Pascal's triangle

#include <iostream>
using namespace std;

int main()
{
    int rows, coef = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }

    return 0;
}

*/


