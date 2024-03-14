#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <deque>
#include <ctime>

template<typename T>

void mergeSortInsert(T& cont, int start, int end) {
  if (end - start <= 15) {
    for (int i = start + 1; i <= end; i++) {
      int current = cont[i];
      int j = i - 1;
      while (j >= start && cont[j] > current) {
        cont[j + 1] = cont[j];
        j--;
      }
      cont[j + 1] = current;
    }
  } 
  else {
    int mid = (start + end) / 2;
    mergeSortInsert(cont, start, mid);
    mergeSortInsert(cont, mid + 1, end);

    T cont1, cont2;
    for (int i = 0; i < mid; i++) {
        cont1.push_back(cont[start + i]);
    }
    for (int j = 0; j < end; j++) {
        cont2.push_back(cont[mid + 1 + j]);
    }
    std::merge(cont1.begin(), cont1.end(), cont2.begin(), cont2.end(), std::back_inserter(cont));
  }
}

template<typename T>

void printVector(T& cont) {
    int i = 1;
  for (typename T::iterator it = cont.begin(); it != cont.end(); it++) {
    std::cout << *it << " ";
    if (i == 10) {
        std::cout << "[...]";
        break ;
    }
    i++;
  }
  std::cout << std::endl;
}

#endif