#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int> > A) {
	vector<int> result;
	int i;
	int upper_row=0,lower_row=A.size()-1;
	int left_column=0,right_column=A[0].size()-1;
	while(upper_row <= lower_row && left_column <= right_column)
	{
	    for(i=left_column;i<=right_column;i++)
	    result.push_back(A[upper_row][i]);
	    upper_row++;

	    for(i=upper_row;i<=lower_row;i++)
	    result.push_back(A[i][right_column]);
	    right_column--;

	    if(upper_row <= lower_row)
	    {
	        for(i=right_column;i>=left_column;i--)
	        result.push_back(A[lower_row][i]);
	        lower_row--;
	    }

	    if(left_column <= right_column)
	    {
	        for(i=lower_row;i>=upper_row;i--)
	        result.push_back(A[i][left_column]);
	        left_column++;
	    }
	}
	// DO STUFF HERE AND POPULATE result
	return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

int main()
{
	vector<vector<int> > input;
	vector<int> output;
	int r,c,i,j,x;
	cout << "Enter number of rows : ";
	cin >> r;
	cout << "Enter number of columns: ";
	cin >> c;
	for(i=0;i<r;i++)
	{
		vector<int> row;
		for(j=0;j<c;j++)
		{
			cin >> x;
			row.push_back(x);
		}
		input.push_back(row);
	}

	output = spiralOrder(input);

	for(i=0;i<output.size();i++)
	cout << output[i] << " ";

	return 0;
}
