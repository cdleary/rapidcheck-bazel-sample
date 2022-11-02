// SPDX-License-Identifier: Apache-2.0

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "rapidcheck.h"
#include "rapidcheck/gtest.h"

#include <vector>
#include <algorithm>

TEST(ReversalTest, Reverse) {
  ASSERT_TRUE(rc::check(
    [](const std::vector<int> &l0) {
      auto l1 = l0;
      std::reverse(begin(l1), end(l1));
      std::reverse(begin(l1), end(l1));
      RC_ASSERT(l0 == l1);
    }));
}
