/**
  https://leetcode.com/problems/sudoku-solver/
  */    
    
   
class Solution {
public:
    
    bool check(int i, int j, vector<vector<char>>& board, char c)
    {
        //
        for(int x = 0; x < 9; x++)
        {
            // checking row
            if(board[x][j] == c) return false;
            // checking column
            if(board[i][x] == c) return false;
            // checking 3 *3 box
            if(board[3*(i/3) + (x/3)][3*(j/3) + (x%3)] == c) return false;
        }
        return true;
    }
    bool solution(vector<vector<char>>& board)
    {
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                // if there is no value stored before
                if(board[i][j] == '.')
                {
                    for(char c = '1'; c<= '9'; c++)
                    {
                        // check value can be store or not
                        if(check(i, j, board,c))
                        {
                            board[i][j] = c;
                            // if this is a valid solution return true else store the character '.'
                            if(solution(board) == true)
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solution(board);
    }
};
