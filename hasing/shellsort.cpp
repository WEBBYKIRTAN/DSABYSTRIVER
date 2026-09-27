#include<bits/stdc++.h>
using namespace std;
void shellSort(vector<int>& arr) {
    int n = arr.size();

    // Start with a big gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Do a gapped insertion sort for this gap size.
        for (int j = gap; j < n; j++) {
            for(int i=j-gap;i>=0;i=i-gap) 
            {
                if(arr[i+gap]<arr[i])
                {
                    swap(arr[i],arr[i+gap]);
                }
                else
                {
                    break;
                }
            }      
        
        }
    }
}