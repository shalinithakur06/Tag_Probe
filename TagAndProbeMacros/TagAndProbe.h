//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Sep  3 11:01:41 2018 by ROOT version 6.10/09
// from TTree EventTree/Event data
// found on file: TnP_ntuple.root
//////////////////////////////////////////////////////////

#ifndef TagAndProbe_h
#define TagAndProbe_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TLorentzVector.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "iostream"
#include "fstream"
#include "cstdlib"

using namespace std;

class TagAndProbe {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           run;
   Int_t           pvNTracks;
   Int_t           good_vertices;
   Int_t           nPV;
   Int_t           nPU;
   Int_t           nPUTrue;
   Float_t         rho;
   Float_t         genWeight;
   Int_t           nEle;
   vector<double>  *ele_pt;
   vector<double>  *ele_eta;
   vector<double>  *ele_etaSC;
   vector<double>  *ele_phi;
   vector<double>  *ele_phiSC;
   vector<double>  *ele_energy;
   vector<double>  *ele_energySC;
   vector<double>  *ele_charge;
   vector<double>  *ele_dEtaIn;
   vector<double>  *ele_dEtaSeed;
   vector<double>  *ele_dPhiIn;
   vector<double>  *ele_hOverE;
   vector<double>  *ele_full5x5_sigmaIetaIeta;
   vector<double>  *ele_isoChargedHadrons;
   vector<double>  *ele_isoNeutralHadrons;
   vector<double>  *ele_isoPhotons;
   vector<double>  *ele_relCombIsoWithEA;
   vector<double>  *ele_isoChargedFromPU;
   vector<double>  *ele_ooEmooP;
   vector<double>  *ele_dr03TkSumPt;
   vector<double>  *ele_dr03EcalRecHitSumEt;
   vector<double>  *ele_dr03HcalDepth1TowerSumEt;
   vector<double>  *ele_d0;
   vector<double>  *ele_dz;
   vector<double>  *ele_SIP;
   vector<int>     *ele_expectedMissingInnerHits;
   vector<int>     *ele_passConversionVeto;
   vector<bool>    *passEleIdLoose;
   vector<bool>    *passEleIdMedium;
   vector<bool>    *passEleIdTight;
   vector<bool>    *passMVAnoIsoWP90;
   vector<bool>    *passMVAnoIsoWP80;
   vector<bool>    *passMVAnoIsoWPLoose;
   vector<bool>    *passMVAIsoWP90;
   vector<bool>    *passMVAIsoWP80;
   vector<bool>    *passMVAIsoWPLoose;
   vector<float>   *valueMVAnoIso;
   vector<float>   *valueMVAIso;
   vector<bool>    *hasMatchedToZ;
   vector<string>  *triggerPath;
   vector<bool>    *triggerDecision;
   vector<bool>    *passFilterEle35;
   vector<bool>    *passFilterEle23_12_leg1;
   vector<bool>    *passFilterEle23_12_leg2;
   vector<bool>    *passFilterMu12_Ele23_legEle;
   vector<bool>    *passFilterMu23_Ele12_legEle;
   vector<bool>    *L1EG_35;
   vector<bool>    *L1EG_23_12;
   Int_t           nMu;
   vector<double>  *mu_pt;
   vector<double>  *mu_eta;
   vector<double>  *mu_phi;
   vector<double>  *mu_energy;
   vector<int>     *mu_charge;
   vector<int>     *mu_type;
   vector<double>  *mu_d0;
   vector<double>  *mu_dz;
   vector<double>  *mu_SIP;
   vector<double>  *mu_Chi2NDF;
   vector<double>  *mu_InnerD0;
   vector<double>  *mu_InnerDz;
   vector<int>     *mu_TrkLayers;
   vector<int>     *mu_PixelLayers;
   vector<int>     *mu_PixelHits;
   vector<int>     *mu_MuonHits;
   vector<int>     *mu_Stations;
   vector<int>     *mu_Matches;
   vector<int>     *mu_TrkQuality;
   vector<double>  *mu_IsoTrk;
   vector<double>  *mu_PFChIso;
   vector<double>  *mu_PFPhoIso;
   vector<double>  *mu_PFNeuIso;
   vector<double>  *mu_PFPUIso;
   vector<double>  *mu_PFCHIso03;
   vector<double>  *mu_PFPhoIso03;
   vector<double>  *mu_PFNeuIso03;
   vector<double>  *mu_PFPUIso03;
   vector<double>  *mu_InnervalidFraction;
   vector<double>  *mu_segmentCompatibility;
   vector<double>  *mu_chi2LocalPosition;
   vector<double>  *mu_trkKink;
   vector<double>  *mu_BestTrkPtError;
   vector<double>  *mu_BestTrkPt;
   vector<int>     *mu_BestTrkType;
   vector<int>     *mu_CutBasedIdLoose;
   vector<int>     *mu_CutBasedIdMedium;
   vector<int>     *mu_CutBasedIdTight;
   vector<int>     *mu_CutBasedIdMediumPrompt;
   vector<int>     *mu_CutBasedIdGlobalHighPt;
   vector<int>     *mu_CutBasedIdTrkHighPt;
   vector<int>     *mu_PFIsoVeryLoose;
   vector<int>     *mu_PFIsoLoose;
   vector<int>     *mu_PFIsoMedium;
   vector<int>     *mu_PFIsoTight;
   vector<int>     *mu_PFIsoVeryTight;
   vector<int>     *mu_PFIsoVeryVeryTight;
   vector<int>     *mu_TrkIsoLoose;
   vector<int>     *mu_TrkIsoTight;
   vector<int>     *mu_SoftCutBasedId;
   vector<int>     *mu_MvaLoose;
   vector<int>     *mu_MvaMedium;
   vector<int>     *mu_MvaTight;
   vector<int>     *mu_MiniIsoLoose;
   vector<int>     *mu_MiniIsoMedium;
   vector<int>     *mu_MiniIsoTight;
   vector<int>     *mu_MiniIsoVeryTight;
   vector<int>     *mu_TriggerIdLoose;
   vector<int>     *mu_InTimeMuon;
   vector<int>     *mu_MultiIsoLoose;
   vector<int>     *mu_MultiIsoMedium;
   vector<bool>    *passFilterIsoMu27;
   vector<bool>    *passFilterMu17_Mu8_leg1;
   vector<bool>    *passFilterMu17_Mu8_leg2;
   vector<bool>    *passFilterMu17_Mu8_IsoLeg;
   vector<bool>    *passFilterMu12_Ele23_legMu;
   vector<bool>    *passFilterMu23_Ele12_legMu;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_pvNTracks;   //!
   TBranch        *b_good_vertices;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_nPU;   //!
   TBranch        *b_nPUTrue;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_nEle;   //!
   TBranch        *b_ele_pt;   //!
   TBranch        *b_ele_eta;   //!
   TBranch        *b_ele_etaSC;   //!
   TBranch        *b_ele_phi;   //!
   TBranch        *b_ele_phiSC;   //!
   TBranch        *b_ele_energy;   //!
   TBranch        *b_ele_energySC;   //!
   TBranch        *b_ele_charge;   //!
   TBranch        *b_ele_dEtaIn;   //!
   TBranch        *b_ele_dEtaSeed;   //!
   TBranch        *b_ele_dPhiIn;   //!
   TBranch        *b_ele_hOverE;   //!
   TBranch        *b_ele_full5x5_sigmaIetaIeta;   //!
   TBranch        *b_ele_isoChargedHadrons;   //!
   TBranch        *b_ele_isoNeutralHadrons;   //!
   TBranch        *b_ele_isoPhotons;   //!
   TBranch        *b_ele_relCombIsoWithEA;   //!
   TBranch        *b_ele_isoChargedFromPU;   //!
   TBranch        *b_ele_ooEmooP;   //!
   TBranch        *b_ele_dr03TkSumPt;   //!
   TBranch        *b_ele_dr03EcalRecHitSumEt;   //!
   TBranch        *b_ele_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_ele_d0;   //!
   TBranch        *b_ele_dz;   //!
   TBranch        *b_ele_SIP;   //!
   TBranch        *b_ele_expectedMissingInnerHits;   //!
   TBranch        *b_ele_passConversionVeto;   //!
   TBranch        *b_passEleIdLoose;   //!
   TBranch        *b_passEleIdMedium;   //!
   TBranch        *b_passEleIdTight;   //!
   TBranch        *b_passMVAnoIsoWP90;   //!
   TBranch        *b_passMVAnoIsoWP80;   //!
   TBranch        *b_passMVAnoIsoWPLoose;   //!
   TBranch        *b_passMVAIsoWP90;   //!
   TBranch        *b_passMVAIsoWP80;   //!
   TBranch        *b_passMVAIsoWPLoose;   //!
   TBranch        *b_valueMVAnoIso;   //!
   TBranch        *b_valueMVAIso;   //!
   TBranch        *b_hasMatchedToZ;   //!
   TBranch        *b_triggerPath;   //!
   TBranch        *b_triggerDecision;   //!
   TBranch        *b_passFilterEle35;   //!
   TBranch        *b_passFilterEle23_12_leg1;   //!
   TBranch        *b_passFilterEle23_12_leg2;   //!
   TBranch        *b_passFilterMu12_Ele23_legEle;   //!
   TBranch        *b_passFilterMu23_Ele12_legEle;   //!
   TBranch        *b_L1EG_35;   //!
   TBranch        *b_L1EG_23_12;   //!
   TBranch        *b_nMu;   //!
   TBranch        *b_mu_pt;   //!
   TBranch        *b_mu_eta;   //!
   TBranch        *b_mu_phi;   //!
   TBranch        *b_mu_energy;   //!
   TBranch        *b_mu_charge;   //!
   TBranch        *b_mu_type;   //!
   TBranch        *b_mu_d0;   //!
   TBranch        *b_mu_dz;   //!
   TBranch        *b_mu_SIP;   //!
   TBranch        *b_mu_Chi2NDF;   //!
   TBranch        *b_mu_InnerD0;   //!
   TBranch        *b_mu_InnerDz;   //!
   TBranch        *b_mu_TrkLayers;   //!
   TBranch        *b_mu_PixelLayers;   //!
   TBranch        *b_mu_PixelHits;   //!
   TBranch        *b_mu_MuonHits;   //!
   TBranch        *b_mu_Stations;   //!
   TBranch        *b_mu_Matches;   //!
   TBranch        *b_mu_TrkQuality;   //!
   TBranch        *b_mu_IsoTrk;   //!
   TBranch        *b_mu_PFChIso;   //!
   TBranch        *b_mu_PFPhoIso;   //!
   TBranch        *b_mu_PFNeuIso;   //!
   TBranch        *b_mu_PFPUIso;   //!
   TBranch        *b_mu_PFCHIso03;   //!
   TBranch        *b_mu_PFPhoIso03;   //!
   TBranch        *b_mu_PFNeuIso03;   //!
   TBranch        *b_mu_PFPUIso03;   //!
   TBranch        *b_mu_InnervalidFraction;   //!
   TBranch        *b_mu_segmentCompatibility;   //!
   TBranch        *b_mu_chi2LocalPosition;   //!
   TBranch        *b_mu_trkKink;   //!
   TBranch        *b_mu_BestTrkPtError;   //!
   TBranch        *b_mu_BestTrkPt;   //!
   TBranch        *b_mu_BestTrkType;   //!
   TBranch        *b_mu_CutBasedIdLoose;   //!
   TBranch        *b_mu_CutBasedIdMedium;   //!
   TBranch        *b_mu_CutBasedIdTight;   //!
   TBranch        *b_mu_CutBasedIdMediumPrompt;   //!
   TBranch        *b_mu_CutBasedIdGlobalHighPt;   //!
   TBranch        *b_mu_CutBasedIdTrkHighPt;   //!
   TBranch        *b_mu_PFIsoVeryLoose;   //!
   TBranch        *b_mu_PFIsoLoose;   //!
   TBranch        *b_mu_PFIsoMedium;   //!
   TBranch        *b_mu_PFIsoTight;   //!
   TBranch        *b_mu_PFIsoVeryTight;   //!
   TBranch        *b_mu_PFIsoVeryVeryTight;   //!
   TBranch        *b_mu_TrkIsoLoose;   //!
   TBranch        *b_mu_TrkIsoTight;   //!
   TBranch        *b_mu_SoftCutBasedId;   //!
   TBranch        *b_mu_MvaLoose;   //!
   TBranch        *b_mu_MvaMedium;   //!
   TBranch        *b_mu_MvaTight;   //!
   TBranch        *b_mu_MiniIsoLoose;   //!
   TBranch        *b_mu_MiniIsoMedium;   //!
   TBranch        *b_mu_MiniIsoTight;   //!
   TBranch        *b_mu_MiniIsoVeryTight;   //!
   TBranch        *b_mu_TriggerIdLoose;   //!
   TBranch        *b_mu_InTimeMuon;   //!
   TBranch        *b_mu_MultiIsoLoose;   //!
   TBranch        *b_mu_MultiIsoMedium;   //!
   TBranch        *b_passFilterIsoMu27;   //!
   TBranch        *b_passFilterMu17_Mu8_leg1;   //!
   TBranch        *b_passFilterMu17_Mu8_leg2;   //!
   TBranch        *b_passFilterMu17_Mu8_IsoLeg;   //!
   TBranch        *b_passFilterMu12_Ele23_legMu;   //!
   TBranch        *b_passFilterMu23_Ele12_legMu;   //!

   TagAndProbe(TTree *tree=0);
   virtual ~TagAndProbe();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString output);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   bool    HWW_Electron_Def(int i, double eta);
   bool    HWW_Electron_NewDef(int i, double eta);
   bool    HWW_Muon_Def(int i, double pt);

};

#endif

#ifdef TagAndProbe_cxx
TagAndProbe::TagAndProbe(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("TnP_ntuple.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("TnP_ntuple.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("TnP_ntuple.root:/ntupler");
      dir->GetObject("EventTree",tree);

   }
   Init(tree);
}

TagAndProbe::~TagAndProbe()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t TagAndProbe::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t TagAndProbe::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void TagAndProbe::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   ele_pt = 0;
   ele_eta = 0;
   ele_etaSC = 0;
   ele_phi = 0;
   ele_phiSC = 0;
   ele_energy = 0;
   ele_energySC = 0;
   ele_charge = 0;
   ele_dEtaIn = 0;
   ele_dEtaSeed = 0;
   ele_dPhiIn = 0;
   ele_hOverE = 0;
   ele_full5x5_sigmaIetaIeta = 0;
   ele_isoChargedHadrons = 0;
   ele_isoNeutralHadrons = 0;
   ele_isoPhotons = 0;
   ele_relCombIsoWithEA = 0;
   ele_isoChargedFromPU = 0;
   ele_ooEmooP = 0;
   ele_dr03TkSumPt = 0;
   ele_dr03EcalRecHitSumEt = 0;
   ele_dr03HcalDepth1TowerSumEt = 0;
   ele_d0 = 0;
   ele_dz = 0;
   ele_SIP = 0;
   ele_expectedMissingInnerHits = 0;
   ele_passConversionVeto = 0;
   passEleIdLoose = 0;
   passEleIdMedium = 0;
   passEleIdTight = 0;
   passMVAnoIsoWP90 = 0;
   passMVAnoIsoWP80 = 0;
   passMVAnoIsoWPLoose = 0;
   passMVAIsoWP90 = 0;
   passMVAIsoWP80 = 0;
   passMVAIsoWPLoose = 0;
   valueMVAnoIso = 0;
   valueMVAIso = 0;
   hasMatchedToZ = 0;
   triggerPath = 0;
   triggerDecision = 0;
   passFilterEle35 = 0;
   passFilterEle23_12_leg1 = 0;
   passFilterEle23_12_leg2 = 0;
   passFilterMu12_Ele23_legEle = 0;
   passFilterMu23_Ele12_legEle = 0;
   L1EG_35 = 0;
   L1EG_23_12 = 0;
   mu_pt = 0;
   mu_eta = 0;
   mu_phi = 0;
   mu_energy = 0;
   mu_charge = 0;
   mu_type = 0;
   mu_d0 = 0;
   mu_dz = 0;
   mu_SIP = 0;
   mu_Chi2NDF = 0;
   mu_InnerD0 = 0;
   mu_InnerDz = 0;
   mu_TrkLayers = 0;
   mu_PixelLayers = 0;
   mu_PixelHits = 0;
   mu_MuonHits = 0;
   mu_Stations = 0;
   mu_Matches = 0;
   mu_TrkQuality = 0;
   mu_IsoTrk = 0;
   mu_PFChIso = 0;
   mu_PFPhoIso = 0;
   mu_PFNeuIso = 0;
   mu_PFPUIso = 0;
   mu_PFCHIso03 = 0;
   mu_PFPhoIso03 = 0;
   mu_PFNeuIso03 = 0;
   mu_PFPUIso03 = 0;
   mu_InnervalidFraction = 0;
   mu_segmentCompatibility = 0;
   mu_chi2LocalPosition = 0;
   mu_trkKink = 0;
   mu_BestTrkPtError = 0;
   mu_BestTrkPt = 0;
   mu_BestTrkType = 0;
   mu_CutBasedIdLoose = 0;
   mu_CutBasedIdMedium = 0;
   mu_CutBasedIdTight = 0;
   mu_CutBasedIdMediumPrompt = 0;
   mu_CutBasedIdGlobalHighPt = 0;
   mu_CutBasedIdTrkHighPt = 0;
   mu_PFIsoVeryLoose = 0;
   mu_PFIsoLoose = 0;
   mu_PFIsoMedium = 0;
   mu_PFIsoTight = 0;
   mu_PFIsoVeryTight = 0;
   mu_PFIsoVeryVeryTight = 0;
   mu_TrkIsoLoose = 0;
   mu_TrkIsoTight = 0;
   mu_SoftCutBasedId = 0;
   mu_MvaLoose = 0;
   mu_MvaMedium = 0;
   mu_MvaTight = 0;
   mu_MiniIsoLoose = 0;
   mu_MiniIsoMedium = 0;
   mu_MiniIsoTight = 0;
   mu_MiniIsoVeryTight = 0;
   mu_TriggerIdLoose = 0;
   mu_InTimeMuon = 0;
   mu_MultiIsoLoose = 0;
   mu_MultiIsoMedium = 0;
   passFilterIsoMu27 = 0;
   passFilterMu17_Mu8_leg1 = 0;
   passFilterMu17_Mu8_leg2 = 0;
   passFilterMu17_Mu8_IsoLeg = 0;
   passFilterMu12_Ele23_legMu = 0;
   passFilterMu23_Ele12_legMu = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("pvNTracks", &pvNTracks, &b_pvNTracks);
   fChain->SetBranchAddress("good_vertices", &good_vertices, &b_good_vertices);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("nPU", &nPU, &b_nPU);
   fChain->SetBranchAddress("nPUTrue", &nPUTrue, &b_nPUTrue);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("nEle", &nEle, &b_nEle);
   fChain->SetBranchAddress("ele_pt", &ele_pt, &b_ele_pt);
   fChain->SetBranchAddress("ele_eta", &ele_eta, &b_ele_eta);
   fChain->SetBranchAddress("ele_etaSC", &ele_etaSC, &b_ele_etaSC);
   fChain->SetBranchAddress("ele_phi", &ele_phi, &b_ele_phi);
   fChain->SetBranchAddress("ele_phiSC", &ele_phiSC, &b_ele_phiSC);
   fChain->SetBranchAddress("ele_energy", &ele_energy, &b_ele_energy);
   fChain->SetBranchAddress("ele_energySC", &ele_energySC, &b_ele_energySC);
   fChain->SetBranchAddress("ele_charge", &ele_charge, &b_ele_charge);
   fChain->SetBranchAddress("ele_dEtaIn", &ele_dEtaIn, &b_ele_dEtaIn);
   fChain->SetBranchAddress("ele_dEtaSeed", &ele_dEtaSeed, &b_ele_dEtaSeed);
   fChain->SetBranchAddress("ele_dPhiIn", &ele_dPhiIn, &b_ele_dPhiIn);
   fChain->SetBranchAddress("ele_hOverE", &ele_hOverE, &b_ele_hOverE);
   fChain->SetBranchAddress("ele_full5x5_sigmaIetaIeta", &ele_full5x5_sigmaIetaIeta, &b_ele_full5x5_sigmaIetaIeta);
   fChain->SetBranchAddress("ele_isoChargedHadrons", &ele_isoChargedHadrons, &b_ele_isoChargedHadrons);
   fChain->SetBranchAddress("ele_isoNeutralHadrons", &ele_isoNeutralHadrons, &b_ele_isoNeutralHadrons);
   fChain->SetBranchAddress("ele_isoPhotons", &ele_isoPhotons, &b_ele_isoPhotons);
   fChain->SetBranchAddress("ele_relCombIsoWithEA", &ele_relCombIsoWithEA, &b_ele_relCombIsoWithEA);
   fChain->SetBranchAddress("ele_isoChargedFromPU", &ele_isoChargedFromPU, &b_ele_isoChargedFromPU);
   fChain->SetBranchAddress("ele_ooEmooP", &ele_ooEmooP, &b_ele_ooEmooP);
   fChain->SetBranchAddress("ele_dr03TkSumPt", &ele_dr03TkSumPt, &b_ele_dr03TkSumPt);
   fChain->SetBranchAddress("ele_dr03EcalRecHitSumEt", &ele_dr03EcalRecHitSumEt, &b_ele_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("ele_dr03HcalDepth1TowerSumEt", &ele_dr03HcalDepth1TowerSumEt, &b_ele_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("ele_d0", &ele_d0, &b_ele_d0);
   fChain->SetBranchAddress("ele_dz", &ele_dz, &b_ele_dz);
   fChain->SetBranchAddress("ele_SIP", &ele_SIP, &b_ele_SIP);
   fChain->SetBranchAddress("ele_expectedMissingInnerHits", &ele_expectedMissingInnerHits, &b_ele_expectedMissingInnerHits);
   fChain->SetBranchAddress("ele_passConversionVeto", &ele_passConversionVeto, &b_ele_passConversionVeto);
   fChain->SetBranchAddress("passEleIdLoose", &passEleIdLoose, &b_passEleIdLoose);
   fChain->SetBranchAddress("passEleIdMedium", &passEleIdMedium, &b_passEleIdMedium);
   fChain->SetBranchAddress("passEleIdTight", &passEleIdTight, &b_passEleIdTight);
   fChain->SetBranchAddress("passMVAnoIsoWP90", &passMVAnoIsoWP90, &b_passMVAnoIsoWP90);
   fChain->SetBranchAddress("passMVAnoIsoWP80", &passMVAnoIsoWP80, &b_passMVAnoIsoWP80);
   fChain->SetBranchAddress("passMVAnoIsoWPLoose", &passMVAnoIsoWPLoose, &b_passMVAnoIsoWPLoose);
   fChain->SetBranchAddress("passMVAIsoWP90", &passMVAIsoWP90, &b_passMVAIsoWP90);
   fChain->SetBranchAddress("passMVAIsoWP80", &passMVAIsoWP80, &b_passMVAIsoWP80);
   fChain->SetBranchAddress("passMVAIsoWPLoose", &passMVAIsoWPLoose, &b_passMVAIsoWPLoose);
   fChain->SetBranchAddress("valueMVAnoIso", &valueMVAnoIso, &b_valueMVAnoIso);
   fChain->SetBranchAddress("valueMVAIso", &valueMVAIso, &b_valueMVAIso);
   fChain->SetBranchAddress("hasMatchedToZ", &hasMatchedToZ, &b_hasMatchedToZ);
   fChain->SetBranchAddress("triggerPath", &triggerPath, &b_triggerPath);
   fChain->SetBranchAddress("triggerDecision", &triggerDecision, &b_triggerDecision);
   fChain->SetBranchAddress("passFilterEle35", &passFilterEle35, &b_passFilterEle35);
   fChain->SetBranchAddress("passFilterEle23_12_leg1", &passFilterEle23_12_leg1, &b_passFilterEle23_12_leg1);
   fChain->SetBranchAddress("passFilterEle23_12_leg2", &passFilterEle23_12_leg2, &b_passFilterEle23_12_leg2);
   fChain->SetBranchAddress("passFilterMu12_Ele23_legEle", &passFilterMu12_Ele23_legEle, &b_passFilterMu12_Ele23_legEle);
   fChain->SetBranchAddress("passFilterMu23_Ele12_legEle", &passFilterMu23_Ele12_legEle, &b_passFilterMu23_Ele12_legEle);
   fChain->SetBranchAddress("L1EG_35", &L1EG_35, &b_L1EG_35);
   fChain->SetBranchAddress("L1EG_23_12", &L1EG_23_12, &b_L1EG_23_12);
   fChain->SetBranchAddress("nMu", &nMu, &b_nMu);
   fChain->SetBranchAddress("mu_pt", &mu_pt, &b_mu_pt);
   fChain->SetBranchAddress("mu_eta", &mu_eta, &b_mu_eta);
   fChain->SetBranchAddress("mu_phi", &mu_phi, &b_mu_phi);
   fChain->SetBranchAddress("mu_energy", &mu_energy, &b_mu_energy);
   fChain->SetBranchAddress("mu_charge", &mu_charge, &b_mu_charge);
   fChain->SetBranchAddress("mu_type", &mu_type, &b_mu_type);
   fChain->SetBranchAddress("mu_d0", &mu_d0, &b_mu_d0);
   fChain->SetBranchAddress("mu_dz", &mu_dz, &b_mu_dz);
   fChain->SetBranchAddress("mu_SIP", &mu_SIP, &b_mu_SIP);
   fChain->SetBranchAddress("mu_Chi2NDF", &mu_Chi2NDF, &b_mu_Chi2NDF);
   fChain->SetBranchAddress("mu_InnerD0", &mu_InnerD0, &b_mu_InnerD0);
   fChain->SetBranchAddress("mu_InnerDz", &mu_InnerDz, &b_mu_InnerDz);
   fChain->SetBranchAddress("mu_TrkLayers", &mu_TrkLayers, &b_mu_TrkLayers);
   fChain->SetBranchAddress("mu_PixelLayers", &mu_PixelLayers, &b_mu_PixelLayers);
   fChain->SetBranchAddress("mu_PixelHits", &mu_PixelHits, &b_mu_PixelHits);
   fChain->SetBranchAddress("mu_MuonHits", &mu_MuonHits, &b_mu_MuonHits);
   fChain->SetBranchAddress("mu_Stations", &mu_Stations, &b_mu_Stations);
   fChain->SetBranchAddress("mu_Matches", &mu_Matches, &b_mu_Matches);
   fChain->SetBranchAddress("mu_TrkQuality", &mu_TrkQuality, &b_mu_TrkQuality);
   fChain->SetBranchAddress("mu_IsoTrk", &mu_IsoTrk, &b_mu_IsoTrk);
   fChain->SetBranchAddress("mu_PFChIso", &mu_PFChIso, &b_mu_PFChIso);
   fChain->SetBranchAddress("mu_PFPhoIso", &mu_PFPhoIso, &b_mu_PFPhoIso);
   fChain->SetBranchAddress("mu_PFNeuIso", &mu_PFNeuIso, &b_mu_PFNeuIso);
   fChain->SetBranchAddress("mu_PFPUIso", &mu_PFPUIso, &b_mu_PFPUIso);
   fChain->SetBranchAddress("mu_PFCHIso03", &mu_PFCHIso03, &b_mu_PFCHIso03);
   fChain->SetBranchAddress("mu_PFPhoIso03", &mu_PFPhoIso03, &b_mu_PFPhoIso03);
   fChain->SetBranchAddress("mu_PFNeuIso03", &mu_PFNeuIso03, &b_mu_PFNeuIso03);
   fChain->SetBranchAddress("mu_PFPUIso03", &mu_PFPUIso03, &b_mu_PFPUIso03);
   fChain->SetBranchAddress("mu_InnervalidFraction", &mu_InnervalidFraction, &b_mu_InnervalidFraction);
   fChain->SetBranchAddress("mu_segmentCompatibility", &mu_segmentCompatibility, &b_mu_segmentCompatibility);
   fChain->SetBranchAddress("mu_chi2LocalPosition", &mu_chi2LocalPosition, &b_mu_chi2LocalPosition);
   fChain->SetBranchAddress("mu_trkKink", &mu_trkKink, &b_mu_trkKink);
   fChain->SetBranchAddress("mu_BestTrkPtError", &mu_BestTrkPtError, &b_mu_BestTrkPtError);
   fChain->SetBranchAddress("mu_BestTrkPt", &mu_BestTrkPt, &b_mu_BestTrkPt);
   fChain->SetBranchAddress("mu_BestTrkType", &mu_BestTrkType, &b_mu_BestTrkType);
   fChain->SetBranchAddress("mu_CutBasedIdLoose", &mu_CutBasedIdLoose, &b_mu_CutBasedIdLoose);
   fChain->SetBranchAddress("mu_CutBasedIdMedium", &mu_CutBasedIdMedium, &b_mu_CutBasedIdMedium);
   fChain->SetBranchAddress("mu_CutBasedIdTight", &mu_CutBasedIdTight, &b_mu_CutBasedIdTight);
   fChain->SetBranchAddress("mu_CutBasedIdMediumPrompt", &mu_CutBasedIdMediumPrompt, &b_mu_CutBasedIdMediumPrompt);
   fChain->SetBranchAddress("mu_CutBasedIdGlobalHighPt", &mu_CutBasedIdGlobalHighPt, &b_mu_CutBasedIdGlobalHighPt);
   fChain->SetBranchAddress("mu_CutBasedIdTrkHighPt", &mu_CutBasedIdTrkHighPt, &b_mu_CutBasedIdTrkHighPt);
   fChain->SetBranchAddress("mu_PFIsoVeryLoose", &mu_PFIsoVeryLoose, &b_mu_PFIsoVeryLoose);
   fChain->SetBranchAddress("mu_PFIsoLoose", &mu_PFIsoLoose, &b_mu_PFIsoLoose);
   fChain->SetBranchAddress("mu_PFIsoMedium", &mu_PFIsoMedium, &b_mu_PFIsoMedium);
   fChain->SetBranchAddress("mu_PFIsoTight", &mu_PFIsoTight, &b_mu_PFIsoTight);
   fChain->SetBranchAddress("mu_PFIsoVeryTight", &mu_PFIsoVeryTight, &b_mu_PFIsoVeryTight);
   fChain->SetBranchAddress("mu_PFIsoVeryVeryTight", &mu_PFIsoVeryVeryTight, &b_mu_PFIsoVeryVeryTight);
   fChain->SetBranchAddress("mu_TrkIsoLoose", &mu_TrkIsoLoose, &b_mu_TrkIsoLoose);
   fChain->SetBranchAddress("mu_TrkIsoTight", &mu_TrkIsoTight, &b_mu_TrkIsoTight);
   fChain->SetBranchAddress("mu_SoftCutBasedId", &mu_SoftCutBasedId, &b_mu_SoftCutBasedId);
   fChain->SetBranchAddress("mu_MvaLoose", &mu_MvaLoose, &b_mu_MvaLoose);
   fChain->SetBranchAddress("mu_MvaMedium", &mu_MvaMedium, &b_mu_MvaMedium);
   fChain->SetBranchAddress("mu_MvaTight", &mu_MvaTight, &b_mu_MvaTight);
   fChain->SetBranchAddress("mu_MiniIsoLoose", &mu_MiniIsoLoose, &b_mu_MiniIsoLoose);
   fChain->SetBranchAddress("mu_MiniIsoMedium", &mu_MiniIsoMedium, &b_mu_MiniIsoMedium);
   fChain->SetBranchAddress("mu_MiniIsoTight", &mu_MiniIsoTight, &b_mu_MiniIsoTight);
   fChain->SetBranchAddress("mu_MiniIsoVeryTight", &mu_MiniIsoVeryTight, &b_mu_MiniIsoVeryTight);
   fChain->SetBranchAddress("mu_TriggerIdLoose", &mu_TriggerIdLoose, &b_mu_TriggerIdLoose);
   fChain->SetBranchAddress("mu_InTimeMuon", &mu_InTimeMuon, &b_mu_InTimeMuon);
   fChain->SetBranchAddress("mu_MultiIsoLoose", &mu_MultiIsoLoose, &b_mu_MultiIsoLoose);
   fChain->SetBranchAddress("mu_MultiIsoMedium", &mu_MultiIsoMedium, &b_mu_MultiIsoMedium);
   fChain->SetBranchAddress("passFilterIsoMu27", &passFilterIsoMu27, &b_passFilterIsoMu27);
   fChain->SetBranchAddress("passFilterMu17_Mu8_leg1", &passFilterMu17_Mu8_leg1, &b_passFilterMu17_Mu8_leg1);
   fChain->SetBranchAddress("passFilterMu17_Mu8_leg2", &passFilterMu17_Mu8_leg2, &b_passFilterMu17_Mu8_leg2);
   fChain->SetBranchAddress("passFilterMu17_Mu8_IsoLeg", &passFilterMu17_Mu8_IsoLeg, &b_passFilterMu17_Mu8_IsoLeg);
   fChain->SetBranchAddress("passFilterMu12_Ele23_legMu", &passFilterMu12_Ele23_legMu, &b_passFilterMu12_Ele23_legMu);
   fChain->SetBranchAddress("passFilterMu23_Ele12_legMu", &passFilterMu23_Ele12_legMu, &b_passFilterMu23_Ele12_legMu);
   Notify();
}

Bool_t TagAndProbe::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void TagAndProbe::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t TagAndProbe::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef TagAndProbe_cxx
