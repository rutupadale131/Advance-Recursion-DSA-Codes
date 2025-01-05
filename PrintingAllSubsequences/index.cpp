#include <bits/stdc++.h>
using namespace std;

void generateSubsequences(int i,vector<int>& v,int arr[],int n,vector<vector<int>>& result){
    if(i>=n){
        result.push_back(v);
        return;
    }
    v.push_back(arr[i]);
    generateSubsequences(i+1,v,arr,n,result);
    
    v.pop_back();
    generateSubsequences(i+1,v,arr,n,result);
}

class solution{
public:
    vector<vector<int>> findSubsequences(int arr[], int n) {
        //Write your code here...
        vector<vector<int>> result;
        int i=0;
        vector <int> current;
        generateSubsequences(i,current,arr,n,result);
        return result;
    }
};