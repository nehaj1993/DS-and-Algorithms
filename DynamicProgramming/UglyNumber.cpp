#include<iostream>
#include<vector>
using namespace std;
void nth_ugly_number(int n)
{
  if(n==1)
    return;

  vector<int> ugly_number;
  ugly_number.push_back(1);
  int index_of_two=0,index_of_three=0,index_of_five=0;
  int multiple_of_two,multiple_of_three,multiple_of_five;
  int current_ugly_number;

  while(ugly_number.size() <= 150)
  {
    multiple_of_two = 2*ugly_number[index_of_two];
    multiple_of_three = 3*ugly_number[index_of_three];
    multiple_of_five = 5*ugly_number[index_of_five];
    current_ugly_number = min(multiple_of_two, min(multiple_of_three,multiple_of_five));
    if(current_ugly_number == multiple_of_two) index_of_two++;
    if(current_ugly_number == multiple_of_three) index_of_three++;
    if(current_ugly_number == multiple_of_five) index_of_five++;
    ugly_number.push_back(current_ugly_number);
  }

  cout << ugly_number[n-1];
}

int main()
{
  nth_ugly_number(150);
  return 0;
}
