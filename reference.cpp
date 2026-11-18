#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

using namespace std;

/* Apply the same operation to a single vector and update the argument vector */
/* Avoid the entire copy of the argument vector */
/* Multiply by 2 in this sample case */
void apply(vector<int> &vec){
  for (int &v : vec)
    v = v * 2;
}

/* Return multiple values from a single function */
void multiple_operations(int A, int B,
		    int &res_X, int &res_Y){
  res_X = A + B;
  res_Y = A - B;
}

void basic_operations(void){
  /* Use apply() */
  int A = 5, B = 10;
  vector<int> vec(A, B);
  apply(vec);
  assert(vec.at(0) == 20);
  assert(vec.at(vec.size() - 1) == 20);

  /* Use multiple_operations() */
  int X = 0, Y = 0;
  multiple_operations(A, B, X, Y);
  assert(X == 15);
  assert(Y == -5);
}

int main(void){

  basic_operations();

  return 0;
}
