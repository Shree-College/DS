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
    while(x<n){
        for(int i=0;i<n-x;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        x++;
    }
    cout<<"Sorted array-\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}