// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int coeff = 1;
    
    for(int i = 0; i<n; i++){
        
        for(int spaces = 1; spaces <= n-i; spaces++){
            cout<<" ";
        }
        
        for(int j =0; j<=i; j++){
            if(j==0 || i==0){
                coeff = 1;
            }
            else{
                coeff = coeff * (i-j+1) / j;
            }
            cout<<coeff<< " ";
        }
        cout<<endl;
    }

    return 0;
}