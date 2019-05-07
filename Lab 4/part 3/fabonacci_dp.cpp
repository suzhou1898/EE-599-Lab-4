#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

int recursive(int n,int *p){
    if(*(p+n-1)!=-1){
        return *(p+n-1);
    }
    else{
        if (n == 1) {
            *p = 0;
            return *p;
        } else if (n == 2) {
            *(p + 1) = 1;
            return *(p + 1);
        } else {
            *(p + n - 1) = recursive(n - 1, p) + recursive(n - 2, p);
            return *(p + n - 1);
        }
    }
}

int main(){
    int fn,n;
    double duration;
    time_t begin,end;
    cin>>n;
    int *p=new int [n];
    for(int i=0;i<n;i++){
        *(p+i)=-1;
    }
    begin=clock();
    fn=recursive(n,p);
    end=clock();
    duration=end-begin;
    cout<<fn<<endl;
    cout<<duration;
    return 0;
}
