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
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"X";
            }
        }
        cout<<nn;
    }
    return 0;
}
/*
5 //if ypou use cout<<"X ";
    X
   X X
  X X X
 X X X X
X X X X X

5 ///if you use cout<<"X";
    X
   XX
  XXX
 XXXX
XXXXX
*/