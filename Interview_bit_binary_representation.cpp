string Solution::findDigitsInBinary(int A) {
    string s="";
    if(A==0){
        s=to_string(0);
        return s;
    }
    else{
    while(A>0){
        int r=A%2;
        s+=to_string(r);
        A/=2;
    }
    reverse(s.begin(),s.end());
    return s;
    }
}
