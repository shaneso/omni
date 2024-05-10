//////////////////////////////
// Copyright (c) 2024 Shane So

#ifndef NODE_H
#define NODE_H

#include <iostream>

#include "crypto.h"
#include "ledger.h"

typedef unsigned long int ulint;

class Block {
public:
  // Block Constructor
  Block();
  // Block Node Creation Function
private:
  struct Node {
    // Block Height
    ulint block_height = 0;
    // Block Hash
    std::string *hash;
    // Node Block Comment
    std::string comment = "";
    // Next node
    Node *next_node = nullptr;
    // Node Data
  };
  // Head Node
  Node *head_node = nullptr;
};

// Constructor
Block::Block()
{
  // Genesis Block Node Initialization
  Node *genesis = nullptr;
  // Head Node Pointer Initialization
  head_node = genesis;
  // Genesis Block Hash
  *genesis->hash = "0x3f9be4259bea0221f4665544861a5c2595c0fe0fb1c5867b069cabf2683bd1c6";
  // Node Block Comment
  genesis->comment = "Genesis Node Block";
}

#endif