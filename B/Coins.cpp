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

  int A, B, C, X, patterns = 0;

  cin >> A >> B >> C >> X;

  for (int i = 0; i <= A; i++){
    for (int j = 0; j <= B; j++){
      for (int k = 0; k <= C; k++){
	if (i * 500 + j * 100 + k * 50 == X)
	  patterns++;
      }
    }
  }

  cout << patterns << endl;

  return 0;
}
