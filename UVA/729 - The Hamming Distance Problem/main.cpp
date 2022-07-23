#include<stdio.h>
#include<string>
#include<iostream>
#include <vector>


using namespace std;
int t,n,h;
vector<string> answer;
int countOnes(string bin){
    int len =bin.size();
    int out=0;
    for(int i=0;i<len;i++){
        if(bin[i]=='1'){
            out++;
        }
    }
    return out;
}
void solve(string result,int idx) {
    if(idx==n){
        if(countOnes(result)==h) {
            answer.push_back(result);
        }
        return;
    }
    solve(result+"0",idx+1);
    solve(result+"1",idx+1);
}
int main () {
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&h);
        solve("",0);
        int len = answer.size();
        for(int i=0;i<len;i++){
            cout<<answer[i]<<endl;
        }
        answer.clear();
        if(t){
            cout<<endl;
        }
    }
    return 0 ;
}