/*
 * EventQueue.h
 *
 *  Created on: Mar 12, 2015
 *      Author: ajl2612
 */

#ifndef GM_EVENTQUEUE_H_
#define GM_EVENTQUEUE_H_

#include <queue>
#include "Event.h"

class EventQueue {
private:
	std::queue<Event*> eQueue;
public:
	EventQueue();
	virtual ~EventQueue();

	bool empty();
	int size();
	Event* front();
	void pop();
	void push(Event*);
};

#endif /* GM_EVENTQUEUE_H_ */
