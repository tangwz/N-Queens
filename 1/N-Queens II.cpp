class Solution {
public:
	int res = 0;
	/*
	 * @brief: 检查当前位置(row, column)能否放置皇后
	 * @param row: 当前行； column: 当前列
	 * @return: 能返回则为1， 不能则为0
	 */
    int check(const int row, const int column, std::vector<int> c){
    	int ok = 1;
    	for(int i = 0; i < row; ++i){
        	//两个点的坐标为(row, column), (i, c[i])
        	//检查这两个点是否在同一列，或对角线上
        	if(column == c[i] || row - i == column - c[i] || row - i == c[i] - column){
            	ok = 0;
            	break;
        	}
    	}
    	return ok;
	}

	int search(const int row, int n, std::vector<int>& c){
    	if(row == n){//终止条件，意味着找到一个可行解
        	++res;
        	return res;
    	}

    	for(int j = 0; j < n; ++j){
        	const int ok = check(row, j, c);
        	if(ok){
            	c[row] = j;
            	search(row + 1, n, c);
        	}
    	}
    	return res;
	}

    int totalNQueens(int n) {
        std::vector<int> c(n, 0);//第i行皇后所在的列编号
        return search(0, n, c);
    }
};