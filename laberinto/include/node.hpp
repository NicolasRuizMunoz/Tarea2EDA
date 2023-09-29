/*
 * node.hpp
 *
 */
#include "pos.hpp"

#ifndef NODE_HPP_
#define NODE_HPP_

namespace eda {

class Node {
private:
	int data;
	Node* ptrNext;
	Pos pos {Pos(pos)};
public:
	Node();
	Node(Pos);
	Node(int _data, Node* next = nullptr);
	void setData(int _data);
	void setData(Pos pos);
	void setNext(Node* _next);
	int getData();
	Pos getPos();
	Node* getNext();
	void print();
	virtual ~Node();
};

} /* namespace eda */

#endif /* NODE_HPP_ */
