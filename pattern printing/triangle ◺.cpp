#include<iostream>
using namespace std;
int main (){
    // right angle triangle ◺
    int size;
    cout<<"enter the size : ";
    cin>>size;
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
