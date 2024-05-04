//////////////////////////////
// Copyright (c) 2024 Shane So

#ifndef LEDGER_H
#define LEDGER_H

#include <iostream>

#include "console.h"
#include "crypto.h"
#include "node.h"

typedef unsigned int uint;
typedef unsigned long ulong;

class Ledger
{
public:
  // General Patient Information
  struct Px;

  // Cancer and Carcinoma Information
  struct Cx;

  // Genetic Information
  struct Gx;

  // Constructor
  Ledger();
private:
};





// Ledger Constructor
Ledger::Ledger()
{
  ;
}





// Patient Information
struct Ledger::Px
{
  std::string first_name = "";
  std::string last_name = "";
  // Patient sex
  // X - Undetermined
  // M - Male
  // F - Female
  char sex = 'X';
  // Personal Health Number
  ulong PHN = 0;
  // Patient phone number
  ulong phone_no = 0;
  // Patient hospital or health facility
  std::string hospital = "";
  // Patient Facility Identifier
  std::string patient_id = "";
  // Patient Birthdate
  struct Birthdate
  {
    uint month = 0;
    uint day = 0;
    uint year = 0;
  };
  // Patient Address
  struct Address
  {
    std::string city = "";
    std::string province = "";
    std::string country = "";
    std::string postal_code = "";
  };
};





// Cancer and Tumour Information
struct Ledger::Cx
{
  // The type of cancer
  std::string cancer_type = "";
  // Site of cancer, carcinoma, or tumour
  std::string cancer_site = "";
  // Cancer status
  // Malignant or benign status
  bool malignant = false;
  // The carcinogen agent promoting the cancer
  std::string carcinogen = "";
  // Cancer cell proliferation index
  // Percentage of tumour cells
  double mitotic_index = 0;
  // Ki-67 mitotic index
  // Percentage of neuroendocrine tumours (NETs)
  double ki67_index = 0;
  // Cancer grade information
  // Cancer Grade
  // GX - Undetermined cancer grade
  // G1 - Well-differentiated tumour cells
  // G2 - Moderately differentiated tumour cells
  // G3 - Poorly differentiated tumour cells
  // G4 - Undifferentiated tumour cells
  char grade = 'X';
  // Additional information and notes
  std::string info = "";
  // Cancer stage information
  struct Stage
  {
    // Primary Tumour
    // TX - Undetermined tumour presence
    // T0 - No evidence of tumour
    // T1, T2, T3, T4 - Size and extent of tumour
    char T = 'X';
    // Regional Lymph Nodes
    // NX - Undetermined lymph node region
    // N0 - Tumour is absent in lymph nodes
    // N1, N2, N3 - Number and extent of lymph nodes affected
    char N = 'X';
    // Distant Metastasis
    // MX - Undetermined metastasis
    // M0 - No distant metastasis of cancer
    // M1 - Evident distant metastasis of cancer
    char M = 'X';
  };
  // Cancer Prognosis
  struct Prognosis
  {
    // Percentage rate of life viability
    double rate = 0;
    // Estimated patient lifespan
    // Lifespan is measured in years
    ulong lifespan = 0;
  };
  // Cancer diagnosis information
  struct Diagnosis
  {
    // Tumour marker or cancer biomarker
    std::string biomarker = "";
    // Cancer biomarker test
    std::string biomarker_test = "";
    // Biopsy Report
    std::string biopsy = "";
    // Diagnostic scanning information
    struct Scan
    {
      // Computerized Tomography Scan Result
      std::string CT = "";
      // Magnetic Resonance Imaging Result
      std::string MRI = "";
      // Positron Emission Tomography Imaging Result
      std::string PET = "";
      // Ultrasound Imaging Result
      std::string US = "";
      // X-Ray Imaging Result
      std::string XRAY = "";
    };
  };
  // Cancer treatment information
  struct Treatment {
    // Chemotherapy Report
    std::string chemotherapy = "";
    // Radiation Therapy Report
    std::string radiation = "";
    // Immunotherapy Report
    std::string immunotherapy = "";
    // Hormone Therapy Report
    std::string hormone_therapy = "";
    // Stem Cell Transplant Report
    std::string stem_cell_transplant = "";
    // Surgery Report
    std::string surgery = "";
    // Additional Treatment Report
    std::string treatment = "";
    // Treatment Report Notes
    std::string treatment_report = "";
  };
};





// Genetic Information
struct Ledger::Gx
{
  // Gene name
  std::string gene_name = "";
  // Gene symbol
  std::string gene_symbol = "";
  // Gene description and related information
  std::string gene_info = "";
  // Gene type
  std::string gene_type = "";
  // Cytogenetic information of associated gene
  struct Cytogenetic
  {
    // Nucleotide length of gene
    ulong gene_length = 0;
    // Gene position or location
    // Starting nucleotide number
    ulong start_nt = 0;
    // Ending nucleotide number
    ulong end_nt = 0;
    // Cytogenetic coordinates and locus of the gene
    struct Locus
    {
      // Chromosome unit number
      uint chromosome_num = 0;
      // Chromosome arm
      // X - Undetermined chromosome arm
      // p - p arm
      // q - q arm
      char chromosome_arm = 'X';
      // Chromosome region and band
      double chromosome_region = 0;
    };
  };
};

#endif