class Solution {
  public:
      int evalRPN(vector<string>& tokens) {
          ios_base::sync_with_stdio(false);
          cin.tie(0);cout.tie(0);
          stack<int>st;
          for(int i=0;i<tokens.size();i++){
            string x = tokens[i];
            if (x != "+" && x != "-" && x != "*" && x != "/"){
              st.push(stoi(tokens[i]));
            }else{
              int num1 = st.top();st.pop();
              int num2 = st.top();st.pop();
              if(tokens[i] == "+"){
                st.push(num1+num2);
              }else if(tokens[i] == "-"){
                st.push(num2-num1);
              }else if(tokens[i] == "*"){
                st.push(num1*num2);
              }else if(tokens[i] == "/"){
                st.push(num2/num1);
              }
            }
          }
  
          return st.top();
      }
  };