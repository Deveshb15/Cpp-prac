#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int st, int mid, int en){
    int n1 = mid - st +1;
    int n2 = en - mid;

    int a[n1];
    int b[n2];

    for(int i = 0; i<n1; i++){
        a[i] = arr[st+i];
    }
    for(int i =0; i<n2; i++){
        b[i] = arr[mid+1+i];
    }

    int i = 0;
    int j = 0;
    int k = st;
    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int st, int en){
    if(st<en){
        int mid = (st+en)/2;

        mergeSort(arr, st, mid);
        mergeSort(arr, mid+1, en);

        merge(arr, st, mid, en);
    }
}

int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i< n; i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}