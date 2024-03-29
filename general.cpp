#include<iostream>
int LS(int arr[],int n);
int BS(int arr[],int n);
int B_sort(int arr[],int n);                                                        
int I_sort(int arr[],int n);
int S_sort(int arr[],int n);
using namespace std;
int main(){
    int n,key,a,b;
    cout<<"Enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sorting technique\n";
    cout<<"1 for Bubble Sort\n2 for Insertion Sort\n3 for Selection sort\n";
    cin>>a;
    switch (a){
        case 1:
            cout<<"We are using Bubble sort technique\n";
            arr[n]=B_sort(arr,n);
            break;
        case 2:
            cout<<"We are using Insertion sort technique\n";
            arr[n]=I_sort(arr,n);
            break;
        case 3:
            cout<<"We are using Selection sort technique\n";
            arr[n]=S_sort(arr,n);
            break;
    }
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Enter the searhing Technique\n";
    cout<<"1 for Linear Search\n2 for Binary Search\n";
    cin>>b;
    switch(b){
        case 1: 
            cout<<"We are using Linear search:\n";
            key=LS(arr,n);
            cout<<"The element is found at location "<<key<<endl;
        case 2:
            cout<<"We are using Binary Search:\n";
            key=BS(arr,n);    
            cout<<"The element is found at location "<<key<<endl;
    }

    return 0;
}


int LS(int arr[],int n){
    int key;
    string str=("Element not found");
    cout<<"Enter element to find\n";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    cout<<str;
    return 0;
}
int BS(int arr[],int n){
    int key;
    string str=("Element not found");
    cout<<"Enter element to found:";
    cin>>key;
    int L=0,H=n;
    while(L<=H){
        int mid=(L+H)/2;
        if (key==arr[mid]){return mid;}
        else if(key < arr[mid]){H=mid-1;}
        else{L=mid+1;}
    }
    cout<<str;
    return 0;
}
int B_sort(int arr[],int n){
    int x=1;
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
    return arr[n];
}
int I_sort(int arr[],int n){

        for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(key<arr[j] && j>=0){
            arr[j + 1] = arr[j];
            j--;
        }
    arr[j+1] = key;
    }
    return arr[n];
}
int S_sort(int arr[],int n){
        for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[n];
}
