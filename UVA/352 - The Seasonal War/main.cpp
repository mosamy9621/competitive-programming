#include <iostream>
#include <vector>
#include<string>

using namespace std;
int dr[]={0,1,0,-1,-1,1,-1,1};
int dc[]={1,0,-1,0,1,1,-1,-1};
vector<vector<bool>> VISTED;
vector<vector< int>>matrix;
int floodfill(int r ,int c ,int SIZE){
    if(r<0 || c <0 || r>=SIZE ||c>=SIZE)
        return 0 ;
    if(matrix[r][c]!=1)
        return 0;
    if(VISTED[r][c])
        return 1;
    VISTED[r][c]=true;
    for(int i=0;i<8;i++){
       floodfill(r+dr[i],c+dc[i],SIZE);
    }
    return 1 ;

}


int main()
{

    int n,counter=1;

    while(scanf("%d",&n)!=EOF){
    VISTED.resize(n);
    matrix.resize(n);
    char tmp[30];
    for(int i=0;i<n;i++){
            VISTED[i].assign(n,false);
            scanf("%s",&tmp);
        for(int j=0;j<n;j++){

            matrix[i].push_back(tmp[j]-'0');

        }
    }
    int answer=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==1&&!VISTED[i][j]){
                answer+=floodfill(i,j,n);
            }
        }


    }

    printf("Image number %d contains %d war eagles.\n",counter++,answer);
    VISTED.clear();
    matrix.clear();
    }
    return 0;
}
