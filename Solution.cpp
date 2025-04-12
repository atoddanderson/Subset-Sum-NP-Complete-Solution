
#include <iostream>

int solvePuzzle(int n) {
  int count = 0;
  while(count < n) {
    std::cout << "test {count}" << std::endl;
    count++;
  }
}

int main() {
  
  //get test number
  int input;
  int numOfCells;
  std::cout << "Enter the number for N" << std::endl;
  std::cin >> input;
  
  //square the input
  numOfCells = input*2;

  //call the function to retrieve or create the sudoku problem to test
  solvePuzzle(numOfCells);
  return 0;
}
