Set Matrix Zero
Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

Examples:

Examples 1:

Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.
 
Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0
Solution
Disclaimer: Don’t jump directly to the solution, try it out yourself first.

Problem Link.



Solution:
#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	vector<pair<int,int>> position;
	int index=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
			{
				
				
				position.push_back(make_pair(i,j));
				
				 ++index;
				 
			}
		}
	}
	for(int i=0;i<index;i++)
	{
		
		int z=position[i].first;
		for(int j=0;j<m;j++)
		{
			if(matrix[z][j]!=0)
			{
				matrix[z][j]=0;
			}
		}
		int y=position[i].second;
		for(int j=0;j<n;j++)
		{
			if(matrix[j][y]!=0)
			{
				matrix[j][y]=0;
			}
		}
	}
	return matrix;
}


int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: \n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
