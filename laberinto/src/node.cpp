/*
 * nodo.cpp
 */

#include "../include/node.hpp"
#include <iostream>

namespace eda {


Node::Node(): data(-1), ptrNext(nullptr) {
}

Node::Node(Pos pos1){
	pos = pos1;
	ptrNext = nullptr;
}

Node::Node(int val, Node* next): data(val), ptrNext(next) {

}


void Node::setData(Pos pos1){
	pos = pos1;
}

void Node::setData(int _data){
	data = _data;
}

void Node::setNext(Node* next){
	ptrNext = next;
}

int Node::getData(){
	return data;
}

Pos Node::getPos(){
	return;
}

Node* Node::getNext(){
	return ptrNext;
}

void Node::print(){
	std::cout << data ;
}

Node::~Node() {

}

} /* namespace eda */
