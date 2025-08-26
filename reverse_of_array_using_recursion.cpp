#include<bits/stdc++.h>
using namespace std;

void reverse_of_array_using_for_loop(int l, int arr[], int r) { // Here, l and r are the left and right pointers
    
    for ( l; l<=r; l++){
        swap(arr[l],arr[r]);
        r--;
    }
}

void reverse_using_recusion(int l, int arr[], int r ){ //This is recursion using two pointer
   if (l>=r) return;
   swap(arr[l], arr[r]);
   reverse_using_recusion(l+1, arr, r-1);
}

void reverse_with_one_variable(int i, int arr[], int n){ //This is recursion using single variable
    if (i>= n/2) return;
    swap(arr[i],arr[n-i-1]); // this n-i-1 condition is imp to remember
    reverse_with_one_variable(i+1, arr, n);
}

int main(){
    int n;
    cout << "Enter num of elements for array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements one by one. ";
    for (int i=0; i<n; i++) cin >> arr[i];
    int r = sizeof(arr)/sizeof(arr[0]) - 1;
    // reverse_of_array_using_for_loop(0,arr, r);
    // reverse_using_recusion (0, arr, r);
    reverse_with_one_variable(0, arr, r+1);
    cout << "Reversed array: ";
    for (int i=0; i <= r; i++){
        cout << arr[i] << " ";
    }
}