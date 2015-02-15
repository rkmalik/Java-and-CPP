#ifndef HASHTABLE_H
#define HASHTABLE_H

	#include "HashEntry.h"

	class HashTable {

		private:
			HashItem ** hash;

		public:

			HashTable();
			~HashTable();
			void put(int key, int value);
			int get(int key);
	};


#endif 