#include <iostream> /* cin, cout, endl */
#include <vector>

using namespace std;

int
main(void)
{

  int N, ave = 0;
  cin >> N;

  vector<int> vec(N, 0);

  for (int i = 0; i < N; i++){
    cin >> vec.at(i);
    ave += vec.at(i);
  }

  ave = ave / N;

  for (int i = 0; i < N; i++){
    cout << abs(ave - vec.at(i)) << endl;
  }

  return 0;
}
