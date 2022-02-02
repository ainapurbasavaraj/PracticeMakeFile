#include "Airlines.hpp"

using namespace std;


int main(){

	cout<<"My first make " <<endl;
	Airlines* obj = new Airlines("Airbus123", "A-123", 10, 6);
	obj->createSeatArrangement();

	return 0;
}
