#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    static int r=0;

    if(n>0){
        r++;
        
        return fun(n-1) + r;

    }
    return 0;

}

int main(){

    int x;
    x=fun(5);
    cout<<x;

    
    return 0;
}
