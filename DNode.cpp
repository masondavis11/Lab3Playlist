#include "DNode.hpp"

// Default constructor
DNode::DNode() : song(nullptr), prev(nullptr), next(nullptr) {}

// Parameterized constructor
DNode::DNode(string s, string a, int lenmin, int lensec) : prev(nullptr), next(nullptr) {
    song = new Song(s, a, lenmin, lensec);
}
