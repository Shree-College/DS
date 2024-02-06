#include<iostream>
using namespace std;

int LS(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cout<<"Enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key element\n";
    cin>>key;
    cout<<"The the element "<<key<<" is found on location "<<LS(arr,n,key);
}
