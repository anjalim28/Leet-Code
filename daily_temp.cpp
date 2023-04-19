#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >>n;
    int arr[n], count =0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i+1]>arr[i]){
            count++;
        }
        else{
            count=0;
        }
        cout << count << " ";
        count =0;
    }
    
    
    return 0;
}
