//////////////////////////////
// Copyright (c) 2024 Shane So

#ifndef NODE_H
#define NODE_H

#include <iostream>

#include "crypto.h"

typedef unsigned long int ulint;

class Node {
public:
  // Constructor
  Node();
  // Node Insertion
  void InsertNode(std::string data);
  // Nodechain Console Output
  void OutputNode();
private:
  struct
  {
    std::string data = "";
    Node* next_node = nullptr;
  };
  Node* genesis_node;
};

// Constructor
Node::Node()
{
  genesis_node = nullptr;
}

void Node::InsertNode(std::string data)
{
  Node* new_node = new Node;
  new_node->data = data;
  if (genesis_node == NULL)
  {
    genesis_node = new_node;
    return;
  }
  Node* tmp_node = genesis_node;
  while (tmp_node->next_node != NULL)
  {
    tmp_node = tmp_node->next_node;
  }
  tmp_node->next_node = new_node;
}

void Node::OutputNode()
{
  Node* tmp_node = genesis_node;
  while (tmp_node->next_node != NULL)
  {
    std::cout << tmp_node->data << std::endl << std::endl;
    tmp_node = tmp_node->next_node;
  }
}

#endif