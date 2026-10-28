#include <iostream> /* cin, cout, endl */

int
main(void)
{

  int A, B, pos1, pos2, pos3;
  std::string s;

  std::cin >> A;
  std::cin >> s;
  std::cin >> B;

  if (s == "+")
    std::cout << A + B << std::endl;
  else if (s == "-")
    std::cout << A - B << std::endl;
  else if (s == "*")
    std::cout << A * B << std::endl;
  else if (s == "/"){
    if (B == 0){
      std::cout << "error" << std::endl;
    }else{
      std::cout << A / B << std::endl;
    }
  }else if (s == "?" || s == "=" || s == "!")
    std::cout << "error" << std::endl;

  return 0;
}
