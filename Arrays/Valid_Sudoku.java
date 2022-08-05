class Solution {
    public boolean isValidSudoku(char[][] board) {
        HashSet<String> seen = new HashSet();
        for(int i = 0; i < 9; i ++){
            for(int j = 0; j < 9; j ++){
               
                if(board[i][j] != '.'){
                     int current_element = board[i][j];
                    if(!seen.add(current_element + "found in row " + i) || !seen.add(current_element + " found in column " + j)  ||  !seen.add(current_element +"found in sub box "+ i/3 + "-" + j/3) )
                        return false;
                }
            }
        }
        return true;
    }
}
