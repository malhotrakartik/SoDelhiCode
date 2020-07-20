#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,left=0,right=0,sum=0;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the 2-D array";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            cout<<"";
        }
        cout<<endl;
    }
    
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                left += arr[i][j];
                
            }
            
            if(i == n-j-1){
                right += arr[i][j];
            }
        }
    }
    

   
    
    sum=  abs(left-right);
    
    
    cout<<"The absolute sum is ";
    cout<<sum;
    
    
    
    
	    
}