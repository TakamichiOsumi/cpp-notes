#include <iostream> /* cin, cout, endl */
#include <vector> /* vector<int> vec(N, 0); vec.at(0) = -1; vec.size(); */
#include <algorithm> /* max(), min(), swap(v1, v2); sort() for vector. sort(v.begin(), v.end()); reverse(v.begin(), v.end()); */
#include <functional>
/* Include for 'std::greater<int>()' to pass the sort's 3rd argument.
   Note 'std::greater<int>()' can be replaced with the below lambda expression
   '[](int v1, int v2){ return v1 > v2; }'. */

using namespace std;

int sum(vector<int> v, int N){
  int res = v.at(0);
  for (int i = 1; i < N; i++){
    res += v.at(i);
  }
  return res;
}

int
main(void)
{
  int N;

  cin >> N;
  vector<int> A(N, 0), B(N, 0), C(N, 0);
  for (int i = 0; i < N; i++)
    cin >> A.at(i);
  for (int i = 0; i < N; i++)
    cin >> B.at(i);
  for (int i = 0; i < N; i++)
    cin >> C.at(i);

  cout << sum(A, N) * sum(B, N) * sum(C, N) << endl;

  return 0;
}
