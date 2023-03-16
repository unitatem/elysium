# https://www.youtube.com/watch?v=5ugdNGVjSRQ

load("@bazel_tools//tools/cpp:unix_cc_toolchain_config.bzl", "cc_toolchain_config")

cc_toolchain_config(
  name = "config",
  cpu = "unknown",
  compiler = "unknown",
  toolchain_identifier = "unknown",
  host_system_name = "unknown",
  target_system_name = "unknown",
  target_libc = "unknown",
  abi_version = "unknown",
  abi_libc_version = "unknown",
  tool_paths = {
    "gcc": "/usr/bin/arm-linux-gnueabi-g++-9",
    "cpp": "/bin/false",
    "ar": "/bin/false",
    "nm": "/bin/false",
    "ld": "/bin/false",
    "objdump": "/bin/false",
    "strip": "/bin/false",
    "llvm-cov": "/bin/false"
  },
  compile_flags = [],
  link_flags = [],
  cxx_builtin_include_directories = [
    "/usr/arm-linux-gnueabi/include/",
    "/usr/lib/gcc-cross/arm-linux-gnueabi/9/include"
  ]
)

filegroup(
  name = "files"
)

cc_toolchain(
  name = "cc_toolchain",
  all_files = ":files",
  ar_files = ":files",
  as_files = ":files",
  compiler_files = ":files",
  dwp_files = ":files",
  linker_files = ":files",
  objcopy_files = ":files",
  strip_files = ":files",
  dynamic_runtime_lib = ":files",
  static_runtime_lib = ":files",
  toolchain_config = ":config"
)

toolchain(
  name = "toolchain",
  toolchain = ":cc_toolchain",
  exec_compatible_with = [
    "@platforms//os:linux",
    "@platforms//cpu:x86_64"
  ],
  target_compatible_with = [
    "@platforms//os:none",
    "@platforms//cpu:arm"
  ],
  toolchain_type = "@rules_cc//cc:toolchain_type"
)

platform(
  name = "platform",
  constraint_values = [
    "@platforms//os:none",
    "@platforms//cpu:arm",
  ]
)
