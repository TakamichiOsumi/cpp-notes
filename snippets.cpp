#include <iostream> /* cin, cout, endl */
#include <vector> /* vector<int> vec(N, 0); vec.at(0) = -1; vec.size(); */
#include <algorithm>
/* max(), min(), swap(v1, v2); sort(v.begin(), v.end()); reverse(v.begin(), v.end()); */
#include <functional>
/* Include for 'std::greater<int>()' to pass the sort's 3rd argument.
   Note 'std::greater<int>()' can be replaced with the below lambda expression
   '[](int v1, int v2){ return v1 > v2; }'. */

using namespace std;

int
main(void)
{

  int A, B;

  cin >> A >> B;
  cout << A + B << endl;

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
