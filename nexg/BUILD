cc_library(
    name = "Nexg",
    includes = ["include","nexserver/src"],
    srcs = ["src/c/instance.c"],
    hdrs = ["include/Nexg.h","include/types.h"],
    deps = ["//nexg/nexserver:NexServer","//nexg/nexgcore:NexgCore"],
    visibility = ["//nexg:__pkg__"],
)

cc_binary(
    name = "hello_world",
    includes = ["include"],
    srcs = ["sample/hello_world.c"],
    deps = ["//nexg:Nexg"],
)