#include <iostream>
#include "Singlenton.hpp"

auto main() -> int
{
  Singleton *instance = Singleton::newInstance();
  return 0;
}