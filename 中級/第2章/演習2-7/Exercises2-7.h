#pragma once

#include <iostream>

using namespace std;

class BitSet {

public:

	BitSet();

	BitSet(unsigned long number);

	int min() const;

	int max() const;

	void clear();

	void swap(BitSet& r);

	void swap(BitSet& s1, BitSet& s2);

	BitSet symmetric_diffference(const BitSet& s1, const BitSet& s2);

	BitSet operator&(const BitSet& s1);

	BitSet operator|(const BitSet& s1);

	BitSet operator^(const BitSet& s1);

	bool is_subset_of(const BitSet& s);

	bool is_proper_subset_of(const BitSet& s);

private:
	unsigned long bitVector;


};