class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans; // Create a 2D vector to store the result
    
    for(int i=0; i<numRows; i++) { // Loop through each row
        if(i == 0) {
            ans.push_back({1}); // For the first row, push {1} into ans
        }
        else if(i == 1) {
            ans.push_back({1, 1}); // For the second row, push {1, 1} into ans
        }
        else {
            vector<int> temp(i + 1); // Create a vector of size i+1
            
            temp[0] = 1; // Set the first element to 1
            
            for(int j = 1; j < i; j++) {
                temp[j] = ans[i - 1][j] + ans[i - 1][j - 1]; // Calculate the middle elements
            }
            
            temp[i] = 1; // Set the last element to 1
            
            ans.push_back(temp); // Push the temp vector into ans
        }
    }
    
    return ans; // Return the resulting Pascal's Triangle
}

};