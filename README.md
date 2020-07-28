# TagAndProbe_Trigger

###### https://twiki.cern.ch/twiki/bin/view/CMS/CutBasedElectronIdentificationRun2#Working_points_for_92X_samples_R
cmsrel CMSSW_9_4_9  
cd CMSSW_9_4_9/src  
cmsenv  
git cms-init  
git cms-merge-topic guitargeek:EgammaID_9_4_X  
scram b -j 4  

###### Download the TagAndProbe_trigger repository
git clone https://github.com/skeshri/TagAndProbe_Trigger.git  
scram b -j 4  

## For Test Run 
cd $CMSSW_BASE/src/TagAndProbe_Trigger/NtupleProducer/test   
<br>  
cmsRun runNtupler.py  
<br>  
cp TnP_ntuple.root $CMSSW_BASE/src/TagAndProbe_Trigger/TagAndProbeMacros  (one example file is already present in the directory)  
<br>  
cd $CMSSW_BASE/src/TagAndProbe_Trigger/TagAndProbeMacros/  
<br>  
./compileNrun_tnp.sh TagAndProbe_Ele.C 
(OR TagAndProbe_Mu.C, This script is self explaining when run it)   
<br>   
./runPlotting.sh histNames_Ele.txt 
(OR histNames_Mu.txt, this will generate final results in the "results" directory)   
