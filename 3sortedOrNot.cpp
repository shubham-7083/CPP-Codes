#include<iostream>
using namespace std;

int main(){
    bool flag=false;
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array:"<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
       if(arr[i]>arr[i+1]) flag=true; 
    }
    if(flag==true) cout<<"Array is not sorted";
    else cout<<"Array is sorted";

}