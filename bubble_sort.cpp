#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size_array){
  int unsorted_until_index = size_array - 1; //keeps track of the rightmost index of the array that has not yet been sorted. when we start, we initialize this to the final index of the array
  bool sorted = false;
  int steps = 0;

  while (!sorted){
    sorted = true; //we assume the array is sorted at each pass-through until we encounter a swap. if we go through the entire array without swaps, sorted would remain true and we stop
    for (int i = 0; i < unsorted_until_index; i++){
      steps++;
      if (arr[i] > arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        sorted = false;
      }
    }
    unsorted_until_index -= 1;
  }
  cout << "steps: " << steps << endl;
}



int main(){
  //array cannot be passed as an argument 
  int arr[] = {65, 66, 33, 35, 5, 22, 11};
  int size_array = sizeof(arr)/sizeof(arr[0]);

  cout << "This is the array before bubble sort: " << endl;
  for (auto x: arr){
    cout << x << " ";
  }
  cout << endl;

  cout << "This is the array AFTER bubble sort: " << endl;
  bubble_sort(arr, size_array);
  for (auto x: arr){
    cout << x << " ";
  }
  cout << endl << endl;

  cout << "At the worst case scenario, bubble sort is very inefficient because the number of steps grows exponentially as the number of elements increases. " << endl;
  cout << "Thus bubble sort has an effiicency of O(N^2)" << endl;
  
  return 0;
}
