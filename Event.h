/*
 * Event.h
 *
 *  Created on: Mar 12, 2015
 *      Author: ajl2612
 */

#ifndef GM_EVENT_H_
#define GM_EVENT_H_

#include "EventDefinitions.h"

class Event {
private:
	int subGraphID;
	char eventKey;

public:
	Event(char);
	Event(char, int);
	virtual ~Event();

	int getSubGraphID();
	char getKey();
};

#endif /* GM_EVENT_H_ */
