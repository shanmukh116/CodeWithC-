#include <iostream>
#include <cstdio>
using namespace std;
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if(i<=9){
            if(i==1)
            cout<<"one"<<endl;
            if(i==2)
            cout<<"two"<<endl;
            if(i==3)
            cout<<"three"<<endl;
            if(i==4)
            cout<<"four"<<endl;
            if(i==5)
            cout<<"five"<<endl;
            if(i==6)
            cout<<"six"<<endl;
            if(i==7)
            cout<<"seven"<<endl;
            if(i==8)
            cout<<"eight"<<endl;
            if(i==9)
            cout<<"nine"<<endl;
        }
        else{
            if(i%2==0)
            cout<<"even"<<endl;
            else
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
