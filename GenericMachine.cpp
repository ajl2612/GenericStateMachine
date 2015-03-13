//============================================================================
// Name        : GenericMachine.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>

#include "Event.h"
#include "EventQueue.h"

int main() {
	Event* a0 = new Event(SAMPLE_EVENT_KEY,1);
	Event* a1 = new Event(SAMPLE_EVENT_KEY,6);
	Event* a2 = new Event(SAMPLE_EVENT_KEY);

	EventQueue* q = new EventQueue();

	printf("Event Information\n");
	printf("Event  key : %c subStateID : %d\n", a0->getKey(), a0->getSubGraphID());
	printf("Event  key : %c subStateID : %d\n", a1->getKey(), a1->getSubGraphID());
	printf("Event  key : %c subStateID : %d\n", a2->getKey(), a2->getSubGraphID());

	q->push(a0);
	q->push(a1);
	q->push(a2);
	printf("Size of queue : %d\n", q->size());
	printf("Hello 1\n");
	delete q;

	//delete a0;
	//delete a1;
	//delete a2;
	printf("Hello 2\n");
	return 0;
}
