# SPDX-License-Identifier: Apache-2.0

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "rapidcheck",
  strip_prefix = "rapidcheck-ce2b602bbe89e9264fb8725cc3f04049951f29cb",
  urls = ["https://github.com/emil-e/rapidcheck/archive/ce2b602bbe89e9264fb8725cc3f04049951f29cb.zip"],
  build_file = "@//dependency_support:rapidcheck.BUILD",
  sha256 = "50af34562dfaa6dd183708f4c8ef6cfb7a7ea49d926cfd2c14c2fbd9844b06c8",
)

http_archive(
    name = "com_google_googletest",
    urls = ["https://github.com/google/googletest/archive/47f819c3ca54fb602f432904443e00a0a1fe2f42.zip"],  # 2021-08-10
    strip_prefix = "googletest-47f819c3ca54fb602f432904443e00a0a1fe2f42",
    sha256 = "db93dd8a793e54a3a429197ecdd94813d280019e2adfa9241c7bc9204842bedc",
)
