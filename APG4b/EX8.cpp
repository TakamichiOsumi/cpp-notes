#include <iostream> /* cin, cout, endl */

using namespace std;

int
main(void)
{

  int val;

  cin >> val;
  if (val == 1){
    int price, N;
    cin >> price >> N;
    cout << price * N << endl;
  }else{
    /* val == 2 */
    string s;
    int price, N;
    cin >> s >> price >> N;
    cout << s << "!" << endl;
    cout << price * N << endl;
  }

  return 0;
}
