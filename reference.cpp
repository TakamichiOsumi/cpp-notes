#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>
#include <iterator>

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

void search_specific_item_from_matrix(void){
  int N = 5;
  vector<vector<int>> v(N, vector<int>(2));

  v = { {0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9} };

  auto i = find_if(v.begin(), v.end(),
		   /* Search for the 3 located at [1] in each vector */
		   [](vector<int> v_internal){ return v_internal[1] == 3; });
  if (i == v.end()){
    cout << "not found" << endl;
  }else{
    cout << "found" << endl;
    /* Calculate the index of the found item */
    assert(distance(v.begin(), i) == 1);
  }
}

void lower_or_upper_bound(void){
  /* Provide a sample custom comparator */
  vector<vector<int>> v(5, vector<int>(3, 0));
  v = { {1, 2, 3},
	{4, 5, 6},
	{7, 8, 9},
	{10, 11, 12},
	{13, 14, 15},
  };
  vector<int> boundary = { 0, 6, 0 };
  /* Find the first element in the range that is not ordered before 'boundary' */
  auto found_boundary = lower_bound(v.begin(), v.end(), boundary,
				    [](vector<int> v1,
				       vector<int> v2){
				      return v1[1] < v2[1]; });
  assert(found_boundary != v.end());
  for (int i = 0; i < (*found_boundary).size(); i++){
    cout << (*found_boundary)[i] << endl;
  }
  /* Dump until the found vector */
  for (auto a = v.begin(); a != found_boundary; a++){
    for (int i = 0; i < (*found_boundary).size(); i++){
      cout << (*a)[i];
      if (i != (*found_boundary).size() - 1)
	cout << " ";
      else
	cout << endl;
    }
  }
}

void sample_priority_queue(void){}

int main(void){

  basic_operations();
  search_specific_item_from_matrix();
  lower_or_upper_bound();

  return 0;
}
