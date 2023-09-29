#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>
#include <iostream>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {
  FuzzedDataProvider fuzzed_data(data, size);
  float num1 = fuzzed_data.ConsumeFloatingPoint<float>();
  float num2 = fuzzed_data.ConsumeFloatingPoint<float>();
  std::string op = fuzzed_data.ConsumeRandomLengthString();
  
  calculator(num1, op[0], num2);
}
