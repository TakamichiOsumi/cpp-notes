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
  int N, S;
  cin >> N;
  cin >> S;
  vector<int> A(N, 0), P(N, 0);

  for (int i = 0; i < N; i++){
    cin >> A.at(i);
  }

  for (int i = 0; i < N; i++){
    cin >> P.at(i);
  }

  int ans = 0;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if ((A.at(i) + P.at(j)) == S)
	ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
