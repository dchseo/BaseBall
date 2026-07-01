#include <stdexcept>

using namespace std;



class Baseball {

public:

	void guess(const string& string)
	{
		throw length_error("must be three letters.");
	}

};