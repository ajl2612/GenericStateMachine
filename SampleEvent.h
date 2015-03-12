/*
 * SampleEvent.h
 *
 *  Created on: Mar 12, 2015
 *      Author: ajl2612
 */
#include "Event.h"

#ifndef SAMPLEEVENT_H_
#define SAMPLEEVENT_H_

class SampleEvent : public Event{
public:
	SampleEvent(char);
	SampleEvent(char, int);
	virtual ~SampleEvent();

	char getKey();
};

#endif /* SAMPLEEVENT_H_ */
