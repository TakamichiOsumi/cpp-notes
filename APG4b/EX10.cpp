#include <iostream> /* cin, cout, endl */

using namespace std;

void
print_hist(string s, int num){
  cout << s;
  for (int i = 0; i < num; i++)
    cout << "]";
  cout << endl;
}

int
main(void)
{

  int A, B;

  cin >> A >> B;
  print_hist("A:", A);
  print_hist("B:", B);

  return 0;
}
