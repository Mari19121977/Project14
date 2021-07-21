#include <iostream>
using namespace std;
class red_book {

};
class animals : public red_book
{
public:
	animals() {}
	virtual void set(char* name) {

	}
	virtual void add() = 0;


	animals();

};