#include <iostream> /* cin, cout, endl */
#include <vector> /* vector<int> vec(N, 0); vec.at(0) = -1; vec.size(); */
#include <algorithm> /* max(), min(), swap(v1, v2); sort() for vector. sort(v.begin(), v.end()); reverse(v.begin(), v.end()); */
#include <functional>
/* Include for 'std::greater<int>()' to pass the sort's 3rd argument.
   Note 'std::greater<int>()' can be replaced with the below lambda expression
   '[](int v1, int v2){ return v1 > v2; }'. */

using namespace std;

int
main(void)
{

  int N = 3;
  vector<int> v(N, 0);
  
  for (int i = 0; i < N; i++){
    cin >> v.at(i);
  }

  sort(v.begin(), v.end());

  cout << v.at(N - 1) - v.at(0) << endl;

  return 0;
}
