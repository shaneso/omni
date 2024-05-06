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
  Block();
private:
  struct Node {
    // Block Height
    ulint block_height = 0;
    // Block Hash
    std::string hash = "";
    // Previous Block Hash
    std::string prev_hash = prev_node->hash;
    // TODO Node Data

    // Previous Node
    Node *prev_node = nullptr;
    // Next node
    Node *next_node = nullptr;
  };
  // Head Node
  Node *head_node = nullptr;
  // Tail Node
  Node *tail_node = nullptr;
};

// Constructor
Block::Block()
{
  // Node Pointer Initialization
  Node *node = tail_node;
  head_node = node;
  tail_node = nullptr;

  // Node Hash Initialization
  head_node->hash = "0000000000000000000000000000000000000000000000000000000000000000";
  head_node->prev_hash = "0000000000000000000000000000000000000000000000000000000000000000";

  tail_node->hash = "0000000000000000000000000000000000000000000000000000000000000000";
  tail_node->prev_hash = "0000000000000000000000000000000000000000000000000000000000000000";

  // TODO current node hash from crypto hash method

  // TODO node data

  // Block Height Initialization
  node->block_height = 1;

  // Node Link Initialization
  head_node->prev_node = head_node;
  tail_node->prev_node = node;
}

#endif