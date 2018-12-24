#include <array>
#include <iostream>

// template <class T, std::size_t N>
// struct array;

int main() {
  std::array<int, 4> a{1, 2, 3, 4};
  std::array<int, 4> b{a}; // I can copy element-wise from another std::array
                           // not possible with plain built-in arrays
  b = a;                   // we could initialize b to zeros and then do this
  for (auto x : a) // for x in a
    std::cout << x << " ";
  std::cout <<std::endl;

  for (auto x : b)
    std::cout << x << " ";
  std::cout << std::endl;


  a[0] = 0; // same subscripting operator without bound checking

  for (const auto x : a) // why const? because we will not change x
    std::cout << x << " ";
  std::cout << std::endl;

  for (const auto x : b)    // we see that b and a are not pointing to the same 
    std::cout << x << " ";  // same address
  std::cout << std::endl;

  for (auto& x : a)
    x *= 10;

  for (auto i = 0u; i < a.size(); ++i)
    std::cout << "a[" << i << "] = " << a[i] << std::endl;

  b.at(90);  // bound checking at run-time
             // returns an error message at runtime

  return 0;

}


