load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "hyundai_santa_fe_vehicle_factory",
    srcs = [
        "hyundai_santa_fe_vehicle_factory.cc",
    ],
    hdrs = [
        "hyundai_santa_fe_vehicle_factory.h",
    ],
    copts = ["-DMODULE_NAME=\\\"canbus\\\""],
    deps = [
        ":hyundai_santa_fe_controller",
        ":hyundai_santa_fe_message_manager",
        "//modules/canbus/vehicle:abstract_vehicle_factory",
    ],
)

cc_library(
    name = "hyundai_santa_fe_message_manager",
    srcs = [
        "hyundai_santa_fe_message_manager.cc",
    ],
    hdrs = [
        "hyundai_santa_fe_message_manager.h",
    ],
    copts = ["-DMODULE_NAME=\\\"canbus\\\""],
    deps = [
        "//modules/canbus/proto:canbus_proto",
        "//modules/canbus/vehicle/hyundai_santa_fe/protocol:canbus_hyundai_santa_fe_protocol",
        "//modules/drivers/canbus/can_comm:message_manager_base",
        "//modules/drivers/canbus/common:canbus_common",
    ],
)

cc_library(
    name = "hyundai_santa_fe_controller",
    srcs = [
        "hyundai_santa_fe_controller.cc",
    ],
    hdrs = [
        "hyundai_santa_fe_controller.h",
    ],
    copts = ["-DMODULE_NAME=\\\"canbus\\\""],
    deps = [
        ":hyundai_santa_fe_message_manager",
        "//modules/canbus/proto:canbus_proto",
        "//modules/canbus/vehicle:vehicle_controller_base",
        "//modules/canbus/vehicle/hyundai_santa_fe/protocol:canbus_hyundai_santa_fe_protocol",
        "//modules/common/kv_db",
        "//modules/drivers/canbus/can_comm:can_sender",
        "//modules/drivers/canbus/can_comm:message_manager_base",
        "//modules/drivers/canbus/common:canbus_common",
        "@gtest",
    ],
)

cc_test(
    name = "hyundai_santa_fe_controller_test",
    size = "small",
    srcs = [
        "hyundai_santa_fe_controller_test.cc",
    ],
    data = ["//modules/canbus:canbus_testdata"],
    deps = [
        "//modules/canbus/vehicle/hyundai_santa_fe:hyundai_santa_fe_controller",
        "@gtest//:main",
    ],
)

cc_test(
    name = "hyundai_santa_fe_message_manager_test",
    size = "small",
    srcs = [
        "hyundai_santa_fe_message_manager_test.cc",
    ],
    deps = [
        "//modules/canbus/vehicle/hyundai_santa_fe:hyundai_santa_fe_message_manager",
        "@gtest//:main",
    ],
)

cc_test(
    name = "hyundai_santa_fe_vehicle_factory_test",
    size = "small",
    srcs = ["hyundai_santa_fe_vehicle_factory_test.cc"],
    deps = [
        ":hyundai_santa_fe_vehicle_factory",
        "@gtest//:main",
    ],
)

cpplint()
