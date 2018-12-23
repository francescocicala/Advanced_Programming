#include <iostream>

void new_line() {
  std::cout << std::endl;
}

int main() {
  for (int i = 0; i < 10; ++i)
  	std::cout << i << " ";

  new_line();

  int i{};

  while (i < 10)
    std::cout << i++ << " ";

  new_line();

  std::cout << i << "\n";

  do {
  	std::cout << i << "\n";
  } while (i < 2);

  return 0;
}
