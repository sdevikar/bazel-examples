workspace(name = "sandbox")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_googletest",
    strip_prefix = "googletest-6c5c4554ac218a8e19168edc121b1ad232015185",
    urls = ["https://github.com/google/googletest/archive/6c5c4554ac218a8e19168edc121b1ad232015185.zip"],
)

http_archive(
  name = "rules_cc",
  urls = ["https://github.com/bazelbuild/rules_cc/archive/40548a2974f1aea06215272d9c2b47a14a24e556.zip"],
  strip_prefix = "rules_cc-40548a2974f1aea06215272d9c2b47a14a24e556",
)
