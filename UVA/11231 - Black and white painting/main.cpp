#include <iostream>

using namespace std;

int main()
{
    int n,m,c;
    while(cin>>n>>m>>c &&n&&m){
            int answer=0;
            int answern=n-7;
            int answerm=m-7;
            int tmp = answerm*answern;
            if(tmp%2==1)
                    answer=(tmp/2)+c;
            else
                answer=tmp/2;


            cout<< answer<<endl;

    }

    return 0;
}
