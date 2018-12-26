#include <array>
#include <iostream>

using namespace std;

template <typename T, size_t size>
void print_arr(array<T, size>, size_t);

template <typename T, size_t size>
array<T, size> transpose_arr(array<T, size>, size_t);

template <typename T, size_t n_rows, size_t n_cols>
void print_2darr(array<array<T, n_cols>, n_rows>&);

template <typename T, size_t n_rows, size_t n_cols>
array<array<T, n_rows>, n_cols> transpose_2darr(array<array<T, n_cols>, n_rows>);

int main() {

  cout << "##### 1D Arrays #####\n";

  array<double, 6> rec_1d{1, 2, 3, 4, 5, 6};

  cout << "\nOriginal matrix:\n";
  print_arr(rec_1d, 2);  

  auto rec_1d_t = transpose_arr(rec_1d, 2);
  cout << "\nTransposed matrix:\n";
  print_arr(rec_1d_t, 3);

  array<double, 9> sq_1d{1, 2, 3, 4, 5, 6, 7, 8, 9};

  cout << "\nOriginal matrix:\n";
  print_arr(sq_1d, 3);  

  auto sq_1d_t = transpose_arr(sq_1d, 3);
  cout << "\nTransposed matrix:\n";
  print_arr(sq_1d_t, 3);


  cout << "\n##### 2D Arrays #####\n";

  array< array<double, 3>, 2 > rec_2d{ {{1, 2, 3}, {4, 5, 6}} };
  cout << "\nOriginal matrix:\n";
  print_2darr(rec_2d);

  auto rec_2d_t = transpose_2darr(rec_2d);

  cout << "\nTransposed matrix:\n";
  print_2darr(rec_2d_t);


  array< array<double, 4>, 4 > sq_2d{ {{1, 2, 3, 4}, {5, 6, 7, 8}} };
  cout << "\nOriginal matrix:\n";
  print_2darr(sq_2d);

  auto sq_2d_t = transpose_2darr(sq_2d);

  cout << "\nTransposed matrix:\n";
  print_2darr(sq_2d_t);

  return 0;
}

template <typename T, size_t size>
void print_arr(array<T, size> arr, size_t n_rows) {
  size_t n_cols {size / n_rows};

  for (size_t i{0}; i < n_rows; ++i) {
    for (size_t j{0}; j < n_cols; ++j) 
      cout << arr[i * n_cols + j] << " ";
    cout << endl;
  }

}

template <typename T, size_t size>
array<T, size> transpose_arr(array<T, size> arr, size_t n_rows) {
  array<T, size> arr_t{};
  size_t n_cols {size / n_rows};

  for (size_t j{0}; j < n_cols; ++j)
    for (size_t i{0}; i < n_rows; ++i) 
      arr_t[j * n_rows + i] = arr[i * n_cols + j];

  return arr_t;
}

template <typename T, size_t n_rows, size_t n_cols>
void print_2darr(array<array<T, n_cols>, n_rows>& a) {

  for (size_t row{0}; row < n_rows; ++row) {

    for (size_t col{0}; col < n_cols; ++col)
      cout << a[row][col] << " ";

    cout << endl;
  }
}

template <typename T, size_t n_rows, size_t n_cols>
array<array<T, n_rows>, n_cols> transpose_2darr(array<array<T, n_cols>, n_rows> a) {

  array<array<T, n_rows>, n_cols> arr_t{};

  for (size_t i{0}; i < n_rows; ++i) 

    for (size_t j{0}; j < n_cols; ++j)
      arr_t[j][i] = a[i][j];

  return arr_t;
}