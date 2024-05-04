//////////////////////////////
// Copyright (c) 2024 Shane So

#include <iostream>
#include <vector>

#include "ledger.h"
#include "crypto.h"
#include "console.h"
#include "node.h"





/////////////////
//
// Program Driver
//

int main()
{
  // Data Ledger Initialization

  // Patient Information
  Ledger::Px patient;

  Ledger::Px::Birthdate birthdate;
  Ledger::Px::Address address;

  // Cancer and Tumour Information
  Ledger::Cx cancer;

  Ledger::Cx::Stage stage;
  Ledger::Cx::Prognosis prognosis;
  Ledger::Cx::Diagnosis diagnosis;
  Ledger::Cx::Diagnosis::Scan scan;
  Ledger::Cx::Treatment treatment;

  // Genetic Information
  Ledger::Gx gene;

  Ledger::Gx::Cytogenetic cytogenetic;
  Ledger::Gx::Cytogenetic::Locus locus;





  // Cryptographic Testing
  Crypto crypto;

  // Node Testing
  Node node;





  ///////////////////////////
  //
  // Console Output Functions
  //

  Console console;

  /*
  console.Px
  (
    patient.first_name,
    patient.last_name,
    patient.PHN,
    patient.phone_no,
    patient.hospital,
    patient.patient_id,
    patient.sex,
    birthdate.month,
    birthdate.day,
    birthdate.year,
    address.city,
    address.province,
    address.country,
    address.postal_code
  );

  console.Cx
  (
    cancer.cancer_type,
    cancer.cancer_site,
    cancer.carcinogen,
    cancer.mitotic_index,
    cancer.ki67_index,
    cancer.grade,
    cancer.info,
    cancer.malignant,
    stage.T,
    stage.N,
    stage.M,
    prognosis.rate,
    prognosis.lifespan,
    diagnosis.biomarker,
    diagnosis.biomarker_test,
    diagnosis.biopsy,
    scan.CT,
    scan.MRI,
    scan.PET,
    scan.US,
    scan.XRAY,
    treatment.chemotherapy,
    treatment.radiation,
    treatment.immunotherapy,
    treatment.hormone_therapy,
    treatment.stem_cell_transplant,
    treatment.surgery,
    treatment.treatment,
    treatment.treatment_report
  );

  console.Gx
  (
    gene.gene_name,
    gene.gene_symbol,
    gene.gene_info,
    gene.gene_type,
    cytogenetic.gene_length,
    cytogenetic.start_nt,
    cytogenetic.end_nt,
    locus.chromosome_num,
    locus.chromosome_arm,
    locus.chromosome_region
  );
  */

  return 0;
}