/*
 * Event.cpp
 *
 *  Created on: Mar 12, 2015
 *      Author: ajl2612
 */

#include "Event.h"

Event::Event(char key) {
	this->eventKey = key;
	this->subGraphID = 0;
}

Event::Event(char key, int subGraph) {
	this->eventKey = key;
	this->subGraphID = subGraph;
}

Event::~Event() {}

int Event::getSubGraphID(){
	return this->subGraphID;
}
