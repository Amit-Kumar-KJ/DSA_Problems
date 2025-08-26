#include<bits/stdc++.h>
using namespace std;

void reverse_of_array(int arr[], int size) {
    int l = 0; int r = size - 1;
    for ( l=0; l<=r; l++){
        swap(arr[l],arr[r]);
        r--;
    }
}

int main(){
    int arr[] = {3,4,6,7,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse_of_array(arr, size);
    cout << "Reversed array: ";
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}