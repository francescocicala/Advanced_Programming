#include <iostream>

using namespace std;

template <typename T>
void print_sentinel(const T* a, const size_t l);

int main() {
  int a{8}, b{7};
  int* pi{&a};

  const int* pc = &a; // pointer to a constant integer
  // *pc = 7; //error
  a = 15;

  int* const cp = &a; // constant pointer
  a = b;
  *cp = 33;
  // cp = &b; // error

  const int* const cpc = &a; // constant pointer to constant integer
  a = 99;

  int aa[4]{};
  print_sentinel(aa, 4);

  return 0;
}


template <typename T>
void print_sentinel(const T* a, const size_t l) {
  const T* const end{a + l};
  for (; a != end; ++a)
    cout << *a << " in " << a << endl;
}