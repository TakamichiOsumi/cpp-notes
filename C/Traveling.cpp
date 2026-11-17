#include <iostream> /* cin, cout, endl */
#include <vector> /* vector<int> vec(N, 0); vec.at(0) = -1; vec.size(); */
#include <algorithm>
/* max(), min(), swap(v1, v2); sort(v.begin(), v.end()); reverse(v.begin(), v.end()); */
#include <functional>
/* Include for 'std::greater<int>()' to pass the sort's 3rd argument.
   Note 'std::greater<int>()' can be replaced with the below lambda expression
   '[](int v1, int v2){ return v1 > v2; }'. */
#include <cstdio> /* printf() */

using namespace std;

int main(void){

  int N;

  cin >> N;

  vector<vector<int>> points(N + 1, vector<int>(2, 0));
  vector<int> times(N + 1, 0);

  times.at(0) = 0;
  points.at(0)[0] = points.at(0)[1] = 0;
  
  for (int i = 1; i <= N; i++){
    cin >> times.at(i);
    cin >> points.at(i)[0];
    cin >> points.at(i)[1];
  }

  bool possible = true;
  for (int i = 0; i < N; i++){
    int time_diff = times.at(i + 1) - times.at(i);
    vector<int> p1, p2;
    p1 = points.at(i);
    p2 = points.at(i + 1);
    int distance_diff = abs(p2[0] - p1[0]) + abs(p2[1] - p1[1]);
    /* printf("time diff = %d, distance diff = %d\n",
       time_diff, distance_diff); */
    if (time_diff != distance_diff){
      if ((time_diff > distance_diff) and ((time_diff - distance_diff) % 2 == 0)){
	  continue;
      }else{
	possible = false;
	break;
      }
    }
  }

  if (possible)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  
  return 0;
}
