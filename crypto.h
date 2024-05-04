//////////////////////////////
// Copyright (c) 2024 Shane So

#ifndef CRYPTO_H
#define CRYPTO_H

#include <iostream>

#include "console.h"
#include "ledger.h"
#include "node.h"

// Hash Function Libraries
#include "sha3.h"

class Crypto {
public:
  // Constructor
  Crypto();

  // Message Encapsulation Function
  std::string Encapsulate(
    std::string first_name
  );

  // Data Hash Encryption
  // returns the encryption hash of the message data
  std::string EncryptHash(
    std::string data
  );
private:
};

//////////////
//
// Constructor
//

Crypto::Crypto()
{
  ;
}

// Message Encapsulation Function
std::string Crypto::Encapsulate(
  std::string first_name
)
{
  std::string message = "";

  message += first_name;

  return message;
}

///////////////////////
//
// Data Hash Encryption
//

std::string Crypto::EncryptHash(
  std::string data
)
{
  //////////////////////////
  // SHA3-256 Hash Algorithm

  SHA3 sha3;

  // Message Hash Function

  return sha3(data);
}

#endif