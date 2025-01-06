#include <bits/stdc++.h>
using namespace std;

void generateSubsequence(int i,vector <int>& current,int arr[], int n,int k, vector<int>& result){
    if(i>=n){
        int total=0;
       for(auto num:current){
           total+=num;
       }
       if(result.size()==0 && total==k){
           result=current;
          
       }
       return; 
    }
    
    current.push_back(arr[i]);
    generateSubsequence(i+1,current,arr,n,k,result);
    
    current.pop_back();
    generateSubsequence(i+1,current,arr,n,k,result);
}

class solution {
public:
    vector<int> findSubSequencesWithSumK(int arr[], int n, int k) {
        vector <int> result;
        vector <int>current;
        generateSubsequence(0,current,arr,n,k,result);
        return result;
    }
};