Import("env")
import os
from shutil import copy2

#print("post build script")

# copy firmware to compiled folder
def after_build(source,target,env):
    #print("after_build")
    
    env_name = str(env['PROGNAME'])
    machine = {"CR10Max", "E5P"}
    
    if any(x in env_name for x in machine):
        format = ".hex"
    else:
        format = ".bin"
    
    source = "C:\\Users\\Lenovo\\Documents\\GitHub\\Marlin-InsanityAutomation\\.pio\\build\\" + env['PIOENV'] + "\\" + env['PROGNAME'] + format
    destination = "C:\\Users\\Lenovo\\Documents\\GitHub\\Marlin\\firmware\\" + env['PROGNAME'] + format
    copy2(source, destination)

env.AddPostAction("buildprog", after_build)

