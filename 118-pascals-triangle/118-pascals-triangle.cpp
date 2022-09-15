class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>solution;
        vector<int>row;
        int count = 0;
        
        row.push_back(1);
        solution.push_back(row);
        
        for(int i = 0; i < numRows-1; i++){
            //cout << "count" << endl;
            row.clear();
            row.push_back(1);
            for(int j = 0; j < count; j++){
                row.push_back(solution[i][j]+solution[i][j+1]);
                //cout << solution[i][j] << endl;
                //cout << j << endl;
            }
            row.push_back(1);
            solution.push_back(row);
            count++;
        }
        
        return solution;
    }
};