# Installation instructions

Below you find installation instructions for all the software used in our tutorials.
There are **two ways** you can go about this:
* Install [Virtualbox](#virtualbox) and download a VM from the relevant tutorial. 
This VM will have all the necessary software preinstalled.                
* Install the software yourself (which won't be trivial depending on the OS you are using): Neuron, IPython notebooks, eFEL, BluePyOpt

Please **test your installation** well before the tutorial starts.

## Support

Foremost, if you have any questions/problems regarding installing this software on your system, 
please let us know on [our chat channel](https://gitter.im/BlueBrain/SimulationTutorials).

## VirtualBox                                                                    

We provide **Virtual Machines** with preinstalled software.
To run these VMs it is necessary to **install the [VirtualBox](https://www.virtualbox.org)**. Linux, MacOS and Windows are supported.

You can **download** the necessary installers from [their download page](https://www.virtualbox.org/wiki/Downloads), and the follow [installation instructions](https://www.virtualbox.org/manual/ch01.html) they provide.

#### Testing VirtualBox

To test your installation download the VM relevant to your Tutorial, and boot it in VirtualBox.
An example of such a VM (used for the FENS 2016 tutorial) is located [here](https://drive.google.com/open?id=0B5FLVTgErnMSbmZhZlFRbzF3T1U).

## ** ! All instructions below are only necessary if you don't use the VM ! **

## Python

A requirement for the installation of all the tools below is Python.
We need version 2.7+ (some tools are not compatible with Python 3 yet).

#### Linux

Linux distributions should come with Python preinstalled. It could be that Python 2 is not automatically installed.
In the latest Ubuntu e.g. you might have to install it using:
```
sudo apt-get install python2.7
```

#### MacOS

Recent MacOS versions come with Python out of the box.

#### Windows


Installation instructions are [here](https://docs.python.org/2.7/using/windows.html).

### Testing Python

Open a commandline utility, and type 
```
python -c 'import os; print os.getcwd()'
```
which should print out the name of the directory you are currently in.

## Neuron                                                                        

For all functionality work you need to have Neuron installed with Python and X11 support, and you need to be able to compile MOD files.

### Testing Neuron

Open a commandline utility, and type
```
python -c 'import neuron; soma = neuron.h.Section(); print neuron.h.secname(sec=soma)'
```
which should print out the Neuron banner, and the value '-65'

                                                                                 
          
