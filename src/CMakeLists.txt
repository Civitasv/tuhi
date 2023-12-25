add_executable(run run.cc)

add_subdirectory(tuhi)

target_link_libraries(run tuhi)
