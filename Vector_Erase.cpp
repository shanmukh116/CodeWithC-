#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> v;
    int c;
    cin>>c;
    int x,k,a,b;
    for(int i;i<c;i++){
        cin>>x;
        v.push_back(x);
    } 
    cin>>k;
    v.erase(v.begin()+k-1); 
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
