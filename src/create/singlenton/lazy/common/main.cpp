#include <iostream>
#include "Singlenton.hpp"
using namespace std;
auto main() -> int
{
  Singlenton *s = Singlenton::newInstance();
  cout << "success!" << endl;
  return 0;
}