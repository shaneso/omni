//////////////////////////////
// Copyright (c) 2024 Shane So

#ifndef CONSOLE_H
#define CONSOLE_H

#include "crypto.h"
#include "ledger.h"
#include "node.h"

typedef unsigned int uint;
typedef unsigned long ulong;

class Console {
public:
  void Birthdate
  (
    uint month,
    uint day,
    uint year
  );
  void Address
  (
    std::string city,
    std::string province,
    std::string country,
    std::string postal_code
  );

  void Px
  (
    std::string first_name,
    std::string last_name,
    ulong PHN,
    ulong phone_no,
    std::string hospital,
    std::string patient_id,
    char sex,
    // Patient Birthdate
    uint month,
    uint day,
    uint year,
    // Patient Address
    std::string city,
    std::string province,
    std::string country,
    std::string postal_code
  );

  void Status(bool status);
  void Stage(char T, char N, char M);
  void Prognosis(double rate, ulong lifespan);
  void Diagnosis(
    std::string biomarker,
    std::string biomarker_test,
    std::string biopsy,
    // Diagnostic Scanning Information Parameters
    std::string CT,
    std::string MRI,
    std::string PET,
    std::string US,
    std::string XRAY
  );
  void Treatment(
    std::string chemotherapy,
    std::string radiation,
    std::string immunotherapy,
    std::string hormone_therapy,
    std::string stem_cell_transplant,
    std::string surgery,
    std::string treatment,
    std::string treatment_report
  );

  void Cx(
    std::string cancer_type,
    std::string cancer_site,
    std::string carcinogen,
    double mitotic_index,
    double ki67_index,
    char grade,
    std::string info,
    // Cancer status
    bool status,
    // Cancer stage information
    char T,
    char N,
    char M,
    // Cancer Prognosis
    double rate,
    ulong lifespan,
    // Cancer diagnosis information
    std::string biomarker,
    std::string biomarker_test,
    std::string biopsy,
    // Diagnostic scanning information
    std::string CT,
    std::string MRI,
    std::string PET,
    std::string US,
    std::string XRAY,
    // Cancer treatment information
    std::string chemotherapy,
    std::string radiation,
    std::string immunotherapy,
    std::string hormone_therapy,
    std::string stem_cell_transplant,
    std::string surgery,
    std::string treatment,
    std::string treatment_report
  );

  void Cytogenetic
  (
    ulong gene_length,
    ulong start_nt,
    ulong end_nt,
    // Cytogenetic coordinates and locus of the gene
    uint chromosome_num,
    char chromosome_arm,
    double chromosome_region
  );
  void Locus
  (
    uint chromosome_num,
    char chromosome_arm,
    double chromosome_region
  );
  void Gx
  (
    std::string gene_name,
    std::string gene_symbol,
    std::string gene_info,
    std::string gene_type,
    // Cytogenetic information of associated gene
    ulong gene_length,
    ulong start_nt,
    ulong end_nt,
    // Cytogenetic coordinates and locus of the gene
    uint chromosome_num,
    char chromosome_arm,
    double chromosome_region
  );
private:
};





// General Patient Information

void Console::Birthdate
(
  uint month,
  uint day,
  uint year
)
{
  std::cout << "Birthdate: "
  << month
  << "/"
  << day
  << "/"
  << year
  << std::endl;
}

void Console::Address
(
  std::string city,
  std::string province,
  std::string country,
  std::string postal_code
)
{
  std::cout << "Address: "
  << city
  << ", "
  << province
  << ", "
  << country
  << ", "
  << postal_code
  << std::endl;
}

// Main Patient Console Output
void Console::Px
(
  std::string first_name,
  std::string last_name,
  ulong PHN,
  ulong phone_no,
  std::string hospital,
  std::string patient_id,
  char sex,
  // Patient Birthdate
  uint month,
  uint day,
  uint year,
  // Patient Address
  std::string city,
  std::string province,
  std::string country,
  std::string postal_code
)
{
  std::cout << "PATIENT INFORMATION" << std::endl;
  std::cout << std::endl;

  std::cout << "First Name: " << first_name << std::endl;
  std::cout << "Last Name: " << last_name << std::endl;
  std::cout << "Personal Health Number: " << PHN << std::endl;
  std::cout << "Phone Number: " << phone_no << std::endl;
  std::cout << "Hospital/Facility: " << hospital << std::endl;
  std::cout << "Patient Identifier: " << patient_id << std::endl;
  std::cout << "Sex: " << sex << std::endl;
  Birthdate
  (
    month,
    day,
    year
  );
  Address
  (
    city,
    province,
    country,
    postal_code
  );
  std::cout << std::endl;
}





// Cancer and Tumour Information

void Console::Status(bool status)
{
  (status)
  ? std::cout << "Cancer Status: " << "Malignant"
  : std::cout << "Cancer Status: " << "Benign";
  std::cout << std::endl << std::endl;
}

void Console::Stage(char T, char N, char M)
{
  // Cancer Stage Console Output
  std::cout << "Cancer Stage" << std::endl;
  std::cout << std::endl;

  std::cout << "Primary Tumour: T" << T << std::endl;
  std::cout << "Regional Lymph Nodes: N" << N << std::endl;
  std::cout << "Distant Metastasis: M" << M << std::endl;

  std::cout << std::endl;
}

void Console::Prognosis(double rate, ulong lifespan)
{
  std::cout << "Cancer Prognosis" << std::endl;
  std::cout << std::endl;

  std::cout << "Life Viability Rate: " << rate << std::endl;
  std::cout << "Lifespan Expectancy: " << lifespan << std::endl;

  std::cout << std::endl;
}

void Console::Diagnosis(
  std::string biomarker,
  std::string biomarker_test,
  std::string biopsy,
  // Diagnostic Scanning Information Parameters
  std::string CT,
  std::string MRI,
  std::string PET,
  std::string US,
  std::string XRAY
)
{
  std::cout << "CANCER DIAGNOSTICS" << std::endl;
  std::cout << std::endl;

  std::cout << "Biomedical Testing" << std::endl;
  std::cout << std::endl;

  std::cout << "Biomarker: " << biomarker << std::endl;
  std::cout << "Biomarker Test: " << biomarker_test << std::endl;
  std::cout << "Biopsy: " << biopsy << std::endl;

  std::cout << std::endl;

  // Diagnostic Scanning Information
  std::cout << "Diagnostic Scanning" << std::endl;
  std::cout << std::endl;

  std::cout << "Computerized Tomography Scan Result: " << CT << std::endl;
  std::cout << "Magnetic Resonance Imaging Result: " << MRI << std::endl;
  std::cout << "Positron Emission Tomography Imaging Result: " << PET << std::endl;
  std::cout << "Ultrasound Imaging Result: " << US << std::endl;
  std::cout << "X-Ray Imaging Result: " << XRAY << std::endl;

  std::cout << std::endl;
}

void Console::Treatment(
  std::string chemotherapy,
  std::string radiation,
  std::string immunotherapy,
  std::string hormone_therapy,
  std::string stem_cell_transplant,
  std::string surgery,
  std::string treatment,
  std::string treatment_report
)
{
  std::cout << "Cancer Treatment" << std::endl;
  std::cout << std::endl;

  std::cout << "Chemotherapy Report: " << chemotherapy << std::endl;
  std::cout << "Radiation Therapy Report: " << radiation << std::endl;
  std::cout << "Immunotherapy Report: " << immunotherapy << std::endl;
  std::cout << "Hormone Therapy Report: " << hormone_therapy << std::endl;
  std::cout << "Stem Cell Transplant Report: " << stem_cell_transplant << std::endl;
  std::cout << "Surgery Report: " << surgery << std::endl;
  std::cout << "Additional Treatment: " << treatment << std::endl;
  std::cout << "Treatment Report Notes: " << treatment_report << std::endl;
}

// Main Cancer and Tumour Console
void Console::Cx
(
  std::string cancer_type,
  std::string cancer_site,
  std::string carcinogen,
  double mitotic_index,
  double ki67_index,
  char grade,
  std::string info,
  // Cancer status
  bool status,
  // Cancer stage information
  char T,
  char N,
  char M,
  // Cancer Prognosis
  double rate,
  ulong lifespan,
  // Cancer diagnosis information
  std::string biomarker,
  std::string biomarker_test,
  std::string biopsy,
  // Diagnostic scanning information
  std::string CT,
  std::string MRI,
  std::string PET,
  std::string US,
  std::string XRAY,
  // Cancer treatment information
  std::string chemotherapy,
  std::string radiation,
  std::string immunotherapy,
  std::string hormone_therapy,
  std::string stem_cell_transplant,
  std::string surgery,
  std::string treatment,
  std::string treatment_report
)
{
  std::cout << "CANCER AND TUMOUR INFORMATION" << std::endl;
  std::cout << std::endl;

  std::cout << "Cancer Type: " << cancer_type << std::endl;
  std::cout << "Cancer Site: " << cancer_site << std::endl;
  std::cout << "Carcinogen: " << carcinogen << std::endl;
  std::cout << "Mitotic Index: " << mitotic_index << std::endl;
  std::cout << "Ki-67 Index: " << ki67_index << std::endl;
  std::cout << "Cancer Grade: G" << grade << std::endl;
  std::cout << "Additional Information: " << info << std::endl;
  Status(status);
  Stage(T, N, M);
  Prognosis(rate, lifespan);
  Diagnosis(
    biomarker,
    biomarker_test,
    biopsy,
    // Diagnostic Scanning Information Parameters
    CT,
    MRI,
    PET,
    US,
    XRAY
  );
  Treatment(
    chemotherapy,
    radiation,
    immunotherapy,
    hormone_therapy,
    stem_cell_transplant,
    surgery,
    treatment,
    treatment_report
  );
  std::cout << std::endl;
}





// Genetic Information

void Console::Locus
(
  // Cytogenetic coordinates and locus of the gene
  uint chromosome_num,
  char chromosome_arm,
  double chromosome_region
)
{
  // Gene Locus
  std::cout
  << "Cytogenetic Coordinates: "
  << chromosome_num
  << chromosome_arm
  << chromosome_region
  << std::endl;
}

void Console::Cytogenetic
(
  // Cytogenetic information of associated gene
  ulong gene_length,
  ulong start_nt,
  ulong end_nt,
  // Cytogenetic coordinates and locus of the gene
  uint chromosome_num,
  char chromosome_arm,
  double chromosome_region
)
{
  std::cout << "Gene Length: " << gene_length << std::endl;
  std::cout << "Starting Nucleotide: " << start_nt << std::endl;
  std::cout << "Ending Nucleotide: " << end_nt << std::endl;
  Locus
  (
    chromosome_num,
    chromosome_arm,
    chromosome_region
  );
}

// Main Genetic Console Output
void Console::Gx
(
  std::string gene_name,
  std::string gene_symbol,
  std::string gene_info,
  std::string gene_type,
  // Cytogenetic information of associated gene
  ulong gene_length,
  ulong start_nt,
  ulong end_nt,
  // Cytogenetic coordinates and locus of the gene
  uint chromosome_num,
  char chromosome_arm,
  double chromosome_region
)
{
  std::cout << "GENETIC INFORMATION" << std::endl;
  std::cout << std::endl;

  std::cout << "Gene Name: " << gene_name << std::endl;
  std::cout << "Gene Symbol: " << gene_symbol << std::endl;
  std::cout << "Gene Description: " << gene_info << std::endl;
  std::cout << "Gene Type: " << gene_type << std::endl;

  Cytogenetic
  (
    // Cytogenetic information
    gene_length,
    start_nt,
    end_nt,
    // Cytogenetic coordinates
    chromosome_num,
    chromosome_arm,
    chromosome_region
  );
}

#endif