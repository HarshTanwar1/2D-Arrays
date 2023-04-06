#include<iostream>
#include<climits>
using namespace std;


bool search(int arr[][100],int rows,int cols,int key)
{
  for(int i = 0;i<rows;i++)
  {
    for(int j = 0;j<cols;j++)
    {
      if(key == arr[i][j])
      {
        return true;
      }
    }
  }

  return false;
}


int max_find (int arr[][100],int rows,int cols)
{
  int maxi = INT_MIN;
  for(int i = 0;i<rows;i++)
  {
    for(int j = 0;j<cols;j++)
    {
      if(arr[i][j]>maxi)
      {
        maxi = arr[i][j];
      }
    }
  }

  return maxi;

}


int min_find(int arr[][100],int rows,int cols)
{
  int mini = INT_MAX;
  for(int i = 0 ;i<rows;++i)
  {
    for(int j = 0;j<cols;++j)
    {
      if(arr[i][j] < mini)
      {
        mini = arr[i][j]; 
      }
    }
  }

  return mini;
}



int main()
{
  int rows,cols;
  cin>>rows>>cols;
  int arr[100][100];
  for(int i = 0;i<rows;i++)
  {
    for(int j = 0;j<cols;j++)
    {
      cin>>arr[i][j];
    }
  }

  int key;
  cin>>key;
  cout<<"GIVEN ELEMENT IS ";
  if(search(arr,rows,cols,key))
  {
    cout<<"PRESENT\n";
  }

  else
  {
    cout<<"ABSENT\n";
  }

  cout<<"MINIMUM ELEMENT IN ARRAY : "<<min_find(arr,rows,cols)<<endl;
  cout<<"MAXIMUM ELEMENT IN ARRAY : "<<max_find(arr,rows,cols)<<endl;

}