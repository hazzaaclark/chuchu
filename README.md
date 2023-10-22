# chuchu
SEGA Dreamcast Binary Decompiler for IDA Pro

# Utilisation:

The repository serves to provide the functionality I have created for decompiling raw Binaries for the SEGA Dreamcast.
Involving use cases such as decompiling BIOS files, Game Saves, VMU storage, etc

# Building:

Assuming you want to build/fork your own version of this repository:
git clone this repo, cd into the new directory and compile from source using the designated CMAKE file

``git clone https://github.com/hazzaaclark/chuchu.git --recursive``

``cd chuchu``

``cmake .``

``make``

# Installation:

Installation for this plugin goes as follows; assuming you have a copy of IDA Pro on hand

1. Put all of the files from the ``loaders`` and ``plugins`` folders into their respective IDA folders
2. Open your DC .bin file of choice
3. Choose DC debugger plugin
4. Press ``F9`` to start a debugging process
