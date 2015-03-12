/*
 * Event.h
 *
 *  Created on: Mar 12, 2015
 *      Author: ajl2612
 */

#include "EventDefinitions.h"

#ifndef GM_EVENT_H_
#define GM_EVENT_H_

class Event {
protected:
	int subGraphID;
	char eventKey;

public:
	Event(char);
	Event(char, int);
	virtual ~Event();

	int getSubGraphID();

	virtual char getKey() = 0;
};

#endif /* GM_EVENT_H_ */
