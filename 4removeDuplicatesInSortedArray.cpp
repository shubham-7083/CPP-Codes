#include<iostream>
#include<set>
using namespace std;

/*int main(){
    int arr[]={1,1,2,2,2,3,3,4,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    
    for(int j=i+1;j<n;j++){
       if(arr[i]!=arr[j]){ 
         arr[i+1]=arr[j];
         i++;
       }  
    }
    for(int j=0;j<=i;j++){
        cout<<arr[j]<<" ";
    }
}*/


int main() {
     int arr[]={1,1,2,2,2,3,3,4,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int> st;
    for(int j=0;j<n;j++){
       st.insert(arr[j]);
    }

    for(auto it = st.begin(); it != st.end(); ++it) {
       cout << *it << " ";
    }
    cout<<endl;
    int index=0;
    for(auto it = st.begin(); it != st.end(); ++it) {
        arr[index]=*it;
         index++;
    }
    for(int j=0;j<st.size();j++){
        cout<<arr[j]<<" ";
    }

}