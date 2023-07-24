#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
int main() {
  //declaring
  map<int, string> myMap = {
  {1, "notebook"},
  {2, "keys"},
  {3, "car"}
};

  //insert values using [ ] operator 
  myMap[2] = "hi"; //overwrites it
  myMap[4] = "mai";

  //insert value by insert function
  myMap.insert(make_pair(9, "human"));
  
  // traverse using auto: x
  for (auto x: myMap){
    cout << x.first << " -> " << x.second << endl;
  }

  //methods/functions
  

  // search
  
  // delete

  //iterating over all values of myMap
  
}
