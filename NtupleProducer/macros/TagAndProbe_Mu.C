#define TagAndProbe_cxx
#include "TagAndProbe.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void TagAndProbe::Loop(TString output)
{
//   In a ROOT session, you can do:
//      root> .L TagAndProbe.C
//      root> TagAndProbe t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

  bool RunSystematic=true;
   vector<TString> systematicVar =  {"nominal"};

   if (RunSystematic)
   {
        systematicVar.push_back("TagPt_up");
        systematicVar.push_back("TagPt_down");
        systematicVar.push_back("Zmass_up");
        systematicVar.push_back("Zmass_down");
   }

for(int i=0; i<systematicVar.size();i++)
{

   double ptTag = 30;
   double zMassL = 60;
   double zMassR = 120;

   if(systematicVar.at(i).Contains("TagPt_up")) ptTag = 35;
   if(systematicVar.at(i).Contains("TagPt_down")) ptTag = 25;
   if(systematicVar.at(i).Contains("Zmass_up")) {zMassL = 50; zMassR = 130;}
   if(systematicVar.at(i).Contains("Zmass_down")) {zMassL = 70; zMassR = 110;}

   cout<<systematicVar.at(i).Data()<<endl;
   cout<<" ptTag : "<<ptTag<<" , zMassL : "<<zMassL<<" , zMassR : "<<zMassR<<endl;
   output = "";
   output +="efficiency_";
   output += systematicVar.at(i);
   output +=".root";


   Long64_t nentries = fChain->GetEntriesFast();

   double eta_bins[14] = {-2.4,-2.1,-1.6,-1.2,-0.8,-0.3,-0.2,0.2,0.3,0.8,1.2,1.6,2.1,2.4};
   double pt_bins_IsoMu27[17] = {0,10,20,23,25,26,27,28,29,30,35,40,45,50,60,100,200};
   double pt_bins_Mu17_Mu8_leg1[18] = {0,10,15,16,17,18,19,20,22,25,30,35,40,45,50,60,100,200};
   double pt_bins_Mu17_Mu8_leg2[18] = {0,6,7,8,9,10,12,15,20,25,30,35,40,45,50,60,100,200};
   TFile *file = new TFile(output.Data(),"RECREATE");

// HLT IsoMu27
   TH1F *h_IsoMu27_pt_total = new TH1F("IsoMu27_pt_total","IsoMu27_pt",16,pt_bins_IsoMu27);
   TH1F *h_IsoMu27_eta_total = new TH1F("IsoMu27_eta_total","IsoMu27_eta",13,eta_bins);
   TH2F *h_IsoMu27_pt_eta_total = new TH2F("IsoMu27_pt_eta_total","IsoMu27_pt_eta",13,eta_bins,16,pt_bins_IsoMu27);
   TH1F *h_IsoMu27_pt_pass = new TH1F("IsoMu27_pt_pass","IsoMu27_pt",16,pt_bins_IsoMu27);
   TH1F *h_IsoMu27_eta_pass = new TH1F("IsoMu27_eta_pass","IsoMu27_eta",13,eta_bins);
   TH2F *h_IsoMu27_pt_eta_pass = new TH2F("IsoMu27_pt_eta_pass","IsoMu27_pt_eta",13,eta_bins,16,pt_bins_IsoMu27);

   h_IsoMu27_pt_total->Sumw2();
   h_IsoMu27_eta_total->Sumw2();
   h_IsoMu27_pt_eta_total->Sumw2();
   h_IsoMu27_pt_pass->Sumw2();
   h_IsoMu27_eta_pass->Sumw2();
   h_IsoMu27_pt_eta_pass->Sumw2();

// HLT Mu17_Mu8 Ele23 leg
   TH1F *h_Mu17_Mu8_leg1_pt_total = new TH1F("Mu17_Mu8_leg1_pt_total","Mu17_Mu8_leg1_pt",17,pt_bins_Mu17_Mu8_leg1);
   TH1F *h_Mu17_Mu8_leg1_eta_total = new TH1F("Mu17_Mu8_leg1_eta_total","Mu17_Mu8_leg1_eta",13,eta_bins);
   TH2F *h_Mu17_Mu8_leg1_pt_eta_total = new TH2F("Mu17_Mu8_leg1_pt_eta_total","Mu17_Mu8_leg1_pt_eta",13,eta_bins,17,pt_bins_Mu17_Mu8_leg1);
   TH1F *h_Mu17_Mu8_leg1_pt_pass = new TH1F("Mu17_Mu8_leg1_pt_pass","Mu17_Mu8_leg1_pt",17,pt_bins_Mu17_Mu8_leg1);
   TH1F *h_Mu17_Mu8_leg1_eta_pass = new TH1F("Mu17_Mu8_leg1_eta_pass","Mu17_Mu8_leg1_eta",13,eta_bins);
   TH2F *h_Mu17_Mu8_leg1_pt_eta_pass = new TH2F("Mu17_Mu8_leg1_pt_eta_pass","Mu17_Mu8_leg1_pt_eta",13,eta_bins,17,pt_bins_Mu17_Mu8_leg1);
   TH1F *h_Mu17_Mu8_leg1_pt_Iso_pass = new TH1F("Mu17_Mu8_leg1_pt_Iso_pass","Mu17_Mu8_leg1_pt_Iso",17,pt_bins_Mu17_Mu8_leg1);
   TH1F *h_Mu17_Mu8_leg1_eta_Iso_pass = new TH1F("Mu17_Mu8_leg1_eta_Iso_pass","Mu17_Mu8_leg1_eta_Iso",13,eta_bins);
   TH2F *h_Mu17_Mu8_leg1_pt_eta_Iso_pass = new TH2F("Mu17_Mu8_leg1_pt_eta_Iso_pass","Mu17_Mu8_leg1_pt_eta_Iso",13,eta_bins,17,pt_bins_Mu17_Mu8_leg1);
      
   h_Mu17_Mu8_leg1_pt_total->Sumw2();
   h_Mu17_Mu8_leg1_eta_total->Sumw2();
   h_Mu17_Mu8_leg1_pt_eta_total->Sumw2();
   h_Mu17_Mu8_leg1_pt_pass->Sumw2();
   h_Mu17_Mu8_leg1_eta_pass->Sumw2();
   h_Mu17_Mu8_leg1_pt_eta_pass->Sumw2();
   h_Mu17_Mu8_leg1_pt_Iso_pass->Sumw2();
   h_Mu17_Mu8_leg1_eta_Iso_pass->Sumw2();
   h_Mu17_Mu8_leg1_pt_eta_Iso_pass->Sumw2();

// HLT Mu17_Mu8 Ele12 leg
   TH1F *h_Mu17_Mu8_leg2_pt_total = new TH1F("Mu17_Mu8_leg2_pt_total","Mu17_Mu8_leg2_pt",17,pt_bins_Mu17_Mu8_leg2);
   TH1F *h_Mu17_Mu8_leg2_eta_total = new TH1F("Mu17_Mu8_leg2_eta_total","Mu17_Mu8_leg2_eta",13,eta_bins);
   TH2F *h_Mu17_Mu8_leg2_pt_eta_total = new TH2F("Mu17_Mu8_leg2_pt_eta_total","Mu17_Mu8_leg2_pt_eta",13,eta_bins,17,pt_bins_Mu17_Mu8_leg2);
   TH1F *h_Mu17_Mu8_leg2_pt_pass = new TH1F("Mu17_Mu8_leg2_pt_pass","Mu17_Mu8_leg2_pt",17,pt_bins_Mu17_Mu8_leg2);
   TH1F *h_Mu17_Mu8_leg2_eta_pass = new TH1F("Mu17_Mu8_leg2_eta_pass","Mu17_Mu8_leg2_eta",13,eta_bins);
   TH2F *h_Mu17_Mu8_leg2_pt_eta_pass = new TH2F("Mu17_Mu8_leg2_pt_eta_pass","Mu17_Mu8_leg2_pt_eta",13,eta_bins,17,pt_bins_Mu17_Mu8_leg2);
   TH1F *h_Mu17_Mu8_leg2_pt_Iso_pass = new TH1F("Mu17_Mu8_leg2_pt_Iso_pass","Mu17_Mu8_leg2_pt_Iso",17,pt_bins_Mu17_Mu8_leg2);
   TH1F *h_Mu17_Mu8_leg2_eta_Iso_pass = new TH1F("Mu17_Mu8_leg2_eta_Iso_pass","Mu17_Mu8_leg2_eta_Iso",13,eta_bins);
   TH2F *h_Mu17_Mu8_leg2_pt_eta_Iso_pass = new TH2F("Mu17_Mu8_leg2_pt_eta_Iso_pass","Mu17_Mu8_leg2_pt_eta_Iso",13,eta_bins,17,pt_bins_Mu17_Mu8_leg2);

   h_Mu17_Mu8_leg2_pt_total->Sumw2();
   h_Mu17_Mu8_leg2_eta_total->Sumw2();
   h_Mu17_Mu8_leg2_pt_eta_total->Sumw2();
   h_Mu17_Mu8_leg2_pt_pass->Sumw2();
   h_Mu17_Mu8_leg2_eta_pass->Sumw2();
   h_Mu17_Mu8_leg2_pt_eta_pass->Sumw2();
   h_Mu17_Mu8_leg2_pt_Iso_pass->Sumw2();
   h_Mu17_Mu8_leg2_eta_Iso_pass->Sumw2();
   h_Mu17_Mu8_leg2_pt_eta_Iso_pass->Sumw2();


   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if(jentry % 50000 ==0)cout<<"Number of events processed : "<<jentry<<endl;
      if(nMu != 2) continue;
      int first  = rand()%2;
      int second = (first+1)%2;      
      if(mu_charge->at(first) * mu_charge->at(second)>0)continue;
      bool tag_MuId = mu_CutBasedIdTight->at(first) && mu_PFIsoTight->at(first);  //should be tight
      bool tag_MuKin = mu_pt->at(first)>ptTag && fabs(mu_eta->at(first))<2.4;
      bool tag_TriggerMatch = passFilterIsoMu27->at(first);

      if(!(tag_MuId && tag_MuKin && tag_TriggerMatch))continue;

      bool probe_MuId = HWW_Muon_Def(second, mu_pt->at(second));
      bool probe_MuKin = fabs(mu_eta->at(second))<2.4;

      if(!(probe_MuId && probe_MuKin)) continue;

      TLorentzVector tag_muLV, probe_muLV, Z_candLV;
      tag_muLV.SetPtEtaPhiE(mu_pt->at(first), mu_eta->at(first), mu_phi->at(first), mu_energy->at(first));
      probe_muLV.SetPtEtaPhiE(mu_pt->at(second), mu_eta->at(second), mu_phi->at(second), mu_energy->at(second));
      Z_candLV = tag_muLV + probe_muLV;

      if (Z_candLV.M()<zMassL || Z_candLV.M() >zMassR) continue;
      h_IsoMu27_pt_total->Fill(mu_pt->at(second)); 
      if(mu_pt->at(second)>30)h_IsoMu27_eta_total->Fill(mu_eta->at(second)); 
      h_IsoMu27_pt_eta_total->Fill(mu_eta->at(second),mu_pt->at(second)); 
     
      h_Mu17_Mu8_leg1_pt_total->Fill(mu_pt->at(second)); 
      if(mu_pt->at(second)>20)h_Mu17_Mu8_leg1_eta_total->Fill(mu_eta->at(second)); 
      h_Mu17_Mu8_leg1_pt_eta_total->Fill(mu_eta->at(second),mu_pt->at(second)); 

      h_Mu17_Mu8_leg2_pt_total->Fill(mu_pt->at(second)); 
      if(mu_pt->at(second)>12)h_Mu17_Mu8_leg2_eta_total->Fill(mu_eta->at(second)); 
      h_Mu17_Mu8_leg2_pt_eta_total->Fill(mu_eta->at(second),mu_pt->at(second)); 

      if (passFilterIsoMu27->at(second)){
      h_IsoMu27_pt_pass->Fill(mu_pt->at(second)); 
     if(mu_pt->at(second)>30) h_IsoMu27_eta_pass->Fill(mu_eta->at(second)); 
      h_IsoMu27_pt_eta_pass->Fill(mu_eta->at(second),mu_pt->at(second)); 
      } 
      if (passFilterMu17_Mu8_leg2->at(second)){
      h_Mu17_Mu8_leg1_pt_pass->Fill(mu_pt->at(second)); 
     if(mu_pt->at(second)>20) h_Mu17_Mu8_leg1_eta_pass->Fill(mu_eta->at(second)); 
      h_Mu17_Mu8_leg1_pt_eta_pass->Fill(mu_eta->at(second),mu_pt->at(second)); 
      } 
      if (passFilterMu17_Mu8_leg2->at(second) && passFilterMu17_Mu8_IsoLeg->at(second)){
      h_Mu17_Mu8_leg1_pt_Iso_pass->Fill(mu_pt->at(second)); 
     if(mu_pt->at(second)>20) h_Mu17_Mu8_leg1_eta_Iso_pass->Fill(mu_eta->at(second)); 
      h_Mu17_Mu8_leg1_pt_eta_Iso_pass->Fill(mu_eta->at(second),mu_pt->at(second)); 
      } 
      if (passFilterMu17_Mu8_leg1->at(second)){
      h_Mu17_Mu8_leg2_pt_pass->Fill(mu_pt->at(second)); 
     if(mu_pt->at(second)>12) h_Mu17_Mu8_leg2_eta_pass->Fill(mu_eta->at(second)); 
      h_Mu17_Mu8_leg2_pt_eta_pass->Fill(mu_eta->at(second),mu_pt->at(second)); 
      } 
      if (passFilterMu17_Mu8_leg1->at(second) && passFilterMu17_Mu8_IsoLeg->at(second)){
      h_Mu17_Mu8_leg2_pt_Iso_pass->Fill(mu_pt->at(second)); 
     if(mu_pt->at(second)>12) h_Mu17_Mu8_leg2_eta_Iso_pass->Fill(mu_eta->at(second)); 
      h_Mu17_Mu8_leg2_pt_eta_Iso_pass->Fill(mu_eta->at(second),mu_pt->at(second)); 
      } 

      // if (Cut(ientry) < 0) continue;
   }
   file->Write();
  }
   cout<<"program ends"<<endl;
}



bool TagAndProbe::HWW_Muon_Def(int i, double pt)
{
bool tightMu = mu_CutBasedIdTight->at(i);   // should be tight
bool passIsoTight = mu_PFIsoTight->at(i);
bool pass_dz = mu_dz->at(i) < 0.1;

if (!tightMu) return false;
if (!passIsoTight) return false;
if (!pass_dz) return false;

if (pt <= 20){
if (mu_d0->at(i) > 0.01) return false;
}
else {
if (mu_d0->at(i) > 0.02) return false;
}

return true;
}







