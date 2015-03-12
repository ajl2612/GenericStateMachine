//============================================================================
// Name        : GenericMachine.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Event.h"
#include "SampleEvent.h"

using namespace std;

int main() {
	Event* a0 = new SampleEvent(SAMPLE_EVENT,1);
	SampleEvent a1 = SampleEvent(SAMPLE_EVENT);
	SampleEvent a2 = SampleEvent(SAMPLE_EVENT,6);
	cout << "!!!Hello World!!!" << endl;
	cout << a0->getSubGraphID() << " : " << a0->getKey() << endl;
	cout << a1.getSubGraphID() << " : " << a1.getKey() << endl;
	cout << a2.getSubGraphID() << " : " << a2.getKey() << endl;

	delete a0;
	return 0;
}
