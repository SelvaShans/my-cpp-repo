import os
import re
import time

env = Environment()
from SCons.Script.SConscript import SConsEnvironment

Export('env')

AddOption('--skipTests', action="store_true",
        help='Skip UnitTest execution, By default Tests will be executed')

scons_PROGS     = "scons_PROGS"
onlyUnitTests   = "scons_UnitTests"

def readListFile(file):
    list = []
    with open(file) as fic:
        for line in fic:
            line = line.strip()
            if not re.search(r'^\s*#', line):
                line = re.sub(r'\s*#.*', '', line) # remove trailing comment
                if re.search(r'\w', line): # if line is not empty
                    list.append(line)
    return list

def UnitTest(env, name, source, **kwargs):

    target = env.Program(name, source, **kwargs)
    return target

env.AddMethod(UnitTest, "UnitTest")

def executeUnitTests(env):

    import glob
    for length in range(len(onlyUnitTests)):
        for testBin in glob.glob(onlyUnitTests[length] + '/*.bin'):
            print ("=============================================")
            print ("Start Executing test", testBin)
            print ("=============================================")
            if env.Execute(testBin):
                print ("Test fails, stopping the build")
                Exit(1)

env.AddMethod(executeUnitTests, "executeUnitTests")

progDirs        = readListFile(scons_PROGS)
onlyUnitTests   = readListFile(onlyUnitTests)

env.SConscript(dirs=progDirs)

def finish(target, source, env):
    if not GetOption('skipTests'):
        env.executeUnitTests()

    print ("FINISH SCONS AT %s" % time.strftime('%H:%M:%S'))

finishCommand = env.Command('/finish', None, Action(finish, "Starting post build actions"))
BUILD_TARGETS += finishCommand
if COMMAND_LINE_TARGETS:
    finishDepends = [t for t in COMMAND_LINE_TARGETS if os.path.isdir(t)]
    if finishDepends:
        Depends( finishCommand, finishDepends)
else:
    Depends( finishCommand, env.GetLaunchDir())