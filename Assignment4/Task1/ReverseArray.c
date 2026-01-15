#include <stdio.h>

int main(){
    int arr[] = {2,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arrReverse[n];

    for(int i; i<n ;i++){
        arrReverse[i-1] = arr[(n-i)-1];
        printf(" %d ", arrReverse[i-1]);
    }
}