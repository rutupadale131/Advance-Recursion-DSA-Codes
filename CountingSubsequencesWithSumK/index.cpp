#include <bits/stdc++.h>
using namespace std;

void generateSubsequenceCount(int i, vector <int>current, int arr[], int n, int k, int& result){
    if(i>=n){
        int total=accumulate(current.begin(),current.end(),0);
        if(total==k){
            result+=1;
        }
        return;
    }
    
    current.push_back(arr[i]);
    generateSubsequenceCount(i+1,current,arr,n,k,result);
    
    current.pop_back();
    generateSubsequenceCount(i+1,current,arr,n,k,result);
}

class solution {
public:
    int findSubSequencesWithSumK(int arr[], int n, int k) {
        //Write your code here...
        int result=0;
        vector <int> current;
        generateSubsequenceCount(0,current,arr,n,k,result);
        return result;
    }
};