#include <algorithm>
#include <iostream>
using namespace std;
int distinct_elements(int arr[], int n){
   // Sorting the array
   sort(arr, arr + n);
   // Traverse the sorted array
   int count = 0;
   for (int i = 0; i < n; i++){
      // Moving the index when duplicate is found
      while (i < n - 1 && arr[i] == arr[i + 1]){
         i++;
      }
      count++;
   }
   return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<distinct_elements(arr, n);
   return 0;
}
