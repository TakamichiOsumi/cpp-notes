#include <iostream> /* cin, cout, endl */
#include <vector> /* vector<int> vec(N, 0); vec.at(0) = -1; vec.size(); */
#include <algorithm>
/* max(), min(), swap(v1, v2); sort(v.begin(), v.end()); reverse(v.begin(), v.end()); */
#include <functional>
/* Include for 'std::greater<int>()' to pass the sort's 3rd argument.
   Note 'std::greater<int>()' can be replaced with the below lambda expression
   '[](int v1, int v2){ return v1 > v2; }'. */
#include <cstdio> /* printf() */
#include <map>

using namespace std;

bool debug = true;
#define c(d) do { if (debug) cout << "debug : data = " << d << endl; } while(false)
#define cv(d) do { if (debug) for (int i = 0; i < d.size(); i++) cout << "debug : data = " << d.at(i) << endl; } while(false)

int main(void){

  int N;

  cin >> N;

  vector<pair<string, int>> ranks(N);
  vector<pair<string, int>> original(N);

  for (int i = 0; i < N; i++){
    cin >> original.at(i).first;
    cin >> original.at(i).second;
    ranks.at(i).first = original.at(i).first;
    ranks.at(i).second = original.at(i).second;
  }

  sort(ranks.begin(), ranks.end(), [](pair<string, int> v1,
				      pair<string, int> v2){
    if (v1.first == v2.first){
      /* If 'first's point to the same city,
	 then compare the scores. */
      return v1.second > v2.second;
    }else{
      /* Otherwise, compare the city names. */
      return v1.first < v2.first;
    }
  });

  for (pair<string, int> p : ranks){
    for (int i = 0; i < original.size(); i++){
      if (p.first == original.at(i).first and
	  p.second == original.at(i).second){
	cout << i + 1 << endl;
      }
    }
  }
  return 0;

}
