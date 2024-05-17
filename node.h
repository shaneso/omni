//////////////////////////////
// Copyright (c) 2024 Shane So

#ifndef NODE_H
#define NODE_H

#include <iostream>

#include "crypto.h"
#include "sha3.h"

typedef unsigned long int ulint;

class Block {
public:
  // Constructor
  Block();
  // Node Insertion
  void InsertNode(std::string data);
  // Nodechain Console Output
  void OutputNode();
private:
  struct Node
  {
    std::string data = "";
    std::string hash = "";
    std::string prev_hash = "";
    ulint height = 0;
    Node* next_node = nullptr;
  };
  Node* genesis_node;
  SHA3 sha3;
};

// Constructor
Block::Block()
{
  genesis_node = nullptr;
}

void Block::InsertNode(std::string data)
{
  Node* new_node = new Node;
  new_node->data = data;
  if (genesis_node == NULL)
  {
    // Previous Node Hash
    new_node->prev_hash = "0x0000000000000000000000000000000000000000000000000000000000000000";
    // Node Hash
    new_node->hash = sha3(data + new_node->prev_hash);
    new_node->hash.insert(0, 1, 'x');
    new_node->hash.insert(0, 1, '0');
    // Genesis Node Pointer
    genesis_node = new_node;
    return;
  }
  Node* tmp_node = genesis_node;
  while (tmp_node->next_node != NULL)
  {
    new_node->height++;
    tmp_node = tmp_node->next_node;
  }
  tmp_node->next_node = new_node;
  // Increment Node Height
  new_node->height++;
  // Previous Node Hash
  new_node->prev_hash = tmp_node->hash;
  // Node Hash
  new_node->hash = sha3(data + new_node->prev_hash);
  new_node->hash.insert(0, 1, 'x');
  new_node->hash.insert(0, 1, '0');
}

void Block::OutputNode()
{
  Node* tmp_node = genesis_node;
  while (tmp_node->next_node != NULL)
  {
    std::cout << "BLOCK "
    << tmp_node->height
    << std::endl
    << "Hash: "
    << tmp_node->hash
    << std::endl
    << "Previous Hash: "
    << tmp_node->prev_hash
    << std::endl
    << "Height: "
    << tmp_node->height
    << std::endl
    << std::endl
    << tmp_node->data
    ;
    tmp_node = tmp_node->next_node;
  }
}

#endif