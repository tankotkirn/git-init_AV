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
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"X";
        }
        int space=2*(n-i);
        for(int l=1;l<=space;l++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"X";
        }
        cout<<nn;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"X";
        }
        int space=2*(n-i);
        for(int l=1;l<=space;l++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"X";
        }
        cout<<nn;
    }

    return 0;
}
/*
5
XXXXXXXXXX
XXXX  XXXX
XXX    XXX
XX      XX
X        X
X        X
XX      XX
XXX    XXX
XXXX  XXXX
XXXXXXXXXX
*/