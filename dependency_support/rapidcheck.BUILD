# SPDX-License-Identifier: Apache-2.0

package(default_visibility = ["//visibility:public"])

licenses(["notice"])

exports_files(["LICENSE"])

cc_library(
    name = "rapidcheck",
    srcs = glob([
        "src/**/*.cpp",
        "src/**/*.h",
        "include/**/*.h",
        "include/**/*.hpp",
    ]),
    hdrs = [
        "include/rapidcheck.h",
        "extras/gtest/include/rapidcheck/gtest.h",
    ],
    includes = [
        "include",
        "extras/gtest/include",
    ],
    visibility = ["//visibility:public"],
)
