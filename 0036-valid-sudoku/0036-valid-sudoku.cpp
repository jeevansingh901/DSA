class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<string, int> mpp;
        
        for(int row=0;row<board.size();row++){
            for(int col=0;col<board[0].size(); col++){
                // Single Operation 
                int element= board[row][col];
                int boxNo= (row/3)*3+(col/3);
                 string hashrow= "Row"+ to_string(row)+ to_string(element);
                 string hashcol= "Col"+to_string(col)+ to_string(element);
                  string hashbox= "Box"+to_string(boxNo)+to_string(element);
             
                
                if(board[row][col] !='.'){
                    
                    
                    if((mpp.find(hashrow) !=mpp.end()) || (mpp.find(hashcol) !=mpp.end()) || (mpp.find(hashbox) !=mpp.end())){
                        return false;
                    }
                       
                     mpp[hashrow]++;  
                    mpp[hashcol]++;
                       mpp[hashbox]++;
                       
                }
                
            }
        }
        return true;
        
    }
};