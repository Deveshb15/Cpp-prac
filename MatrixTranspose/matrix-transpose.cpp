#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, column;
    cin>>row>>column;

    int a[row][column];
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < column; ++j){
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < row; ++i){
        for(int j = 0; j < column; ++j){
            cout<<" "<<a[i][j];
            if(j == column-1){
                cout<<endl;
            }
        }
    }

    int transpose[row][column];

    for(int i = 0; i < row; ++i){
        for(int j = 0; j < column; ++j){
            transpose[j][i] = a[i][j];
        }
    }

    for(int i = 0; i < column; ++i){
        for(int j = 0; j < row; ++j){
            cout<<" "<<transpose[i][j];
            if(j == row-1){
                cout<<endl;
            }
        }
    }

    return 0;
    
}


