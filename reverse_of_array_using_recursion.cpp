#include<bits/stdc++.h>
using namespace std;

void reverse_of_array_using_for_loop(int l, int arr[], int r) {
    
    for ( l; l<=r; l++){
        swap(arr[l],arr[r]);
        r--;
    }
}

void reverse_using_recusion(int l, int arr[], int r ){
   if (l>=r) return;
   swap(arr[l], arr[r]);
   reverse_using_recusion(l+1, arr, r-1);


}

int main(){
    int arr[] = {3,4,6,7,2};
    int r = sizeof(arr)/sizeof(arr[0]) - 1;
    // reverse_of_array_using_for_loop(0,arr, r);
    // reverse_using_recusion (0, arr, r);
    cout << "Reversed array: ";
    for (int i=0; i <= r; i++){
        cout << arr[i] << " ";
    }
}