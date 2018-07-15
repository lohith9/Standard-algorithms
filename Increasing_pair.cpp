// Conditions :-
//  1--> i<j 
//  2--> A[i]<A[j]
// j-i should be maximized
// my solution T.C - O(n^2).

// Solution 1:-
#include <bits/stdc++.h>

using namespace std;
#define val 100000000

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
      }
  int ans=-1,flag=0;
  for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
    if(a[i]<a[j]){
        flag=1;
        ans=j-i;
        break;
      }
      }
      if(flag==1){
      break;
      }
     } 
  cout<<ans;
}

// Solution 2:-
// T.C :- O(n)
#include <bits/stdc++.h>

using namespace std;
#define val 100000000

int main() {
  int n;
  cin>>n;
  int a[n+1];
  for(int i=0;i<n;i++){
      int v;
      cin>>v;
      a[v]=i+1;
  }
  int maxi=-1,pos=val;
  for(int i=0;i<n;i++){
      maxi=max(maxi,a[i+1]-pos);
      pos=min(pos,a[i+1]);
  }
  cout<<maxi;
}
