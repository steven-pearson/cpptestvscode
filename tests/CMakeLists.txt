
add_executable(addtest addtest.cpp)

# links gtest
target_link_libraries( addtest ${GTEST_LIBRARIES} cpptest )


