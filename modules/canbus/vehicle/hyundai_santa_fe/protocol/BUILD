load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "canbus_hyundai_santa_fe_protocol",
    srcs = [
        "throttle_62.cc",
        "brake_60.cc",
        "steering_64.cc",
    ],
    hdrs = [
        "throttle_62.h",
        "brake_60.h",
        "steering_64.h",
    ],
    copts = ["-DMODULE_NAME=\\\"canbus\\\""],
    deps = [
        "//modules/canbus/proto:canbus_proto",
        "//modules/drivers/canbus/can_comm:message_manager_base",
        "//modules/drivers/canbus/common:canbus_common",
    ],
)

cc_test(
    name = "throttle_62_test",
    size = "small",
    srcs = [
        "throttle_62_test.cc",
    ],
    deps = [
        "//modules/canbus/vehicle/hyundai_santa_fe/protocol:canbus_hyundai_santa_fe_protocol",
        "@gtest//:main",
    ],
)

cc_test(
    name = "brake_60_test",
    size = "small",
    srcs = [
        "brake_60_test.cc",
    ],
    deps = [
        "//modules/canbus/vehicle/hyundai_santa_fe/protocol:canbus_hyundai_santa_fe_protocol",
        "@gtest//:main",
    ],
)

cc_test(
    name = "steering_64_test",
    size = "small",
    srcs = [
        "steering_64_test.cc",
    ],
    deps = [
        "//modules/canbus/vehicle/hyundai_santa_fe/protocol:canbus_hyundai_santa_fe_protocol",
        "@gtest//:main",
    ],
)

cpplint()
