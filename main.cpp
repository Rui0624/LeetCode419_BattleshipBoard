//
//  main.cpp
//  LeetCode419_BattleshipsInABoard
//
//  Created by Rui on 1/9/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        if(board.empty()) return 0;
        int m = board.size();
        int n = board[0].size();
        int res = 0;
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                //check the if the [i][j] is the start of the battleship
                if(board[i][j] == '.' || (i > 0 && board[i - 1][j] == 'X') || (j > 0 && board[i][j - 1] == 'X'))
                    continue;
                res++;
            }
        }
        
        return res;
    }
};
