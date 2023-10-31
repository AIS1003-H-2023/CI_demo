
add_executable(test_person test_person.cpp)
add_test(NAME test_person COMMAND test_person) # CTest
target_link_libraries(test_person PRIVATE testingLib Catch2::Catch2WithMain)

add_executable(test_vector3 test_vector3.cpp)
add_test(NAME test_vector3 COMMAND test_vector3) # CTest
target_link_libraries(test_vector3 PRIVATE testingLib Catch2::Catch2WithMain)
