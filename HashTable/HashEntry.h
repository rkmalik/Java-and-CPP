#ifndef HASHENTRY_H
#define HASHENTRY_H


class HashItem {

private:
	int pKey;
	int pValue;

public:

	HashItem(int key, int value);
	int getKey();
	int getValue();

};

#endif