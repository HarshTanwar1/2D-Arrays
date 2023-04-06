#include<bits/stdc++.h>
using namespace std;

void set_values(int arr[][100],int rows,int cols)
{
  for(int i = 0;i<rows;i++)
  {
    for(int j = 0;j<cols;j++)
    {
      cin>>arr[i][j];
    }
  }
}

void displayBefore(int arr[][100],int rows,int cols)
{
  cout<<"BEFORE TRANSPOSE OUR MATRIX \n";
  for(int i = 0;i<rows;i++)
  {
    for(int j = 0;j<cols;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}


void transpose(int arr[][100],int temp[][100],int rows,int cols)
{
  for(int i = 0;i<rows;i++)
  {
    for(int j = 0;j<cols;j++)
    {
      temp[j][i] = arr[i][j];
    }
  }
}


void displayAfter(int temp[][100],int rows,int cols)
{
  cout<<"\n\n\nAFTER TRANSPOSING OUR MATRIX\n";
  for(int i = 0;i<cols;i++)
  {
    for(int j = 0;j<rows;j++)
    {
      cout<<temp[i][j]<<" ";
    }
    cout<<endl;
  }
}


int main()
{
  int rows,cols;
  cin>>rows>>cols;

  int arr[100][100];
  int temp[100][100];
  set_values(arr,rows,cols);
  displayBefore(arr,rows,cols);
  transpose(arr,temp,rows,cols);
  displayAfter(temp,rows,cols);

  return 0;
}