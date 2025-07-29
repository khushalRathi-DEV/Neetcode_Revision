class Solution {
  public:
      bool isvalid(vector<char> &temp){
          vector<int>freq(10,0);
          for(int i=0;i<temp.size();i++){
              if(temp[i] == '.')
                  continue;
              if(freq[temp[i]-'1'])
                  return false;
              freq[temp[i]-'1']++;
          }       
          return true;
      }
      bool isValidSudoku(vector<vector<char>>& board) {
          ios_base::sync_with_stdio(false);
          cin.tie(0);cout.tie(0);
          for(auto arr : board){
              if(!isvalid(arr))
                  return false;
          }
          for(int i=0;i<9;i++){
              vector<int>freq(10,0);
              for(int j=0;j<9;j++){
                  if(board[j][i] == '.')
                      continue;
                  if(freq[board[j][i] - '1'])
                      return false;
                  freq[board[j][i]- '1']++;
              }
          }
  
          for(int br = 0;br<9;br += 3){
              for(int bc = 0;bc<9; bc+= 3){
                  vector<int>freq(10,0);
                  for(int i=0;i<3;i++){
                      for(int j=0;j<3;j++){
                          char curr = board[br+i][bc+j];
                          if(curr == '.')
                              continue;
                          if(freq[curr - '1'])
                              return false;
                          freq[curr - '1']++;
                      }
                  }
              }
          }
  
  
          return true;
      }
  };