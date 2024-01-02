#include "SortedInput.hpp"
#include <bits/stdc++.h>
#include <algorithm>

void SortedInput::run() {
  int input;

  while (true) {
      std::cout << "正の整数を入力:";
      std::cin >> input;

      if (input == -1) {
          break;
      } else if (input > 0) {
          auto it = std::upper_bound(nums.begin(), nums.end(), input);
          nums.insert(it, input);
          std::cout << "\n入力された数：";
          for (const auto &num : nums) {
              std::cout << num << " ";
          }
          std::cout << "\n";
      }
  }
}