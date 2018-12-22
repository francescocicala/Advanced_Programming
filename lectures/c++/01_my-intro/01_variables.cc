#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>

int main() {
  int a{-1};
  std::cout << a << std::endl;

  double b{2.2};
  std::cout << b << std::endl;

  char c{'r'};
  std::cout << c << std::endl;

  bool t{true};
  std::cout << t << std::endl;

  std::cout << "on my machine the size of an int is " << sizeof(int)
            << " bytes\n";
  std::cout << "on my machine the size of an double is " << sizeof(double)
            << " bytes\n";
  std::cout << "on my machine the size of a char is " << sizeof(char)
            << " bytes\n";
  std::cout << "on my machine the size of a bool is " << sizeof(bool)
            << " bytes\n";
  
  int16_t small_int{};
  std::cout << "on every machine the size of variable small_int is "
            << sizeof(small_int) << " bytes\n";

  std::string s{"Hello, World!\n"};
  std::cout << s;

  int var = 6.9;
  //int v_narrow {6.9};
  int v_narrow_w {int(a+b)};

  std::cout << var << "\n";
  std::cout << v_narrow_w << "\n";

  std::cout << s + s << std::endl;

  bool test;
  test = a == b;
  test = a < b;
  test = a > b;
  test = a <= b;
  test = a >= b;
  test = a != b;
 
  if (test) {
      std::cout << "test is true\n";
  } else {
    std::cout << "test is false\n";
  }

  const int cc{7}; // evaluated at runtime 
  // cc = 9; // error

  constexpr double ce{cc * 8.1234 / M_PI}; // evaluated at compile time
  int ve{int(ce * a)};

  // constexpr int  n_ce {ve*8.1234/M_PI}; // error

  // cast to void to suppress warning of unused variable
  (void)ve;

  long int i_one = 33; // take constant of type int, convert it to long int and assign to i.
  int i_two = 33L; // take constant of type long int, convert it to int and assign to i.

  long double lpi = 3.141592653589793238462L;
  std::cout << std::setprecision(50) << M_PI << std::endl;
  std::cout << std::hex << 43 << std::endl;
  std::cout << std::oct << 43 << std::endl;
  std::cout << std::dec << 43 << std::endl;

  (void)lpi;
  (void)i_one;
  (void)i_two;

  return 0;
}