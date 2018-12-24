#include <cmath>
#include <iostream>

#if __cplusplus > 201103L

template <class T>
auto init(const std::size_t l) {
  return new T[l]{};
}

#else

template <class T>
T* init(const std::size_t l) {
  return new T[l]{};
}

#endif

int main() {
  auto b = true;
  auto ch = 'x';
  auto i = 123;
  auto d = 1.2;
  auto z = std::sqrt(d);
  auto ui = 0u;
  auto llui = 0llu;

  std::cout << "__cplusplus = " << __cplusplus << std::endl;

  for (auto i = 0; i < 7; ++i)
    std::cout << i << std::endl;

  auto pb = &b;
  auto ps = init<double>(11);
  for (std::size_t i{0}; i < 11; ++i)
    std::cout << "ps[" << i << "] = " << ps[i] << std::endl;

  delete[] ps;
  return 0;
}