#include<iostream>
using namespace std;
int main (){
    int size;
    cout<<"enter size : ";
    cin>>size;
    for(int i=0;i<size;i++){
        for(int j=size;j>i;j--){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
