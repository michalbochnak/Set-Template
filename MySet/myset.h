/*myset.h*/

//
// myset data structure, i.e. a data structure modelled
// after std::set in modern C++.
//
// Michal Bochnak
// Netid: mbochn2
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//

#pragma once

using namespace std;

template<typename T>
class myset
{
private:
	//
	// Allows iteration through the set in element order.
	//
	class iterator
	{
	private:
		T* iterPtr;

	public:
		//
		// Constructor
		//
		iterator(T* ptr)
		{
			iterPtr = ptr;
		}

		//
		// Destructor
		//
		~iterator()
		{
			iterPtr = nullptr;
		}

		//
		// ++iter
		//
		// Advances to the next element in the set; elements are
		// visited in element order.  Operation is undefined if
		// iterator == end().
		//
		iterator& operator++()
		{
			iterPtr++;
			//
			// return "this" updated iterator:
			//
			return *this;
		}

		//
		// *iter
		//
		// Returns the element denoted by this iterator; the 
		// operation is undefined if iterator == end().
		//
		T& operator*()
		{
			//
			// TODO:
			//

			//
			// Note: this code is wrong, you cannot return a reference 
			// to a local variable -- the local is destroyed when 
			// function returns. Must return something with a longer 
			// lifetime, i.e. data in the heap.
			//
			return *iterPtr;
		}

		//
		// lhs != rhs
		//
		// Returns true if "this" iterator != rhs iterator.
		//
		bool operator!=(const iterator& rhs)
		{
			return this->iterPtr != rhs.iterPtr;
		}

		//
		// lhs == rhs
		//
		// Returns true if "this" iterator == rhs iterator.
		//
		bool operator==(const iterator& rhs)
		{
			return this->iterPtr == rhs.iterPtr;
		}
	};	// end of iterator class

		//
		// Data members for myset:
		//
		//
		// TODO:
		//
	int numElem;
	int capacity;
	T* data;

public:
	//
	// Default constructor: constructs a new, empty set
	//
	myset()
	{
		numElem = 0;
		capacity = 4;
		data = new T[capacity];
	}

	//
	// Copy constructor:
	//
	myset(const myset& other)
	{
		// allocate
		data = new T[other.capacity];

		// copy data
		for (int i = 0; i < other.numElem; ++i)
			data[i] = other.data[i];

		numElem = other.numElem;
		capacity = other.capacity;
	}

	//
	// Destructor: destroy all elements in set.
	//
	~myset()
	{
		delete[] data;
	}

	//
	// size()
	//
	// Returns # of elements in the set.
	//
	int size() const
	{
		return numElem;
	}

	// 
	// empty()
	//
	// Returns true if set is empty, false if not.
	//
	bool empty() const
	{
		return numElem == 0;
	}

	//
	// clear()
	//
	// Empties the set, destroying all the elements.  Afterwards, 
	// the size of the set is 0.
	//
	void clear()
	{
		delete[] data;

		capacity = 4;
		numElem = 0;

		// allocate of initial capacity
		T* temp = new T[capacity];
		data = temp;
	}

	//
	// insert(e)
	//
	// Inserts the element e into the set.  Returns true if e
	// was inserted, false if e was already in the set (and thus
	// not inserted again).  Elements are inserted in element 
	// order as defined by the < operator; this enables in order 
	// iteration.
	//
	// Requirements:
	//   1. Insert time must be <= O(N).
	//   2. Set grows as needed to accommodate new elements.
	//   3. Assumes only < operator; two elements x and y are
	//      equal if (!(x<y)) && (!(y<x)).
	//
	bool insert(const T& e)
	{
		// already there, do not insert, retun false
		if (_contains(e) == true) {
			return false;
		}
		// insert
		else {
			// array full, grow the size
			if (_full() == true)
				_grow();

			// find the spot to insert 
			int insertAt = search(e);

			// move the elements to make a free spot for new element
			for (int i = numElem; i > insertAt; --i)
				data[i] = data[i - 1];

			// insert
			data[insertAt] = e;
			numElem++;

			return true;		// succesfuly inserted
		}
	}

	//
	// return true if element is in the set, false otherwise
	//
	bool _contains(const T& e) {

		if (find(e) != end())
			return true;
		else
			return false;
	}

	//
	// returns true if array is full, false otherwise
	//
	bool _full() {
		return capacity == numElem;
	}

	//
	// doubles the allocated space for the array
	//
	void _grow() {
		capacity *= 2;

		// copy elements over into bigger space in memory
		T* dataTemp = new T[capacity];
		for (int i = 0; i < numElem; ++i)
			dataTemp[i] = data[i];

		// delete old data
		delete[] data;

		// refresh the pointer
		data = dataTemp;
	}

	// 
	// += e
	//
	// Inserts e into the set; see insert(e).
	//
	myset& operator+=(const T& e)
	{
		//
		// insert e into "this" set:
		//
		this->insert(e);
		return *this;
	}

	//
	// find(e)
	//
	// Searches the set for the element e, returning an iterator
	// to e if found.  If e is not found, end() is returned, i.e.
	// an iterator denoting one past the last element.
	//
	// Requirements:
	//   1. Find time must be <= O(lgN).
	//   2. Assumes only < operator; two elements x and y are
	//      equal if (!(x<y)) && (!(y<x)).
	//
	iterator find(const T& e)
	{
		// returns index of found element,
		// or index where element should be inserted if not found
		int index = search(e);

		// found
		if ((index < numElem) && !(data[index] < e) && (!(e < data[index])))
			return iterator(&data[index]);
		// not found
		else
			return end();
	}

	//
	// binary search
	// returns index of found element,
	// or index where element should be inserted if not found
	//
	int search(const T& e) {
		int low = 0, mid, high = numElem - 1;

		while (low <= high) {
			mid = ((high - low) / 2) + low;
			// _searchResult negative value means word is to the left,
			// positive value means word is to the right,
			// value of 0 means word was found
			int result = _searchResult(e, data[mid]);
			// found
			if (result == 0) {
				return mid;
			}
			// word should be located prior to mid location
			else if (result < 0) {
				high = mid - 1;
			}
			// word should be located after mid location
			else {
				low = mid + 1;
			}
		}

		// not found, return the index at which the element should be inserted
		return low;
	}

	//
	// _searchResult negative value means word is to the left,
	// positive value means word is to the right,
	// value of 0 means word was found
	//
	int _searchResult(const T& e, const T& d) {
		if ((!(e < d)) && (!(d < e)))		// found
			return 0;
		else if (e < d)
			return -1;	// element is to the left
		else
			return 1;		// element is to the right
	}

	//
	// [e]
	//
	// Returns true if set contains e, false if not.
	//
	// Requirements:
	//   1. operation time must be <= O(lgN).
	//   2. Assumes only < operator; two elements x and y are
	//      equal if (!(x<y)) && (!(y<x)).
	//
	bool operator[](const T& e)
	{
		if (find(e) != end())
			return true;
		else
			return false;
	}

	//
	// lhs = rhs;
	//
	// Makes a deep copy of rhs (right-hand-side) and assigns into
	// lhs (left-hand-side).  Any existing elements in the lhs
	// are destroyed.
	//
	// Notes:
	//   1. this is essentially a clear() followed by a copy().
	//   2. the lhs operand is hidden --- it's "this" object.
	//
	myset& operator=(const myset& rhs)
	{
		// delete old data, allocate new 
		delete[] data;
		data = new T[rhs.capacity];

		// copy the elements
		for (int i = 0; i < rhs.numElem; ++i)
			data[i] = rhs.data[i];

		this->numElem = rhs.numElem;
		this->capacity = rhs.capacity;

		return *this;
	}

	//
	// begin()
	//
	// Returns an iterator denoting the first element in the
	// set; iteration is performed in element order (as defined
	// by the < operator).
	//
	iterator begin()
	{
		return iterator(data);
	}

	//
	// end()
	//
	// Returns an iterator denoting one past the last element
	// in the iteration.
	//
	iterator end()
	{
		return iterator(&data[numElem]);
	}
};	// end of myset class
