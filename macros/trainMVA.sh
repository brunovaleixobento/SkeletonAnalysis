#!/bin/bash

SIGNAL=~cbeiraod/local-area/Stop4Body/LepFix/T2DegStop_300_270_bdt.root
BACKGROUND=~cbeiraod/local-area/Stop4Body/LepFix/Bckg_bdt.root

if [[ -f ${SIGNAL} && -f ${BACKGROUND} ]] ; then
  trainMVA --signalFile ${SIGNAL} --backgroundFile ${BACKGROUND} --nTree 400
  root runTMVAGui.C
fi

