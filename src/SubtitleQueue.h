#pragma once
#include "SubtitleQueueNode.h"

class SubtitleQueue
{
private:

public:
	SubtitleQueue();
	~SubtitleQueue();

	bool IsEmpty();
	bool IsFull();
	void Push();
	SubtitleQueueNode Pop();
	SubtitleQueueNode Front();
};
