#!/bin/python
from random import randint
from os import system

METRICA="FLOPS_DP"
CPU=3

system(f"echo \"performance\" > /sys/devices/system/cpu/cpufreq/policy3/scaling_governor")

system("make") 

file_data = open("./sistemas.dat", "r")

matrices = file_data.read().split("\n\n")

system(f"echo \"{matrices[0]}\" > example.txt")
system(f"likwid-perfctr -C \"{CPU}\" -g \"{METRICA}\" -m ./perfSL < example.txt")
system(f"rm example.txt")

file_data.close()

system(f"echo \"powersave\" > /sys/devices/system/cpu/cpufreq/policy3/scaling_governor")


# Filtra a linha desejada do arquivo results.log e imprime apenas essa linha
system("grep 'DP MFLOP/s' ./results.log")


