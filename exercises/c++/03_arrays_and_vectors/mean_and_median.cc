#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

const vector<double> import_values(string filename) {
  vector<double> temp_values;
  double value;
  ifstream file(filename);

  while (file >> value) {
    temp_values.push_back(value);
  }

  return temp_values;
}

double mean(vector<double> values) {
  double total{0};

  for (double value : values)
    total += value;

  return total / values.size();
}

double median(vector<double> values) {
  double median;
  long unsigned int size{values.size()};
  sort(values.begin(), values.end());

  median = (values[size / 2] + values[(size -1) / 2]) / 2.0;

  return median;
}

int main() {
  
  vector<double> temp_values{import_values("temperatures.txt")};
  cout << "Mean: " << mean(temp_values) << endl;
  cout << "Median: " << median(temp_values) << endl;
}