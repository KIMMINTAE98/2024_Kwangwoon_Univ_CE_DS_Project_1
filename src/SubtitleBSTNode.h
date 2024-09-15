#pragma once

class SubtitleBSTNode
{
private:

	SubtitleBSTNode*	left;
	SubtitleBSTNode*	right;

public:
	SubtitleBSTNode() : left(nullptr), right(nullptr) {}
	~SubtitleBSTNode() {}

	SubtitleBSTNode*	getLeft()				{ return left; }
	SubtitleBSTNode*	getRight()				{ return right; }

	void setLeft(SubtitleBSTNode* left)		{ this->left = left; }
	void setRight(SubtitleBSTNode* right)	{ this->right = right; }
};
