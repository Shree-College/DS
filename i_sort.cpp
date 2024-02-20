#include<iostream>
using namespace std;
int main(){
    int n,x=1;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(key<arr[j] && j>=0){
             arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
    }
    cout<<"Sorted array-\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}