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
  << "First Name: "
  << first_name
  << std::endl
  << "Last Name: "
  << std::endl
  << last_name
  << "Sex: "
  << sex
  << std::endl
  << "Personal Health Number: "
  << PHN
  << std::endl
  << "Phone Number: "
  << phone_no
  << std::endl
  << "Hospital/Facility: "
  << hospital
  << std::endl
  << "Patient Identifier: "
  << patient_id
  << std::endl
  << "Birthdate: "
  << month
  << "/"
  << day
  << "/"
  << year
  << std::endl
  << "Address: "
  << city
  << ", "
  << province
  << ", "
  << country
  << ", "
  << postal_code
  << std::endl
  << "Cancer Type: "
  << cancer_type
  << std::endl
  << "Cancer Site: "
  << cancer_site
  << std::endl
  << "Cancer Status: "
  << malignant
  << std::endl
  << "Carcinogen: "
  << carcinogen
  << std::endl
  << "Mitotic Index: "
  << mitotic_index
  << std::endl
  << "Ki-67 Index: "
  << ki67_index
  << std::endl
  << "Cancer Grade: "
  << grade
  << std::endl
  << "Additional Information: "
  << info
  << std::endl
  << "Primary Tumour: "
  << T
  << std::endl
  << "Regional Lymph Nodes: "
  << N
  << std::endl
  << "Distant Metastasis: "
  << M
  << std::endl
  << "Life Viability Rate: "
  << rate
  << std::endl
  << "Lifespan Expectancy: "
  << lifespan
  << std::endl
  << "Biomarker"
  << biomarker
  << std::endl
  << "Biomarker Test: "
  << biomarker_test
  << std::endl
  << "Biopsy: "
  << biopsy
  << std::endl
  << "Computerized Tomography Scan Result: "
  << CT
  << std::endl
  << "Magnetic Resonance Imaging Result: "
  << MRI
  << std::endl
  << "Positron Emission Tomography Imaging Result: "
  << PET
  << std::endl
  << "Ultrasound Imaging Result: "
  << US
  << std::endl
  << "X-Ray Imaging Result: "
  << XRAY
  << std::endl
  << "Chemotherapy Report: "
  << chemotherapy
  << std::endl
  << "Radiation Therapy Report: "
  << radiation
  << std::endl
  << "Immunotherapy Report: "
  << immunotherapy
  << std::endl
  << "Hormone Therapy Report: "
  << hormone_therapy
  << std::endl
  << "Stem Cell Transplant Report: "
  << stem_cell_transplant
  << std::endl
  << "Surgery Report: "
  << surgery
  << std::endl
  << "Additional Treatment: "
  << treatment
  << std::endl
  << "Treatment Report Notes: "
  << treatment_report
  << std::endl
  << "Gene Name: "
  << gene_name
  << std::endl
  << "Gene Symbol: "
  << gene_symbol
  << std::endl
  << "Gene Description: "
  << gene_info
  << std::endl
  << "Gene Type: "
  << gene_type
  << std::endl
  << "Gene Length: "
  << gene_length
  << std::endl
  << "Starting Nucleotide: "
  << start_nt
  << std::endl
  << "Ending Nucleotide: "
  << end_nt
  << std::endl
  << "Cytogenetic Coordinates: "
  << chromosome_num
  << chromosome_arm
  << chromosome_region
  << std::endl
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