#include <iostream>
#include <vector>
#define SIZE 51

using namespace std;
vector<bool> isprime(SIZE);
vector<int> primes;
vector <int> next_primes(SIZE);


int main()
{
    int n,m;
    isprime[0]=isprime[1]=1;
    for(int i=4;i<=SIZE;i+=2)
        isprime[i]=1;
    primes.push_back(2);
    for(int i=3;i<=SIZE;i++){
        if(!isprime[i]){
        for(int j=i*i;j<=SIZE;j+=i)
            isprime[j]=1;
        primes.push_back(i);
        }

    }
    for(int i=0;i<primes.size()-1;i++){

        next_primes[primes[i]]=primes[i+1];
    }

    cin>>n>>m;
    if(next_primes[n]==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO";

    return 0;
}
