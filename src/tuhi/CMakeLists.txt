add_library(tuhi tuhi.cc)

target_link_libraries(tuhi tga)
target_include_directories(tuhi PUBLIC ${CMAKE_SOURCE_DIR}/include)
