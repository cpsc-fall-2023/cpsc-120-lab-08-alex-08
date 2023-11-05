// Alex Acosta
// alexacosta@csu.fullerton.edu
// @AlexAcostaaa
// Partners: @alone

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum{0.0};
  int value{0};
  for (int i = 1; i < argc; ++i) {
    double arg_value = std::stod(arguments.at(i));
    sum += arg_value;
    value++;
  }

  double avg = sum / value;

  std::cout << "average = " << avg << "\n";

  return 0;
}
