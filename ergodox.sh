#!/bin/bash
sudo chmod g+r keyboards/ergodox_ez/keymaps/bayne/eggs.h
qmk flash -kb ergodox_ez -km bayne
sudo chmod g-r keyboards/ergodox_ez/keymaps/bayne/eggs.h
qmk clean --all
