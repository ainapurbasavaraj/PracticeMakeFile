#include "iostream"
#include "string"
#include "map"
using namespace std;

class Airlines{

public:
	typedef std::map<string, string> SEATMAP; 

	Airlines(string name, string flightNo, int numRows, int seatsInEachRow):
	_name(name),
	_flightNo(flightNo),
	_numRows(numRows),
	_seatsInEachRow(seatsInEachRow){
	}

	Airlines(const Airlines& obj){
		_name = obj._name;
		_flightNo = obj._flightNo;
		_numRows = obj._numRows;
		_seatsInEachRow = obj._seatsInEachRow;
	}

	Airlines& operator=(const Airlines& obj){
		_name = obj._name;
		_flightNo = obj._flightNo;
		_numRows = obj._numRows;
		_seatsInEachRow = obj._seatsInEachRow;
		return *this;
	}

	const string& getAirlineName() const { return _name; }
	const string& getFlightNo() const { return _flightNo; }
	
	void createSeatArrangement();
	SEATMAP getSeatMap() { return _seatArrangement; }
	
private:

	string _name;
	string _flightNo;
	int _numRows;
	int _seatsInEachRow;
	std::map<string, string> _seatArrangement;
};
