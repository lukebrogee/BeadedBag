#include <algorithm>
#include "beadedbag.h"
#include "item.h"
#include <vector>

/*
 * <size>
 *
 * <Count the number of items in a vector>
 *
 * input: <no inputs>
 * output: <An integer of the amount of items in the "library">
 */
int BeadedBag::size() {
	int count{ 0 };

	for (int i = 0; i < library.size(); i++) {
		count++;
	}

	return count++;
}


/*
 * <insert>
 *
 * <This function will insert an Item variable into the vector>
 *
 * input: <Item variable>
 * output: <The library which is a vector>
 */
std::vector<Item> BeadedBag::insert(Item to_insert) {

		if (!BeadedBag::contains(to_insert)) {      
			library.push_back(to_insert);
		}
	
	return library;
}


/*
 * <contains>
 *
 * <This function will take a string and compare it to every string
 * in the vector to test if there is a string equal to the input>
 *
 * input: <Item variable>
 * output: <True if the strings match false otherwise>
 */
bool BeadedBag::contains(Item maybe_contained_item) {

	for (int i = 0; i < library.size(); i++) {
		if (library[i].isEqual(maybe_contained_item)) {
			return true;
		}
	}

  return false;
}