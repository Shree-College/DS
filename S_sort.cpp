#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\nSorted array-\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}