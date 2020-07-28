//#include "TagAndProbe.C"
#include <fstream>
#include "TString.h"
#include "TSystem.h"

//  g++ Run_TnP.cxx -o tnp  `root-config --libs --cflags`    to compile the code

void RunLoop(TString file, TString output)
//void RunLoop(void)
{

  TChain* chain = new TChain("ntupler/EventTree","");
  // Open the input stream
  ifstream in;
  in.open(file.Data());
//  in.open("SingleEleRun2016Hv2.txt");

  // Read the input list of files and add them to the chain
  TString currentFile;
  Int_t counter=0;
  while(in.good()) {
    in >> currentFile;
    if (!currentFile.Contains("root")) continue; // protection
    chain->Add(currentFile.Data());
  }
  in.close();
//  gSystem->CompileMacro("TrigEff_mc.C","f");
  TagAndProbe t(chain);
  t.Loop(output);

}
#if !defined(__CINT__) && !defined(__ACLIC__)

int main(int argc, char ** argv)
{


    if (argc < 2) {
        // Tell the user how to run the program
        std::cerr << "Usage: " << argv[0] << " NAME of file" << std::endl;
        return 1;
    }
  TString file = argv[1];
  TString output = argv[2];

  RunLoop(file,output); // just call the "ROOT Script"
//  RunLoop(); // just call the "ROOT Script"
  return 0;
}
#endif /* !defined(__CINT__) && !defined(__ACLIC__) */
