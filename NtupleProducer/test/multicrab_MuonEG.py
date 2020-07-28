
name = 'MuonEGNtuple_HWW_2017_fixed_v2'

dataset = {
   'Run2017B' : '/MuonEG/Run2017B-31Mar2018-v1/MINIAOD',
   'Run2017C' : '/MuonEG/Run2017C-31Mar2018-v1/MINIAOD', 
   'Run2017D' : '/MuonEG/Run2017D-31Mar2018-v1/MINIAOD', 
   'Run2017E' : '/MuonEG/Run2017E-31Mar2018-v1/MINIAOD', 
   'Run2017F' : '/MuonEG/Run2017F-31Mar2018-v1/MINIAOD', 
   }


#nevents = -1 
lumisPerJob = {
   'Run2017B':        100,
   'Run2017C':        100,
   'Run2017D':        100,
   'Run2017E':        100,
   'Run2017F':        100,
   }

listOfSamples = [
   'Run2017B',        
   'Run2017C',        
   'Run2017D',        
   'Run2017E',        
   'Run2017F',        
   ]

if __name__ == '__main__':

   from CRABClient.UserUtilities import config
   config = config()

   from CRABAPI.RawCommand import crabCommand
   from multiprocessing import Process

   def submit(config):
       res = crabCommand('submit', config = config)

   config.General.workArea = 'crab_'+name
   config.General.transferLogs = False

   config.JobType.pluginName = 'Analysis'
   config.JobType.psetName = 'runNtupler.py'
   config.JobType.outputFiles = ['TnP_ntuple.root']

   config.Data.inputDBS = 'global'
   config.Data.splitting = 'LumiBased'
   config.Data.lumiMask = '/afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions17/13TeV/ReReco/Cert_294927-306462_13TeV_EOY2017ReReco_Collisions17_JSON.txt'
   config.Data.publication = False
   config.Data.totalUnits = -1
   config.Data.outLFNDirBase = '/store/user/skeshri/' + name

   config.Site.storageSite = 'T2_IN_TIFR'
 #  config.Site.blacklist = ['T2_BR_SPRACE', 'T2_US_Wisconsin', 'T1_RU_JINR', 'T2_RU_JINR', 'T2_EE_Estonia']

   listOfSamples.reverse()
   for sample in listOfSamples:

      config.General.requestName = sample
      config.Data.inputDataset = dataset[sample]
      config.Data.unitsPerJob = lumisPerJob[sample]
      config.Data.outputDatasetTag = sample
      p = Process(target=submit, args=(config,))
      p.start()
      p.join()
