
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

class TriangleSet {
public:
	TriangleSet(int rPin, int gPin, int bPin);
	void goRed();
	void goBlue();
	void goGreen();
	void goFull();
	void goZero();

private:
	int _rPin;
	int _gPin;
	int _bPin;
};
