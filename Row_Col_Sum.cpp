#include<bits/stdc++.h>
using namespace std;

int main(){
  int row,col;
  cin>>row>>col;
  int arr[row][col];
  cout<<"SUM ACCORDING TO ROW WISE \n";
  for(int i = 0;i<row;i++)
  {
    int row_sum = 0;
    for(int j = 0 ;j<col;j++)
    {
      cin>>arr[i][j];
      row_sum += arr[i][j];
    }
    cout<<"Sum of row number " << i+1 << " is "<<row_sum<<endl;
  }

  cout<<endl<<endl;

  cout<<"SUM ACCORDING TO COLUMN WISE \n";
  for(int i = 0;i<col;i++)
  {
    int col_sum = 0;
    for(int j = 0;j<row;j++)
    {
      col_sum += arr[j][i];
    }
      cout<<"Sum of column number "<< i+1 <<" is "<<col_sum<<endl;
  }



  return 0;

}