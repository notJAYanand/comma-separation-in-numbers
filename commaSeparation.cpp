#include <bits/stdc++.h>
using namespace std;

//Check if decimal is there or not
bool checkDecimal(string s) {
    for(int i=0;i<s.length();i++) {
        if(s[i]=='.')
        {
            return true;
        }
    }
    return false;
}

/* 
    *Keep on separating
*/
string commaSeparation(string s) {
    int n=s.length();
    string res="";
    int c=0;
    if(checkDecimal(s)) {
        int i=n-1;
        while(s[i]!='.') {
            n--;
            res+=s[i];
            i--;
        }
        n--;
        res+=s[i];
    }
    
    for(int i=n-1;i>=0;i--) {
        if(c==3) {
            res+=',';
            res+=s[i];
            c=0;
        }
        else {
            res+=s[i];
        }
        c++;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main() {
    
    string number="20000.903";
    cout<<commaSeparation(number)<<endl;
//     cout<<"Hello World";

    return 0;
}
