/*
 * EventQueue.cpp
 *
 *  Created on: Mar 12, 2015
 *      Author: ajl2612
 */

#include "EventQueue.h"

EventQueue::EventQueue() {
}

EventQueue::~EventQueue() {
	Event* e;
	while( !this->empty() ){
		e = this->front();
		this->pop();
		delete e;
	}
}

bool EventQueue::empty(){
    return this->eQueue.empty();
}

int EventQueue::size(){
	return this->eQueue.size();
}

Event* EventQueue::front(){
    return this->eQueue.front();
}

void EventQueue::pop(){
    this->eQueue.pop();
}

void EventQueue::push(Event* e){
    this->eQueue.push(e);
}
