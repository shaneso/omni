# Omni Beta

Omni beta is a console software application which uses a blockchain ledger system to track and store data from patients with cancer and neoplastic complexities.

### Security

By leveraging a module based on the Secure Hash Algorithm (SHA) released by the National Institute of Standards and Technology (NIST), specifically the SHA3-256 non-collision hash function, Omni encrypts patient and healthcare data in order to maintain secure medical privacy.

### Node Network

Using a dynamic linked list structure to build the node ledger, the program creates a new node network for each patient. Every block, excluding the genesis node, calculates its hash by merging the current block data and the hash of the previous block prior. This creates a linked system of data storage which safeguards against potential data manipulation of a node in the chain.

### Health Data

Omni provides information for healthcare professionals such as the cancer type, site of infection, carcinogen, mitotic and Ki-67 indexes, TNM staging, prognosis, biomarkers, scans, treatments, and many more.