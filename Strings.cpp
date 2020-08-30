#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    char c,d;
    cin>>a;
    cin>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    c=a[0];
    d=b[0];
    a[0]=d;
    b[0]=c;
    cout<<a<<" "<<b; 
  
    return 0;
}
