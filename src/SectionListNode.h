#pragma once
#include "SubtitleListNode.h"

class SectionListNode
{
private:

	SectionListNode*	next;

public:
	SectionListNode() : next(nullptr) {}
	~SectionListNode() {}

	SectionListNode*	getNext()		 	{ return next; }
	
	void setNext(SectionListNode* next)	 					{ this->next = next; }
};
