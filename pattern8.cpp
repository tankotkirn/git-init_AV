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
    for(int i=1;i<=3;i++){
        for(int j=1; j<=n;j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<nn;
    }
    return 0;
}
/*
9
    *       *
  *   *   *   *
*       *       *
*/