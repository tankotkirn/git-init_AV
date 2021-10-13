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
    cin>>n; /* more efficient is to print 
    spaces as 1 to n-row no. 
    and stars as 2*row no. - 1*/
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<'*';
        }
        for(int j=1;j<=i-1;j++){
            cout<<'*';
        }
        cout<<nn;
    }
    for(int i=n; i>=1;i--){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        for(int j=i-1;j>=1;j--){
            cout<<'*';
        }
        cout<<nn;
    }
    return 0;
}
/*
10
         *  
        *** 
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/