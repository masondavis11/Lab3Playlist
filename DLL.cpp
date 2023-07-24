
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
		int length = getLength();
		DNode current = first;
		for (int i=0;i<length;i++){
			int index = rand() % length;
			DNode switchNode = findNode(index);
			current->data = switchNode->data;
			switchNode->data=current->data;
		}
		int getLength(){
			int count = 0;
			DNode* current = first
			while(current != nullptr){
				count++;
				current = current->next;
			return count
				}
		}

		DNode* findNode (int randindex) {
			DNode* current = first;
			for (int i=0;i<randindex;i++) {
				current = current->next
			}
		}
		
	}
	int DLL::remove(string s) {  
// note that the int returned is the index - this is standard for a remove, but we won't be using it.
		}


	DLL::~DLL(){
	}
