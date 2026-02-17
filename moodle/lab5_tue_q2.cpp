#include<bits/stdc++.h>
using namespace std;

// implementation using stack
bool valid_parenthesis(string& s){
    stack<char> st;

    for (char c:s){
        if(c=='a' || c=='c' || c=='e'){
            st.push(c);
        }
        else if (c=='b' || c=='d' || c=='f'){
            if (st.empty()) return false;
            char top = st.top();
            if(c=='b' && st.top() != 'a' ||
               c=='d' && st.top() != 'c' ||
               c=='f' && st.top() != 'e'){
                return false;
               }
            // if matched, then remove 
            st.pop();
        }
    }
    return st.empty();
}

bool bruteforce_check(string s){
    if(s.size()%2 != 0) {
        return false;
    }
    else{
        for(int i=0; i<s.size()/2; i++){
        // initiation(s[i]) == termination(s[s.size()-i])
        if( s[i]=='a' && s[s.size()-i-1]=='b' ||
            s[i]=='c' && s[s.size()-i-1]=='d' ||
            s[i]=='e' && s[s.size()-i-1]=='f' ){
                continue;
            }
        else {
            return false;
        }
        }
        return true;
    }
}

int main(){
    string s;
    cin >> s;
    int value = bruteforce_check(s);
    cout << "bruteforce method : " << (value ? "true" : "false") << endl;
    cout << "stack method : " << (valid_parenthesis(s) ? "true" : "false");
    return 0;
}
