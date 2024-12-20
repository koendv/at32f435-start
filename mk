#!/bin/bash
# compile rt-thread, and upload using black magic probe.
#scons -c
rm -f rtthread.elf
scons
if [ -f rtthread.elf -a -c /dev/ttyACM0 ]
then
  if fuser -s /dev/ttyACM0
  then
    echo "debugger already running"
    exit
  fi
  arm-none-eabi-gdb -q \
    -ex 'set confirm off' \
    -ex 'target extended-remote /dev/ttyACM0 ' \
    -ex 'file rtthread.elf' \
    -ex 'monitor swd' \
    -ex 'attach 1' \
    -ex 'load' \
    -ex 'run'
fi
