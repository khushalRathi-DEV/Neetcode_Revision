class Solution:
    def isValid(self, s: str) -> bool:
      if len(s) % 2 == 1: 
        return False
      stack = []
      for c in s:
        if c == '{' or c == '(' or c == '[':
          stack.append(c)
        elif c == ']':
          if(len(stack) > 0 and stack[-1] == '['): 
            stack.pop()
            continue
          else:
            return False
        elif c == '}':
          if(len(stack) > 0 and stack[-1] == '{'):
            stack.pop()
            continue
          else:
            return False
        elif c == ')':
          if(len(stack) > 0 and stack[-1] == '('): 
            stack.pop()
            continue
          else:
            return False
      return len(stack)
#######################
      #  d = {'(':')', '{':'}','[':']'}
      #   stack = []
      #   for i in s:
      #       if i in d:  
      #           stack.append(i)
      #       elif len(stack) == 0 or d[stack.pop()] != i: 
      #           return False
      #   return len(stack) == 0 


  ##cpp code 
#   class Solution {
# public:
#     bool isValid(string s) {
#      stack<char> c;
#      for(char x:s){
#          if(x=='(' || x=='{' || x=='[')
#          c.push(x);
#          else if(c.empty() || x==')' && c.top()!='('
#                  || x=='}' && c.top()!='{'
#                   || x==']' && c.top()!='[' )
#             return false;
#             else
#             c.pop();
#      }  
#      return c.empty();
#     }
# };