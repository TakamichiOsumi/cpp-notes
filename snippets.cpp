#include <iostream> /* cin, cout, endl */
#include <vector> /* vector<int> vec(N, 0); vec.at(0) = -1; vec.size(); */
#include <algorithm>
/* max(), min(), swap(v1, v2); sort(v.begin(), v.end()); reverse(v.begin(), v.end()); */
#include <functional>
/* Include for 'std::greater<int>()' to pass the sort's 3rd argument.
   Note 'std::greater<int>()' can be replaced with the below lambda expression
   '[](int v1, int v2){ return v1 > v2; }'. */

using namespace std;

/* Apply the same operation to a single vector and update the argument vector */
void
apply(vector<int> &vec){ /* Avoid the entire copy of the argument vector */
  for (int &v : vec)
    v = v * 2; /* Multiply by 2 in this sample case */
}

/* Return multiple values from a single function */
void
multiple_operations(int A, int B,
		    int &res_X, int &res_Y){
  res_X = A + B;
  res_Y = A - B;
}

int
main(void)
{

  int A, B;

  cin >> A >> B;
  cout << A + B << endl;

  vector<int> vec(A, B);

  apply(vec);
  for (int i = 0; i < A; i++)
    cout << vec.at(i) << endl;

  int X, Y;
  multiple_operations(A, B, X, Y);
  cout << X << " " << Y << endl;

  return 0;

  /* Define an integer matrix with N rows, M columns */
  int N, M;
  cin >> N >> M;

  vector<vector<int>> mat(N, vector<int>(M, 0));
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      /* From left to right and up to bottom */
      cin >> mat.at(i).at(j);
    }
  }

  /* Dump the matrix */
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      cout << mat.at(i).at(j);
    }
    cout << endl;
  }

  return 0;
}
