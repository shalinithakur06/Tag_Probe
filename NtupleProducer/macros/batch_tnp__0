#!/bin/bash
cd /afs/cern.ch/work/s/skeshri/private/test  ### change the path
cp `voms-proxy-info --path` .  ### if ntuple is not at cern eos then proxy is needed
export X509_USER_PROXY=`ls x509up*` 
./tnp  TnP_tree_Run2017C_test.txt  efficiency 
