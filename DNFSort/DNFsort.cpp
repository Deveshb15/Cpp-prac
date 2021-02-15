#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void dnfSort(int arr[], int n){
    int low = 0, mid = 0, high = n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    
    int arr[] = {1,0,2,2,1,2,0,0,2,1};

    dnfSort(arr, 10);

    for(int i =0; i< 10; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
