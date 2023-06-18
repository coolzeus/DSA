#include <cstdlib>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long
#include <math.h>
#include <algorithm>


vector<int> flatten(vector<vector<int>> mat) {   
    vector<int> result;
    for (const auto & v : mat){
      result.insert(result.end(), v.begin(), v.end());  
    }
                                                                                       
    return result;
}



int main(){

    vector<vector<int>> mat;


    vector<int> ans=flatten(mat);


    return ans;

}
