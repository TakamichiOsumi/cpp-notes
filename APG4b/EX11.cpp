#include <iostream> /* cin, cout, endl */

using namespace std;

int
main(void)
{

  int N, A, result;

  cin >> N;
  cin >> A;

  result = A;
  for (int i = 0; i < N; i++){
    string s;
    int B;

    cin >> s >> B;
    if (s == "+")
      result = result + B;
    else if (s == "-")
      result = result - B;
    else if (s == "*")
      result = result * B;
    else if (s == "/"){
      if (B == 0){
	cout << "error" << endl;
	return 0;
      }
      result = result / B;
    }
    cout << i + 1 << ":" << result << endl;
  }

  return 0;
}
