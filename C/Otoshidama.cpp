#include <iostream> /* cin, cout, endl */
#include <vector> /* vector<int> vec(N, 0); vec.at(0) = -1; vec.size(); */
#include <algorithm>
/* max(), min(), swap(v1, v2); sort(v.begin(), v.end()); reverse(v.begin(), v.end()); */
#include <functional>
/* Include for 'std::greater<int>()' to pass the sort's 3rd argument.
   Note 'std::greater<int>()' can be replaced with the below lambda expression
   '[](int v1, int v2){ return v1 > v2; }'. */

using namespace std;

int main(void){

  int N, Y, i, j, k;

  cin >> N >> Y;

  for (i = 0; i <= N; i++){
    for (j = 0; j <= N; j++){
      k = (N - i - j);
      if (k >= 0){
	bool b1 = (i + j + k) == N;
	bool b2 = (i * 10000 + j * 5000 + k * 1000) == Y;
	if (b1 and b2){
	  cout << i << " " << j << " " << k << endl;
	  return 0;
	}
      }
    }
  }

  cout << "-1 -1 -1" << endl;
  
  return 0;
}
