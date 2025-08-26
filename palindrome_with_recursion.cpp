#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s, int n, int i){
    if (i >= n/2) return true;
    if (s[i] != s[n-i-1]) return false;
    return palindrome(s, n, i+1);

}

int main(){
    string s; 
    cin >> s;
    int n = s.size(); 
     cout << boolalpha; //This gives output in true/false not as 1/0, Can toggle it on and off with this very statement
    cout << "Is this palindrome Y/N : " << palindrome(s, n, 0); 
    cout << "\n" << n;
}