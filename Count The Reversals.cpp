//Count The Reversals

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        if(s.length()%2!=0){
            cout<<"-1"<<endl;
        }
        else{
            stack<char> st;
            for(int i=0;i<s.length();i++){
                if(s[i]=='{'){
                    st.push('{');
                }
                else{
                    if(st.empty() || st.top()=='}'){
                        st.push('}');
                    }
                    else{
                        st.pop();
                    }
                }
            }
            float o=0;
            float c=0;
            while(!st.empty()){
                if(st.top()=='{'){
                    o++;
                    st.pop();
                }
                else{
                    c++;
                    st.pop();
                }
            }
            cout<<ceil(o/2.0)+ceil(c/2.0)<<endl;
        }
        
    }
    return 0;
}
