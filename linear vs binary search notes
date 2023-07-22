#include <iostream>
using namespace std;
void linear_search(int arr[], int search_value, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == search_value) {
      cout << search_value << " found at index " << i << endl;
    } else if (arr[i] > search_value) {
      cout << search_value << " not found" << endl;
      return;
    }
  }
  return;
}

void binary_search(int arr[], int search_value, int size) {
  int lower_bound = 0;
  int upper_bound = size - 1; // the last index
  // begin a while loop in which we keep inspecting the middlemost value between
  // the upper and lower bounds

  while (lower_bound <= upper_bound) {
    // find the midpoint between upper and lower bounds
    int midpoint = (upper_bound + lower_bound) / 2;
    // inspect the value at the midpoint
    int val_at_midpoint = arr[midpoint];
    // if val is the one we're looking for, we're done. if not, we change the
    // lower or upper bound based on whether we need to guess higher or lower
    if (search_value == val_at_midpoint) {
      cout << midpoint;
    } else if (search_value < val_at_midpoint) {
      upper_bound = midpoint - 1;
    } else if (search_value > val_at_midpoint) {
      lower_bound = midpoint + 1;
    }
  }
  // if we've narrowed the bounds until they've reached each other, that means
  // the val we're searching for is not contained within this array
  return;
}
int main() {
  int arr[] = {1, 3, 5};
  for (int n : arr) {
    std::cout << n << " ";
  }
  cout << endl;

  int size = sizeof(arr) / sizeof(arr[0]);
  linear_search(arr, 2, size);
}
