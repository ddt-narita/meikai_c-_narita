#ifndef ___Class_Counter
#define ___Class_Counter

#include<climits>
#define UINT_MAX 255

class Counter {
	unsigned cnt;
public:

	Counter():cnt(0){}
	operator unsigned() const {
		return cnt;
	}
	bool operator!() const {
		return cnt == 0;
	}

	Counter& operator++() {
		if(cnt < UINT_MAX) {
			cnt++;
		}
		return *this;
	}
	Counter operator++(int) {
		Counter x = *this;
		if(cnt < UINT_MAX) {
			cnt ++;
		}
		return x;
	}

};
