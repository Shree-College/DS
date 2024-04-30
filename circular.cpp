#include<iostream>
using namespace std;
#define N 5
class A{
    private:
    int F=-1;
    int R=-1;
    int arr[N];
    public:
    void push(int x){
        if((F==R+1) || (R==N-1 && F==0)){
            cout<<"Queue is full\n";
        }
        else{
            if(R==N-1){R=0;}
            else{R++;}
            arr[R]=x;
            if(F==-1){F=0;}  
        }
    }
 int pop(){
        if(F==-1 || F==R){
            cout<<"Queue is Empty\n";
            return -1;
        }
        int data=arr[F];
        if(F==N-1){F=0;}
        else{F++;}
        return data;
    }
void print(){
        if(F==-1 || R == -1){cout<<"Queue is empty\n";}
        else if(R>=F){
            for(int i=F;i<=R;i++){
                cout<<arr[i]<<" | ";
           }}
        else{
        for(int i=0;i<=R;i++){
                cout<<arr[i]<<" | ";
            }
        for(int i=R+1;i<F;i++){
            cout<<"  | ";
        }
        for(int i=F;i<N;i++){
            cout<<arr[i]<<" | ";
        }
        }
    }
};
int main(){
    A Q;
    int a;
    UP:
    cout<<"Choose the option\n"<<"1]Add an element\n"<<"2]Delete Element\n"<<"3]View queue\n";
    cin>>a;
    switch(a){
    case 1:{
        int b;
        cout<<"Enter an element to add\n";
        cin>>b;
        Q.push(b);
        break;
    };
    case 2:{
        int data=Q.pop();
        if(!(data==-1)){
            cout<<"The element "<<data<<" is deleted\n";
            break;
        }
    }
    case 3:{
        Q.print();
        break;
    }
    default:{
        cout<<"Invalid choice\n";
    }
}
cout<<endl<<endl;
    goto UP;
    return 0;
}
