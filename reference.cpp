#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

/* Apply the same operation to a single vector and update the argument vector */
/* Avoid the entire copy of the argument vector */
/* Multiply by 2 in this sample case */
void
apply(vector<int> &vec){
  for (int &v : vec)
    v = v * 2;
}

/* Return multiple values from a single function */
void
multiple_operations(int A, int B,
		    int &res_X, int &res_Y){
  res_X = A + B;
  res_Y = A - B;
}

int main(void){

  /* Use apply() */
  int A = 5, B = 10;
  vector<int> vec(A, B);
  apply(vec);
  for (int i = 0; i < vec.size(); i++)
    cout << vec.at(i) << endl;

  /* Use multiple_operations() */
  int X = 0, Y = 0;
  multiple_operations(A, B, X, Y);
  cout << X << " " << Y << endl;

  return 0;
}
