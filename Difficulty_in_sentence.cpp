#include <bits/stdc++.h>

using namespace std;
int isvowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return 1;
    }
    return 0;
}
int main() {
       ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string s;
	    getline(cin,s);
	    int n=s.size();
	    int conso=0,vowel=0;
	    int consi=0,hard=0,easy=0;
	    for(int i=0;i<n;i++){
	        if(s[i]!=' ' && isvowel(s[i])){
	            vowel++;
	            consi++;
	        }
	        else if(s[i]!=' '){
	            conso++;
	            consi++;
	        }
	        if(consi==4){
	            hard++;
	            while(i<n && s[i]!=' '){
	                i++;
	            }
	            conso=0;
	            consi=0;
	            vowel=0;
	        }
	        else if(i<n && (s[i]==' ' || i==n-1)){
	         if(conso>vowel){
	             hard++;
	         }
	         else{
	             easy++;
	         }
	        }
	    }
	    cout<<5*hard+3*easy<<endl;
	}
}
