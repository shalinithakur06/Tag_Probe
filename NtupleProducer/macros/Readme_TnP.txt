### compile the code will generate executable "tnp"

g++ Run_TnP.cxx -o tnp  -std=c++0x `root-config --libs --cflags` -include TagAndProbe_Ele.C or TagAndProbe_Mu.C


