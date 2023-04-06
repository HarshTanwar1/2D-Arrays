// WAVE PRINT OF A MATRIX 



#include<bits/stdc++.h>
using namespace std;

class Solution {
  public :
    void making_wave(vector<vector<int> > v)
    {
      cout<<endl<<endl<<"Your wave form \n";
      for(int i = 0;i<v[0].size();i++)
      {
        if((i & 1) == 0)
        {
          for(int j = 0;j<v.size();j++)
          {
            cout<<v[j][i]<<" ";
          }
        }
        else
        {
          for(int j = (v.size()-1) ;j>=0;j--)
          {
            cout<<v[j][i]<< " ";
          }
        }
      }
    }
};

int main()
{
  vector<vector<int> > arr;
  // vector<int> a = {1,2,3};
  // vector<int> b = {4,5,6};
  // vector<int> c = {7,8,9};
  // vector<int> d = {10,11,12};
  // vector<int> e = {13,14,15};

  // arr.push_back(a);
  // arr.push_back(b);
  // arr.push_back(c);
  // arr.push_back(d);
  // arr.push_back(e);

  int rows,cols;
  cin>>rows>>cols;
  for(int i = 0;i<rows;i++){
    vector<int> temp;
    int x;
    for(int j = 0;j<cols;j++){
      cin>>x;
      temp.push_back(x);
    }
    arr.push_back(temp);
  }


  cout<<"BEFORE MAKING WAVE \n";
  for(int i = 0;i<arr.size();i++){
    for(int j = 0;j<arr[i].size();j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  Solution obj;
  obj.making_wave(arr);

  return 0;
}