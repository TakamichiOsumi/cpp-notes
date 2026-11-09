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

  int N, M;
  cin >> N >> M;

  vector<int> matches(M, 0);
  vector<vector<char>> result(N, vector<char>(N, '-'));
  int winner, loser;

  for (int i = 0; i < M; i++){
    cin >> winner >> loser;
    result.at(winner - 1).at(loser - 1) = 'o';
    result.at(loser - 1).at(winner - 1) = 'x';
  }
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if (j == N - 1){
	cout << result.at(i).at(j);
      }else{
	cout << result.at(i).at(j) << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
