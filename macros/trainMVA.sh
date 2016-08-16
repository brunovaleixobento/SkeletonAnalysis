#!/bin/bash

SIGNAL=~cbeiraod/local-area/Stop4Body/AllDouble/T2DegStop_300_270_bdt.root
BACKGROUND=~cbeiraod/local-area/Stop4Body/AllDouble/Background_bdt.root

if [[ -f ${SIGNAL} && -f ${BACKGROUND} ]] ; then
  trainMVA --signalFile ${SIGNAL} --backgroundFile ${BACKGROUND} --nTree 400
  #root -l runTMVAGui_Cristovao.C+
  applyMVA --inputdirectory ~cbeiraod/local-area/Stop4Body/AllDouble/ --outputdirectory /home/t3cms/brucms16/CMSSW_8_0_14/src/UserCode/SkeletonAnalysis/macros/bdtFiles/PCA9003P_Jet1Eta/
  root -l maximizeYield.C+
fi

