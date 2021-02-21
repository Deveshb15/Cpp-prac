#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int st, int en){
    int pivot = arr[en-1];
    int i = st-1;

    for(int j = st; j<en-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr, i+1, en-1);
    return i+1;
}

void quickSort(int arr[], int st, int en){

    if(st < en){
        int pi = partition(arr, st, en);

        quickSort(arr, st, pi-1);
        quickSort(arr, pi+1, en);
    }
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n);
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
