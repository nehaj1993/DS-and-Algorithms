#include<iostream>
#include<vector>
using namespace std;

inline void swap(int& a,int& b)
{
  int c;
  c=a;
  a=b;
  b=c;
}

void heapify(int a[],int i,int n)
{
  int min=i;
  int left=2*i+1,right=2*i+2;
  if(left >= n && right >=n)
    return;
  if(left < n && a[left] < a[min])
  {
    min = left;
  }
  if(right < n && a[right] < a[min])
  {
    min=right;
  }
  if(min!=i)
  {
    swap(a[i],a[min]);
    heapify(a,min,n);
  }
}

void create_minheap(int input[],int n)
{
  if(n==1) return;
  int i;
  for(i=(n/2);i>=0;i--)
    heapify(input,i,n);
}

void print_heap(int input[],int n)
{
  if(n==1)
  {
    cout << input[0];
    return;
  }
    swap(input[0],input[n-1]);
    cout << input[n-1] << " ";
    heapify(input,0,n-1);
    print_heap(input, n-1);
}

int main()
{
  int n;
  cout << "Enter the number of elements : ";
  cin >> n;
  int input[n];
  cout << "Enter the elements : ";
  for(int i=0;i<n;i++)
  {
    cin >> input[i];
  }
  create_minheap(input,n);
  cout << "Increading order of elements : ";
  print_heap(input,n);
  return 0;
}
