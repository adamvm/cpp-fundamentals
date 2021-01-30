#pragma once

int fibonacci_iterative(int sequence) {
  auto result = 0;
  auto current = 1;
  auto last = 0;
  if (sequence == 0) return result;
  if (sequence == 1) return current;
  for (int it = 2; it <= sequence; ++it) {
    result = last + current;
    std::cout << last << " " << current << std::endl;
    last = current;
    current = result;
  }
  return result;
}

int fibonacci_recursive(int sequence) {
  auto result = 0;
  if (sequence == 0) return result;
  if (sequence == 1) return result + 1;
  result = fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
  return result;
}

