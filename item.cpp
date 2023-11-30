#include <string>
#include "item.h"

/*
 * <m_name>
 *
 * <Holds the name of a string in Item>
 *
 * input: <string>
 * output: <string under m_name>
 */
Item::Item(const std::string& item_name) : m_name(item_name) {}





/*
 * <getName>
 *
 * <This function will return the m_name of the Item>
 *
 * input: <nothing is inputed>
 * output: <returns the m_name provided by the m_name function>
 */
std::string Item::getName() { return m_name; }




/*
 * <isEqual>
 *
 * <This member function compares the string m_name and another string to
 * check if they are equal>
 *
 * input: <A string from Item class>
 * output: <A true value if the strings equal eachother, false otherwise>
 */
bool Item::isEqual(Item other_item) {

	if (other_item.getName() == m_name) {
		return true;
	}
	
  return false;
}