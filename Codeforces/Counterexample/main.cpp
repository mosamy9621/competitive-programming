#include <iostream>
typedef long long int lli;
using namespace std;
lli gcd(lli a,lli b){
    return b==0? a:gcd(b,a%b);
}
int main()
{

    lli l,r,a,b,c;
    cin>>l>>r;
    if(r-l<1)
    {
        cout<<"-1";
        return 0;
    }
    a=l;
    b=l+1;
    if(l%2==1){
        a++;b++;
    }
    c=-1;
    for( lli i =l+2; i<=r;i++  ){
        if(gcd(a,i)>1){
            c=i;
            break;
        }
    }
    if(c==-1)
        cout<<c;
    else{
        cout<<a<<" "<<b<<" "<<c;
    }


    return 0;
}
