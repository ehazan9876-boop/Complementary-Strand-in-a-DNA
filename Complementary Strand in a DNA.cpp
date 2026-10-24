#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int x;
    cin>>x;
    string y;
    cin>>y;
    for(int i=0; i<x;i++){

        if(y[i]=='A'){
            cout<<"T";
        }
        else if(y[i]=='T'){
            cout<<"A";
        }
        else if(y[i]=='C'){
            cout<<"G";
        }
        else if(y[i]=='G'){
            cout<<"C";
        }
    }
    cout<<endl;


}




return 0;
}


