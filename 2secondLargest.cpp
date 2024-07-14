#include<iostream>
#include<climits>
using namespace std;


//Better method (Time Complexity is O(2n))
/*int main(){
    int arr[]={5,3,6,2,1,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"size of array is:"<<n<<endl;
    cout<<"maximum element is:"<<max<<endl; 
    
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=max) smax=arr[i];
    }
    cout<<"second largest element in array is:"<<smax;
}*/


int main(){
    int arr[]={5,3,6,2,1,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
           smax=max;
           max=arr[i];
        } 
        else if(arr[i]>smax && arr[i]!=max){
               smax=arr[i]; 
        }
    }
    cout<<"size of array is:"<<n<<endl;
    cout<<"maximum element is:"<<max<<endl; 
    cout<<"second largest element in array is:"<<smax;
    
}