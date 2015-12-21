/*
 * ArraysSortingTest.cpp
 *
 *  Created on: Nov 12, 2015
 *      Author: mobile
 */

#include "catch.hpp"
#include "sorting/Arrays.hpp"

TEST_CASE( "Sorting algorithm", "[Arrays]" ) {


    int expected[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    SECTION( "resizing bigger changes size and capacity" ) {
        int items[] = {0, 2, 5, 10, 4, 3, 7, 6, 1, 9, 8};

        Arrays::insertionSort(items, sizeof(items)/sizeof(int));

        REQUIRE( items == expected );
    }

}

