
#include "DNode.hpp"
#include "DLL.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

//Check Playlist.cpp for instructions of what to write here and how to test it


	DLL::DLL(){  // constructor - initializes an empty list
		last = NULL;
		first = NULL;
		numSongs = 0;
	}
	DLL::DLL(string t, string l, int m, int s){  // constructor, initializes a list with one new node with data x
		DNode *n = new DNode (t,l,m,s);
		first = n;
		last = n;
		numSongs=1;
	}
	void DLL::push(string n, string a, int m, int s) {  // does what you'd think
			}
	Song *DLL::pop() { //does what you'd think
	}

	void DLL::printList() {
	}

	void DLL::moveUp(string s) {
	}

	void DLL::listDuration(int *tm, int *ts) {
			}
	void DLL::moveDown(string s) {
			}
	void DLL::makeRandom() {
		//int length = getLength()
		//int random = rand() % length
		//char temp = currentNode->data
		//write a helper to find a node at &random
		//current->data = node at &random->data
		//node at &random->data = temp

		//int getLength(){
			//int count = 0;
			//while(currentNode != null){
				//count++;
				//currentNode = currentNode->next;
		//}

		//Node findNode(int randomindex) {
			//for (int i=0;i<=randomindex;i++) {
				//Node current = current->next;
				//}
			//return current;
		//}
		}
	int DLL::remove(string s) {  
// note that the int returned is the index - this is standard for a remove, but we won't be using it.
		}


	DLL::~DLL(){
	}
