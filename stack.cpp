#include<iostream>
using namespace std;
#define N 10
class S{
private:
int top=-1;
int arr[N];
public:
void push(int x){
    if(top==(N-1))
    {cout<<"Stack full\n";}
    else{
    top++;
    arr[top]=x;
    }
}
int pop(){
    if((top==(-1))){
        cout<<"Stack is empty\n";
        return -1;
    }
    else{
        int data=arr[top];
        top--;
        return data;
    }
}
void print(){
    if(!(top==(-1))){
        for(int i=0;i<top;i++){
            cout<<arr[i]<<"|";
        }
        cout<<endl;
    }
    else{
        cout<<"Stack is empty\n";
    }
}
};

int main(){
    S obj;
    obj.print();
    int a=11;
    for(int i=0;i<N;i++){
        obj.push(a);
        a=a+1;
    }
    obj.print();
    for(int i=0;i<5;i++){
        int j=obj.pop();
        if(!(j==-1))
        cout<<"The element "<<j<<" is removed from the stack\n";
    }
    obj.print();
}
