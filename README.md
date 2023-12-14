# Nuttx-DM


### Original repos:
- https://github.com/espressif/esp-nuttx-bootloader/releases/download/latest/bootloader-esp32.bin
- https://github.com/espressif/esp-nuttx-bootloader/releases/download/latest/partition-table-esp32.bin
- https://github.com/apache/incubator-nuttx.git
- https://github.com/apache/incubator-nuttx-apps.git


### Compile and load:
- https://ocw.cs.pub.ro/courses/si/laboratoare/01#compilarea_si_incarcarea_pe_placa


#### Errors:
esptool.py not found -> append `export PATH="$HOME/.local/bin:$PATH"` in ~/.bashrc

Serial port /dev/ttyUSB0
/dev/ttyUSB0 failed to connect: Could not open /dev/ttyUSB0, the port doesn't exist
-> sudo chmod 666 /dev/ttyUSB0
