#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size_array){
  int unsorted_until_index = size_array - 1;
  bool sorted = false;

  while (!sorted){
    sorted = true;
    for (int i = 0; i < unsorted_until_index; i++){
      if (arr[i] > arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        sorted = false;
      }
    }
  }
}



int main(){
  //array cannot be passed as an argument 
  int arr[] = {65, 66, 33, 35, 5};
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
  cout << endl;
  
  return 0;
}
