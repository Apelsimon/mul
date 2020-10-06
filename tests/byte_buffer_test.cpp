#include "mul/byte_buffer.hpp"

#include "gtest/gtest.h"

TEST(byte_buffer_test, ctor) 
{ 
    mul::byte_buffer bb;

    ASSERT_EQ(0, bb.get_read_available());
    ASSERT_EQ(0, bb.get_write_available());
}

TEST(byte_buffer_test, ctor_size) 
{ 
    constexpr auto BUFFER_SIZE = 100;
    mul::byte_buffer bb{BUFFER_SIZE};

    ASSERT_EQ(0, bb.get_read_available());
    ASSERT_EQ(BUFFER_SIZE, bb.get_write_available());
}