#include<stdio.h>
#include <string.h>
#include<iostream>

using namespace std;
bool visited[30][30]; 
int n,m;
bool graph[30][30];
int dfs(int head) {
    int out = 0;
    for (int i=0;i<n;i++){
        if(graph[head][i] && !visited[head][i] && !visited[i][head]) {
            visited[head][i]=visited[i][head]=true;
            out = max(dfs(i)+1,out);
            visited[head][i]=visited[i][head]=false;
        }  
    }
    return  out;
}


int main (){
    scanf("%d %d",&n,&m);
    while(n&&m){
   
    for(int i=0;i<m;i++) {
        int tmp1,tmp2;
        scanf("%d %d",&tmp1,&tmp2);
        graph[tmp1][tmp2]=graph[tmp2][tmp1]=true;
    }
    int out=0;
    for(int i=0;i<n;i++) {
       out = max(out,dfs(i)); 
     }
    cout<<out<<endl;
    scanf("%d %d",&n,&m);
    memset(visited,0,sizeof(visited));   
    memset(graph,0,sizeof(graph));  
    }
    return 0;
}