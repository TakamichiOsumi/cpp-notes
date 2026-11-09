#include <iostream> /* cin, cout, endl */
#include <vector> /* vector<int> vec(N, 0); vec.at(0) = -1; vec.size(); */
#include <algorithm>
/* max(), min(), swap(v1, v2); sort(v.begin(), v.end()); reverse(v.begin(), v.end()); */
#include <functional>
/* Include for 'std::greater<int>()' to pass the sort's 3rd argument.
   Note 'std::greater<int>()' can be replaced with the below lambda expression
   '[](int v1, int v2){ return v1 > v2; }'. */

using namespace std;

void
verify_matrix(vector<vector<int>> &matrix,
	      int &OK, int &NG){
  for (int i = 1; i <= 9; i++){
    for (int j = 1; j <= 9; j++){
      if (matrix.at(i - 1).at(j - 1) == (i * j)){
	OK++;
      }else{
	NG++;
	matrix.at(i - 1).at(j - 1) = (i * j);
      }
    }
  }
}

int
main(void)
{
  /* Define an integer matrix with N rows, M columns */
  int N = 9, M = 9, OK = 0, NG = 0;

  vector<vector<int>> mat(N, vector<int>(M, 0));
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      cin >> mat.at(i).at(j);
    }
  }

  verify_matrix(mat, OK, NG);

  /* Dump the matrix */
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      if (j != M - 1)
	cout << mat.at(i).at(j) << " ";
      else
	cout << mat.at(i).at(j) << endl;
    }
  }

  cout << OK << endl;
  cout << NG << endl;

  return 0;
}
