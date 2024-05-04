//////////////////////////////
// Copyright (c) 2024 Shane So

#ifndef NODE_H
#define NODE_H

#include <iostream>

#include "console.h"
#include "crypto.h"
#include "ledger.h"

typedef unsigned long long ulongx;
typedef unsigned long long int ulint;

class Node {
public:
  Node();
private:
  struct Block {
    // Block Height
    ulongx block_height = 0;
    // Nonce Value
    ulint nonce = 0;
    // Previous Block Hash
    std::string prev_hash = "";
    // Node Data
    // Next node
    Node* next_node = nullptr;
  };
  // Head Node
  Node* head_node;
};

// Constructor
Node::Node()
{
  // Node Pointer Initialization
  head_node = nullptr;
}

#endif