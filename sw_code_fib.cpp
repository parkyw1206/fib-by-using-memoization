/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int fib(int n){
    int A[n];
    
    A[0] = 0;
    A[1] = 1;
    for(int i = 2 ; i <= n; i++)
        A[i] = A[i-1] + A[i-2];
    
    return A[n];
    
}
int main()
{
    cout<<"This is for memoization" << endl;
    cout << "Fib for 5: " << fib(5) << endl;
    cout << "Fib for 8: " << fib(8) << endl;
    cout << "Fib for 12: " <<fib(12) << endl;
    cout << "Fib for 15: " << fib(15) << endl;
    return 0;
}
