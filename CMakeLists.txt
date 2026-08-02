# MQ2FarmTest
# Forked from RedGuides/MQ2FarmTest (github.com/RedGuides org sweep, forum-plugins-2026-08-02
# follow-up batch). Vendored as a git submodule tracking https://github.com/blbruegg/MQ2FarmTest
# (fork of RedGuides/MQ2FarmTest). See F:\\EQProject\\docs\\re_progress.md for the write-up.

include("../../Plugin.cmake")

set(MQ2FarmTest_SOURCES
    "FarmType.h"
    "MQ2FarmTest.cpp"
    "MQ2FarmTest.rc"
    "NavCommands.h"
    "Prototypes.h"
    "Variables.h"
    "resource.h"
)

source_groups("Source Files" ${MQ2FarmTest_SOURCES})

add_library(MQ2FarmTest SHARED
    ${MQ2FarmTest_SOURCES}
)

set_target_properties(MQ2FarmTest PROPERTIES FOLDER "core/plugins")

target_Plugin_props(MQ2FarmTest)

target_link_libraries(MQ2FarmTest PRIVATE MQ2Main)
