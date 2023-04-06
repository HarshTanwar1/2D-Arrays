#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> > arr;
    int rows,cols;
    cout<<"Enter number of rows and cols :: ";
    cin>>rows>>cols;
    cout<<"Enter the elements :: ";
    for(int i = 0;i<rows;i++){
        vector<int> temp;
        int x;
        for(int j = 0;j<cols;j++){
            cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    cout<<"Your matrix :: \n";
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr[i].size();j++){
            cout<<arr[i][j]<< " " ;
        }
        cout<<endl;
    }

    return 0;
}