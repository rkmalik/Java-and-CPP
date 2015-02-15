#include "Header.h"

HashItem::HashItem(int key, int value)
{
	pKey = key;
	pValue = value;
}
int HashItem::getValue() {
	return pValue;
}

int HashItem::getKey() {
	return pKey;
}