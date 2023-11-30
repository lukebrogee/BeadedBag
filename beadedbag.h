#ifndef __BEADEDBAG_BEADEDBAG_HPP
#define __BEADEDBAG_BEADEDBAG_HPP

#include "item.h"
#include <vector>
#include <iostream>
#include <fstream>




class BeadedBag {
public:
	int size();
	std::vector<Item> insert(Item to_insert);
	bool contains(Item maybe_contained_item);

private:
	std::vector<Item> library;
};

#endif