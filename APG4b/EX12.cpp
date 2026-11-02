#include <iostream> /* cin, cout, endl */
#include <string>

using namespace std;

int
main(void)
{

  string s;
  int ans = 1;

  getline(cin, s);

  for (int i = 1; i < s.size() - 1; i = i + 2){
    if (s.at(i) == '+')
      ans += 1;
    else
      ans -= 1;
  }
  
  cout << ans << endl;

  return 0;
}
