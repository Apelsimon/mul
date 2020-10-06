set(SRC_LIST 
    byte_buffer.cpp)

set(HEADER_LIST ${PROJECT_SOURCE_DIR}/include/mul/byte_buffer.hpp)

add_library(mul ${SRC_LIST} ${HEADER_LIST})
target_include_directories(mul PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_compile_features(mul PUBLIC cxx_std_11)
