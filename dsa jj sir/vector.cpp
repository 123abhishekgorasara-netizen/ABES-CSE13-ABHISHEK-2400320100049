#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);
  v.push_back(60);
  v.push_back(70);
  for(int i=0;i<=6;i++)
  cout<<v[i]<<",";
  return 0;
}
