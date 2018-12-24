#include <iostream>

template <typename T>
void print_sentinel(const T* a, const std::size_t l);

int main() {
  int a{8}, b{7};
  int* pi{&a};

  const int* pc = &a; // pointer where the pointed value cannot be changed
                      // by mean of the pointer
  // *pc = 7; // error
  a = 15;

  int* const cp = &a; // the memory location cannot be changed
  a = b;
  *cp = 33;
  // cp = &b; // error

  const int* const cpc = &a; // points to a fixed memory location
                             // and cannot change it
  // *cpc = 0;  // error
  // cpc = &n;  // error

  a = 99; 


  int aa[4]{1, 2, 3, 4};
  print_sentinel(aa, 4);
}

template <typename T>
void print_sentinel(const T* a, const std::size_t l) {
  const T* const end{a + l}; // end is a pointer containing the memory location following
                             // the one in which the last element of the array is stored
  for (; a!= end; ++a)
    std::cout << *a << std::endl;
  std::cout << "*(end - 1) = " << *(end - 1) << "\nend = " << end << std::endl;
}