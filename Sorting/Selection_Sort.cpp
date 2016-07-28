#include<iostream>
#include<vector>
using namespace std;

/* Get the index of the smallest
** element and then swap it with
** the first element of the
** array into consideration
** at the end of outer loop
*/

void swap(int& a, int& b)
{
  int c;
  c=a;
  a=b;
  b=c;
}

void selection_sort(vector<int>& A)
{
  int i,j,iMin;
  for(i=0;i<A.size();i++)
  {
    iMin = i;
    for(j=i+1;j<A.size();j++)
    {
      if(A[j] < A[iMin])
      {
        iMin = j;
      }
    }
    if(i!=iMin)
      swap(A[i],A[iMin]);
  }
}

int main()
{
  int n,x,i;
  vector<int> input;
  cout << "Enter the size of the array : ";
  cin >> n;
  for(i=0;i<n;i++)
  {
    cin >> x;
    input.push_back(x);
  }
  selection_sort(input);
  cout << "Array after sorting : ";
  for(i=0;i<input.size();i++)
    cout << input[i] << " ";
  return 0;
}
