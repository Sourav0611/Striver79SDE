#include<iostream>
#include<vector>
using namespace std;

//Kadane's Algo

int maxSum(vector<int> &arr){
    int maxi = 0, sum = 0; 
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        maxi = max(sum, maxi);
        if(sum < 0)
            sum = 0;
    }
    return maxi;
}