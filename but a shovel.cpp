#include<bits/stdc++.h>
using namespace std;
int main(){

    int k,r;
    cin>>k>>r;
    int result = 1;
    while(((k*result)%10)!=0 && ((k*result))%10!=r){
        result++;
    }
    cout<<result;
    return 0;

}
