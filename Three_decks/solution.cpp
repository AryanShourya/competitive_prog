#include<iostream>
using namespace std;

void threeDecks(int a,int b,int c){
    if(a>b || b>c){
        cout<<"NO"<<endl;
        return;
    }    
    
    int d1,d2,d3;
    d1=b-a;
    d2=c-b;
    
    if(d1>d2){
            cout<<"NO"<<endl;
            return;
    }
    else{
        a+=d1;
        c-=d1;
    }
    
    d3=c-b;
    if(d3%3==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        threeDecks(a,b,c);
    }
    return 0;
}
