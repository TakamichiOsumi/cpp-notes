#include <iostream> /* cin, cout, endl */
#include <vector> /* vector<int> vec(N, 0); vec.at(0) = -1; vec.size(); */
#include <algorithm>
/* max(), min(), swap(v1, v2); sort(v.begin(), v.end()); reverse(v.begin(), v.end()); */
#include <functional>
/* Include for 'std::greater<int>()' to pass the sort's 3rd argument.
   Note 'std::greater<int>()' can be replaced with the below lambda expression
   '[](int v1, int v2){ return v1 > v2; }'. */

using namespace std;

void
apply(vector<int> &vec){
  for (int &v : vec){
    v = v / 2;
  }
}

int
divide_by_two(vector<int> &vec){

  int count = 0;
  while (true){
    bool execute = true;
    for (int i = 0; i < vec.size(); i++){
      if (vec.at(i) % 2 != 0){
	execute = false;
	break;
      }
    }
    if (execute){
      apply(vec);
      count++;
    }else
      break;
  }
  return count;
}

int
main(void)
{

  int N;

  cin >> N;
  vector<int> vec(N, 0);
  for (int i = 0; i < vec.size(); i++)
    cin >> vec.at(i);

  cout << divide_by_two(vec) << endl;

  return 0;

}
