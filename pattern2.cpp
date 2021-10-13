#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nn "\n"
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007

int main()
{
    FIO;
    int n,n1,j,i;
    cin>>n;
    n1=n*(n+1)/2;
    for(i= n;i>=1;i--){
        for(j=i;j>=1;j--){
            cout<<n1-j+1<<" "; /* if u want like 15,14 
            then go for cout<<n1 and n1-- ignore n1-j+1*/

            
            //n1--;
        }
        n1-=i;
        cout<<nn;
    }
    return 0;
}
/*
10
46 47 48 49 50 51 52 53 54 55    
37 38 39 40 41 42 43 44 45       
29 30 31 32 33 34 35 36
22 23 24 25 26 27 28
16 17 18 19 20 21
11 12 13 14 15
7 8 9 10
4 5 6
2 3
1
*/