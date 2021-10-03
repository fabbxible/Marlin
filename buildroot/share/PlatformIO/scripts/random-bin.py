#
# random-bin.py
# Set a unique firmware name based on current date and time
#
Import("env")

from datetime import datetime
env_name = str(env["PIOENV"])
machine = {"CR10Max", "E5P", "Ender6", "CR6", "CR6MAX"}
display = "_DW74"
if any(x in env_name for x in machine):
    #env['PROGNAME'] = "%s_DW7.4" % (env_name)
    #env['PROGNAME'] = env_name + display + datetime.now().strftime("_%Y%m%d-%H%M%S")
    env['PROGNAME'] = env_name + display + datetime.now().strftime("_%y%m%d%H%M")
else:
    env['PROGNAME'] = env_name + datetime.now().strftime("_%y%m%d%H%M")
