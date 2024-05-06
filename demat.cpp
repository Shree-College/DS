#include<iostream>
using namespace std;
class Account{
    private:
    string Name="Shree";
    int depo=10000;
    int arr[10];
    char Stocks[10];
    int i=0,j=-1;
    public:
    void GetInfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Balance: "<<depo<<endl;
        if(j>-1){
        cout<<"Stocks: "<<j+1<<endl;}
        else{
            cout<<"Stocks: "<<0<<endl;
        }

    }
    void Withdraw(int x){
        if(x<depo){
        depo=depo-x;
        cout<<x<<" amount is debited from the account\n";
        cout<<"Balance remaining: "<<depo<<endl;
        arr[i]= -x;
        i++;
        }
        else{
            cout<<"Insufficient Money\n";
        }
    }
    void Buy(int x)
    {   if(depo>x){
        cout<<"The stock is purchased\n";
        depo=depo-x;
        arr[i]=-x;
        i++;
        if(j==-1){j=0;}
        if(x==20){Stocks[j]='A';}
        if(x==200){Stocks[j]='B';}
        if(x==2000){Stocks[j]='C';}
        j++;
        }
    else{
        cout<<"Insufficient Money\n";
    }

    }
    void sell(int x){
        if(j>-1){
        cout<<"The stock is sold\n";
        depo=depo+x;
        arr[i]=+x;
        i++;
        j--;
        }
        else{
          cout<<"No stocks\n";
        }
    }
    void trans(){
        for(int w=0;w<i;w++){
        cout<<arr[w]<<endl;
        }
    }
    void Deposite(int x){
        depo=depo+x;
        cout<<x<<" amount is credited to the account\n";
        cout<<"Balance remaining: "<<depo<<endl;
        arr[i]= +x;
        i++;

    }
    void SS(){
        for(int k=0;k<=j;k++){
            cout<<Stocks[k]<<"|";
        }
        cout<<endl;
    }
};
int main(){
    Account c;
    int q;
    Up:
    cout<<"Enter your choice\n1]Get account Info\n2]Deposite money\n3]Withdraw Money\n4]Buy Stocks\n5]Sell Stocks\n6]Check Transactions\n";
    cin>>q;
    switch(q){
    case 1:{
        c.GetInfo();
        break;
    }
    case 2:{
        cout<<"Enter the amount to deposite\n";
        int cash;
        cin>>cash;
        c.Deposite(cash);
        break;
    }
    case 3:{
        cout<<"Enter amount to withdraw\n";
        int p;
        cin>>p;
        c.Withdraw(p);
        break;
    }
    case 4:{
        cout<<"Choose stock to buy\n";
        cout<<"A (20rs)"<<endl;
        cout<<"B (200rs)"<<endl;
        cout<<"C (2000rs)"<<endl;
        char l;
        cin>>l;
        if(l=='A'){
            c.Buy(20);
        }
        if(l=='B'){
            c.Buy(200);
        }
        if(l=='C'){
            c.Buy(2000);
        }
    break;
    }
    case 5:{
        cout<<"Choose Stock to  sold\n";
        c.SS();
        char l;
        cin>>l;
        if(l=='A'){c.sell(20);}
        else if(l=='B'){c.sell(200);}
        else if(l=='C'){c.sell(2000);}
        else{
            cout<<"Invalid Choice\n";
        }
        break;
    }
    case 6:{
        c.trans();
        break;
    }
    default:
        cout<<"Invalid choice\n";
        goto Up;
}
goto Up;
}
