
#include <catch2/catch_test_macros.hpp>

#include "Person.hpp"

TEST_CASE("test Person") {

    std::string firstName = "Per";
    std::string lastName = "Olavsen";
    std::string fullName = firstName + " " + lastName;

    Person p(firstName, lastName);

    CHECK(firstName == p.getFirstName());
    CHECK(lastName == p.getLastName());
    CHECK(fullName == p.getFullName());

}
