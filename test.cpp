#include <iostream>
#include CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "function_to_implement.cpp"

int main(){
    
}

TEST_CASE( "Sum of vector are computed", "[sum]" ) {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {2, 3, 4};
    std::vector<int> v3 = {3, 4, 5};
    std::vector<int> v4 = {324, 923, 5432}
    REQUIRE( Sum(v1) == 6 );
    REQUIRE( Sum(v2) == 9 );
    REQUIRE( Sum(v3) == 12 );
    REQUIRE( Sum(v4) == 6679 );
}

TEST_CASE( "Product of vector are computed", "[product]" ) {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {2, 3, 4};
    std::vector<int> v3 = {3, 4, 5};
    std::vector<int> v4 = {12, 37, 166}
    REQUIRE( Product(v1) == 6 );
    REQUIRE( Product(v2) == 9 );
    REQUIRE( Product(v3) == 12 );
    REQUIRE( Product(v4) == 73704 );
}

TEST_CASE( "VectorPlusN should add a value to each element", "[vectorPlusN]" ) {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {2, 3, 4};
    std::vector<int> v3 = {3, 4, 5};
    std::vector<int> v4 = {12, 37, 166}
    REQUIRE( VectorPlusN(v1, 2) == {3, 4, 5} );
    REQUIRE( VectorPlusN(v2, 4) == {6, 7, 8} );
    REQUIRE( VectorPlusN(v3, 16) == {19, 20, 21} );
    REQUIRE( VectorPlusN(v4, 345) == {357, 382, 511} );
}



