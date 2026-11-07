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

  int N = 5;
  vector<int> v(N, 0);
  for (int i = 0; i < N; i++)
    cin >> v.at(i);

  bool flag = false;
  for (int i = 0; i < N - 1; i++){
    if (v.at(i) == v.at(i + 1)){
      flag = true;
    }
  }
  if (flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
