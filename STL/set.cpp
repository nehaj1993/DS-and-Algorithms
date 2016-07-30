#include<iostream>
#include<set>
using namespace std;

void print_set(set<int> s)
{
  set<int>::iterator i;
  cout << "Elements of the set : ";
  for(i=s.begin(); i!=s.end();i++)
    cout << *i << " ";
  cout << endl;
}

int main()
{
  int n,i,x;
  int arr[] = {1,2,3,4,5};

  // Initialize the elements of set
  set<int> input(arr, arr+5);
  print_set(input);

  // Erase element in the set
  cout << "Erasing 4" << endl;
  input.erase(4);
  print_set(input);

  // Search an element in the set
  set<int>::iterator it;
  it =  input.find(3);
  cout << "Found : " << *it << endl;

  // Size of the set
  cout << "Size of the set is : " << input.size() << endl;

  // Insert duplicate element in the set
  input.insert(2);
  print_set(input);

  return 0;
}
