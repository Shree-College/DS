#include<iostream>
using namespace std;
int BS(int list[],int n,int key){
    int L=0,H=n;
    while(L<=H){
        int mid=(L+H)/2;
        if (key==list[mid]){return mid;}
        else if(key < list[mid]){H=mid-1;}
        else{L=mid+1;}
    }
    return -1;
}
int main(){
    int n, key,temp,i,j;
    cout<<"Enter the size of list\n";
    cin>>n;
    int list[n];
    cout<<"Enter the elements of list\n";
    for(int i=0;i<n;i++){cin>>list[i];}
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (list[i] > list[j]) {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
    }}}
    UP:
    cout<<"\nEnter the Key element to be found\n";
    cin>>key;
    int loc=BS(list,n,key);
    if (loc!=-1){
        cout<<"\nThe element "<<key<<" is found at index "<<loc<<endl;goto UP;
    }
    else{
        cout<<"\nElement not found      Enter the correct element \n";goto UP;
    }
}