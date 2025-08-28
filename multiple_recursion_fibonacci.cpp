#include <bits/stdc++.h>
using namespace std;
// This is function to return n_th fibonacci number using multiple recursion
int fibonacci_with_recursion(int n)
{
    if (n <= 1)
        return n;
    int last = fibonacci_with_recursion(n - 1);
    int second_last = fibonacci_with_recursion(n - 2);
    return last + second_last;
}

int main()
{
    int n;
    cout << "Enter the nth value of fibonacci you want to find" << "\n";
    cin >> n;
    int result = fibonacci_with_recursion(n);
    cout << result << "\n";
}

/*This is code is only good for small values of n, it has time complexity of 2^n. Thus there are better ways to calulate fibonacci with much more efficiency. 
We can use DP (Dynamic programming) to reduce the time complexity by a lot. Just make an array dp and store all the computed values of f(n) into it,
always check if f(n) is available in dp before calculating it. Will commit a fibonacci program with dp in it.
*/