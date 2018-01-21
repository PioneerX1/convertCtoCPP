/* Converted this program to C++
* changed to C++ io
* changed to one line comments
* changed defines of constants to const
* changed array to vector<>
* inlined any short function
*/

#include <iostream>
#include <vector>

using namespace std;
using std::vector;

const int N = 40;   // constant for size of data vector

// sum function modifies the actual location in memory of accum and data
inline void sum(int &accum, vector<int> &data) {
  for(int i = 0; i < N; i++) {
    accum = accum + data[i];
  }
}

int main() {
  int accum = 0;
  vector<int> data(N);

  // fill in the data vector with initial values
  for(int i = 0; i < N; i++) {
    data[i] = i;
  }

  // change accum value to hold the sum of all values in the data vector
  sum(accum, data);
  cout << "sum is " << accum << endl;
}
