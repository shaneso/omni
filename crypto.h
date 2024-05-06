//////////////////////////////
// Copyright (c) 2024 Shane So

#ifndef CRYPTO_H
#define CRYPTO_H

#include <iostream>
#include <string>
#include <sstream>

// Hash Function Libraries
#include "sha3.h"

typedef unsigned long ulong;
typedef unsigned long long ulongx;
typedef unsigned int uint;

class Crypto {
public:
  // Constructor
  Crypto();

  // Message Encapsulation Function
  std::string Encapsulate(
    std::string first_name,
    std::string last_name,
    char sex,
    ulong PHN,
    ulong phone_no,
    std::string hospital,
    std::string patient_id,

    uint month,
    uint day,
    uint year,

    std::string city,
    std::string province,
    std::string country,
    std::string postal_code,

    std::string cancer_type,
    std::string cancer_site,
    bool malignant,
    std::string carcinogen,
    double mitotic_index,
    double ki67_index,
    char grade,
    std::string info,

    char T,
    char N,
    char M,

    double rate,
    ulong lifespan,

    std::string biomarker,
    std::string biomarker_test,
    std::string biopsy,

    std::string CT,
    std::string MRI,
    std::string PET,
    std::string US,
    std::string XRAY,

    std::string chemotherapy,
    std::string radiation,
    std::string immunotherapy,
    std::string hormone_therapy,
    std::string stem_cell_transplant,
    std::string surgery,
    std::string treatment,
    std::string treatment_report,

    std::string gene_name,
    std::string gene_symbol,
    std::string gene_info,
    std::string gene_type,

    ulong gene_length,
    ulong start_nt,
    ulong end_nt,

    uint chromosome_num,
    char chromosome_arm,
    double chromosome_region
  );

  // Data Hash Encryption
  // Returns the encryption hash of
  // the encapsulated message data
  std::string Hash(std::string data);
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
  std::string first_name,
  std::string last_name,
  char sex,
  ulong PHN,
  ulong phone_no,
  std::string hospital,
  std::string patient_id,

  uint month,
  uint day,
  uint year,

  std::string city,
  std::string province,
  std::string country,
  std::string postal_code,

  std::string cancer_type,
  std::string cancer_site,
  bool malignant,
  std::string carcinogen,
  double mitotic_index,
  double ki67_index,
  char grade,
  std::string info,

  char T,
  char N,
  char M,

  double rate,
  ulong lifespan,

  std::string biomarker,
  std::string biomarker_test,
  std::string biopsy,

  std::string CT,
  std::string MRI,
  std::string PET,
  std::string US,
  std::string XRAY,

  std::string chemotherapy,
  std::string radiation,
  std::string immunotherapy,
  std::string hormone_therapy,
  std::string stem_cell_transplant,
  std::string surgery,
  std::string treatment,
  std::string treatment_report,

  std::string gene_name,
  std::string gene_symbol,
  std::string gene_info,
  std::string gene_type,

  ulong gene_length,
  ulong start_nt,
  ulong end_nt,

  uint chromosome_num,
  char chromosome_arm,
  double chromosome_region
)
{
  std::string message = "";

  std::stringstream ss;

  ss
  << first_name
  << last_name
  << sex
  << PHN
  << phone_no
  << hospital
  << patient_id
  << month
  << day
  << year
  << city
  << province
  << country
  << postal_code
  << cancer_type
  << cancer_site
  << malignant
  << carcinogen
  << mitotic_index
  << ki67_index
  << grade
  << info
  << T
  << N
  << M
  << rate
  << lifespan
  << biomarker
  << biomarker_test
  << biopsy
  << CT
  << MRI
  << PET
  << US
  << XRAY
  << chemotherapy
  << radiation
  << immunotherapy
  << hormone_therapy
  << stem_cell_transplant
  << surgery
  << treatment
  << treatment_report
  << gene_name
  << gene_symbol
  << gene_info
  << gene_type
  << gene_length
  << start_nt
  << end_nt
  << chromosome_num
  << chromosome_arm
  << chromosome_region
  ;

  ss >> message;

  return message;
}

///////////////////////
//
// Data Hash Encryption
//

std::string Crypto::Hash(std::string data)
{
  //////////////////////////
  // SHA3-256 Hash Algorithm

  SHA3 sha3;

  data = sha3(data);
  data = sha3(data);
  data = sha3(data);

  // Hash Hex Signature Prefix
  data.insert(0, 1, 'x');
  data.insert(0, 1, '0');

  return data;
}

#endif