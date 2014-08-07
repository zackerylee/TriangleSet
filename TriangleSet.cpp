#include <TriangleSet.h>



TriangleSet::TriangleSet(int rPin, int gPin, int bPin) {
	_rPin = rPin;
	_gPin = gPin;
	_bPin = bPin;
}

void TriangleSet::goRed() {
	analogWrite(_rPin, 0);
	analogWrite(_gPin, 255);
	analogWrite(_bPin, 255);
}
void TriangleSet::goBlue() {
	analogWrite(_rPin, 255);
	analogWrite(_gPin, 255);
	analogWrite(_bPin, 0);
}
void TriangleSet::goGreen() {
	analogWrite(_rPin, 255);
	analogWrite(_gPin, 0);
	analogWrite(_bPin, 255);
}
void TriangleSet::goFull() {
	analogWrite(_rPin, 255);
	analogWrite(_gPin, 255);
	analogWrite(_bPin, 255);
}
void TriangleSet::goZero() {
	analogWrite(_rPin, 0);
	analogWrite(_gPin, 0);
	analogWrite(_bPin, 0);
}

