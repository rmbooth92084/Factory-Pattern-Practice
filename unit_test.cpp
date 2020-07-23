#include "gtest/gtest.h"

#include "bubble_test.h"
#include "selection_test.h"
#include "quick_test.h"
#include "merge_test.h"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
