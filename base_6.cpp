#include<iostream>
#include<bits/stdc++.h>
#include <string>
#include <sstream>
char reVal(int num)
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}

// Utility function to reverse a string
void strev(char *str)
{
	int len = strlen(str);
	int i;
	for (i = 0; i < len/2; i++)
	{
		char temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}
}

char* fromDeci(char res[], int base, int inputNum)
{
	int index = 0; // Initialize index of result

	// Convert input number is given base by repeatedly
	// dividing it by base and taking remainder
	while (inputNum > 0)
	{
		res[index++] = reVal(inputNum % base);
		inputNum /= base;
	}
	res[index] = '\0';

	// Reverse the result
	strev(res);

	return res;
}
using namespace std;
int main(){
   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int n;
     cin>>n;
       string s;
      cin.ignore();
       getline(cin,s);
       int count=0;
          int i;
     vector<int> vect;
    stringstream ss(s);
    while (ss >> i)
    {
        vect.push_back(i);

        if (ss.peek() == ',')
            ss.ignore();
    }

     int b[n]={0};
     	char res[100];
     for(int i=0;i<n;i++){
       b[i]=atoi(fromDeci(res, 6,vect[i]));
     }
    int ans=0;
    int c[n];
    for(int i=0;i<n;i++){
        int m=b[i],sum=0;
        while(m!=0){
            sum+=(m%10);
            m/=10;
        }
        c[i]=sum;
    }
   /* for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
     cout<<endl; */
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(i<j && c[i]>c[j]){
                 ans++;
             }
         }
     }
     cout<<ans; 
	return 0;
}
