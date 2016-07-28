#include<iostream>
#include<vector>
using namespace std;

void swap(int& a, int& b)
{
  int c;
  c=a;
  a=b;
  b=c;
}

void bubble_sort(vector<int> &A)
{
  if(A.size() == 1) return;
  if(A.size() == 2 )
  {
    if(A[0] > A[1])
      swap(A[0], A[1]);
    return;
  }
  else
  {
    int i,j;
    for(i=0;i<A.size()-1;i++)
    {
      for(j=0;j<A.size()-i-1;j++)
      {
        if(A[j] > A[j+1])
        {
          swap(A[j], A[j+1]);
        }
      }
    }
  }
}

int main()
{
  int n,x,i;
  vector<int> input;
  cout << "Enter the size of the vector : ";
  cin >> n;
  for(i=0;i<n;i++)
  {
    cin >> x;
    input.push_back(x);
  }
  bubble_sort(input);
  cout << "Array after sorting : ";
  for(i=0;i<input.size();i++)
    cout << input[i] << " ";
  return 0;
}
