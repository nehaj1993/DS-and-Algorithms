#include<iostream>
#include<vector>
#include<limits>
using namespace std;

/* Given an array consisting of n positive integers, and an integer k.
ls
 Find the largest product subarray of size k,
i.e., find maximum produce of k contiguous elements in the array where k <= n.
Example :
Input: arr[] = {1, 5, 9, 8, 2, 4,
                 1, 8, 1, 2}
       k = 6
Output:   4608
The subarray is {9, 8, 2, 4, 1, 8}

Input: arr[] = {5, 0, 2, 6, 9, 2, 8}
       k = 3
Output:   144
The subarray is {9, 2, 8}
*/

void max_product(vector<int> input,int k)
{
  int n1=0,i=0;
  long int max_so_far=INT_MIN,max_till_here=1;
  while(i<input.size())
  {
    if(input[i] == 0)
    {
      max_so_far = (max_so_far > 0) ? max_so_far : 0;
      n1 = 0;
      max_till_here = 1;
    }
    else if( n1 == k)
    {
      max_till_here = (max_till_here * input[i]) / input[i-k];
      max_so_far = (max_so_far > max_till_here) ? max_so_far : max_till_here;
    }
    else
    {
        max_till_here *= input[i];
        n1 = n1+1;
        if(n1==k)
        {
          max_so_far = (max_so_far > max_till_here) ? max_so_far : max_till_here;
        }
    }
    i++;
  }

  cout << max_so_far;
}

int main()
{
  vector<int> input;
  int n,x,k,i;
  cout << "Enter the number of elements : ";
  cin >> n;
  cout << "Enter the value of k : ";
  cin >> k;
  for(i=0;i<n;i++)
  {
    cin >> x;
    input.push_back(x);
  }
  max_product(input,k);
  return 0;
}
