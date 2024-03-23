#include "PmergeMe.hpp"

int main(int ac, char **av) {

  if (ac > 1) {
    std::vector<int> v;
    std::deque<int> l;
    for (int i = 1; av[i]; i++) {
      char *endPtr;
      long value = strtol(av[i], &endPtr, 10);
      if (endPtr == av[i] || (value < 0 || value > 2147483647)) {
        std::cout << "Error : input value is wrong" << std::endl;
        return 0;
      }
      else {
        v.push_back(value);
        l.push_back(value);
      }
    }

    std::cout << "Before: ";
    printVector(v);

	  std::clock_t start_time = std::clock();
    mergeSortInsert(v, 0, v.size() - 1);
    std::clock_t end_time = std::clock();

	  std::clock_t start_time2 = std::clock();
    mergeSortInsert(l, 0, l.size() - 1);
    std::clock_t end_time2 = std::clock();

    std::cout << "After: ";
    printVector(v);

    double time = static_cast<double>(end_time - start_time) / (double)CLOCKS_PER_SEC *  1000000;
    double time2 = static_cast<double>(end_time2 - start_time2) / (double)CLOCKS_PER_SEC *  1000000;
    std::cout << "time to process a range of " << v.size() << " elements with std::vector: " << time << "us" <<  std::endl;
    std::cout << "time to process a range of " << l.size() << " elements with std::deque: " << time2 << "us" << std::endl;

    return 0;
  }
}
