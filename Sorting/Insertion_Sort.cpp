#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>& input)
{
  int i,j,val;
  for(i=1;i<input.size();i++)
  {
      val = input[i];
      j = i;
      while(j>0 && val < input[j-1])
      {
        input[j] = input[j-1];
        j--;
      }
      input[j] = val;
  }
}

int main()
{
  vector<int> input;
  int n,i,x;
  cout << "Enter the number of elements : ";
  cin >> n;
  for(i=0;i<n;i++)
  {
    cin >> x;
    input.push_back(x);
  }
  insertion_sort(input);
  for(i=0;i<input.size();i++)
    cout << input[i] << " ";
  return 0;
}
