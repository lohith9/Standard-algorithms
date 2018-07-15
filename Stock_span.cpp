// Time-complexity :-O(n).

// Space-complexity :-O(n).

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
                      // stock span problem
int main() {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int span[n]; // storing the stock values
     stack<int>ans;
     ans.push(0);       // pushing the first index element not first element
     
     span[0]=1;   // intialize the span=1
     
     for(int i=1;i<n;i++){
         while(!ans.empty() && a[ans.top()]<=a[i]){  // If suppose stock is not empty and a[current_index_element] is less than before element pop it out
             ans.pop();
         }
         if(ans.empty()){  // if empty then insert value into span
             span[i]=i+1;
         }
         else{
             span[i]=i-ans.top();
         }
         ans.push(i); // pushing another index into the stack
     }
     for(int i=0;i<n;i++){
         cout<<span[i]<<" ";
     }
     cout<<endl;
}

// : )
