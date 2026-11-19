/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int longValidParen(string s) {
    stack<int> st;
    st.push(-1);
    int maxLen = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();

            if (st.empty()) {
                st.push(i);
            } else {
                maxLen = max(maxLen, i - st.top());
            }
        }
    }

    return maxLen;
}

int main() {
    string s;
    getline(cin, s);

    cout <<  longValidParen(s) << endl;
    return 0;
}