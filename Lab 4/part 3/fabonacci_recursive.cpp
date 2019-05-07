#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

int recursive(int n){
    if (n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return recursive(n-1)+recursive(n-2);
    }
}
int main(){
    int fn,n;
    double duration;
    time_t begin,end;
    cin>>n;
    begin=clock();
    fn=recursive(n);
    end=clock();
    duration=end-begin;
    cout<<fn<<endl;
    cout<<duration;
    return 0;
}
