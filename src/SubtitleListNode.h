#pragma once

class SubtitleListNode
{
private:

	SubtitleListNode*	next;

public:
	SubtitleListNode() : next(nullptr) {}
	~SubtitleListNode() {}

	SubtitleListNode*	getNext()			{ return next; }

	void setNext(SubtitleListNode* next)	 	{ this->next = next; }
};
