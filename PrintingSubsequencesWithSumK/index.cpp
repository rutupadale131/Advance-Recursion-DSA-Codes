#include <bits/stdc++.h>
using namespace std;

void generate_subsequences(int i,vector <int>& current,int arr[],int n, int k, vector<vector <int>>& result){
    if(i>=n){
        int total=0;
        for(auto num:current){
           total+=num; 
        }
        if(total==k){
            result.push_back(current);
        }
        return;
    }
    
    current.push_back(arr[i]);
    generate_subsequences(i+1,current,arr,n,k,result);
    
    current.pop_back();
    generate_subsequences(i+1,current,arr,n,k,result);
}

class solution{
public:
    vector<vector<int>> findSubSequencesWithSumK(int arr[], int n, int k) {
        //Write your code here...
        vector <vector<int>> result;
        vector <int> current;
        generate_subsequences(0,current,arr,n,k,result);
        return result;
    }
};