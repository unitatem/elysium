load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def install_pigpio():
  http_archive(
    name = "pigpio",
    url = "https://github.com/joan2937/pigpio/archive/master.zip",
    sha256 = "cabc41a726102d6b74623c8c276e65c1d110dbea7b6f83de9bda490a6e89b499",
    strip_prefix = "pigpio-master",
    build_file = "//third_party/pigpio:pigpio.BUILD"
  )
