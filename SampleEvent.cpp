/*
 * SampleEvent.cpp
 *
 *  Created on: Mar 12, 2015
 *      Author: ajl2612
 */

#include "SampleEvent.h"

SampleEvent::SampleEvent(char key) : Event(key){}

SampleEvent::SampleEvent(char key, int subGraph) : Event(key, subGraph){}

SampleEvent::~SampleEvent() {}

char SampleEvent::getKey(){
	return SAMPLE_EVENT_KEY;
}
