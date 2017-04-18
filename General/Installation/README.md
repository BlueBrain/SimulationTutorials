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

# The easy way
## VirtualBox                                                                    

We provide **Virtual Machines** with preinstalled software.
To run these VMs it is necessary to **install the [VirtualBox](https://www.virtualbox.org)**. Linux, MacOS and Windows are supported.

You can **download** the necessary installers from [their download page](https://www.virtualbox.org/wiki/Downloads), and the follow [installation instructions](https://www.virtualbox.org/manual/ch01.html) they provide. It should be sufficient to only install the 'VirtualBox platform packages'.

#### Testing VirtualBox

To test your installation download the VM relevant to your Tutorial, and boot it in VirtualBox.
An example of such a VM (used for the HBP School 2016 tutorial) is located [here](https://drive.google.com/drive/u/1/folders/0B5FLVTgErnMSTm9JTk9FTFNCV2s).

Make sure you can access external website inside the VM. To test this, open a browser, and go to https://bbp.epfl.ch/nmc-portal/welcome

## ** ! All the instructions below are only necessary if you don't use the VM ! **
# The hard way
An alternative is to install all the required software packages manually on your desktop.
We want to warn you that this might not be trivial.

## Python / Virtualenv / Pip

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

### Virtualenv / Pip

Once you have Python installed, you should make sure pip is installed [correctly](https://pip.pypa.io/en/stable/installing/).
And you should also work inside a Python virtualenv, see instructions [here](https://virtualenv.pypa.io/en/stable/userguide/)

### Testing Python

Open a commandline utility, and type 
```
python -c 'import os; print os.getcwd()'
```
which should print out the name of the directory you are currently in.

<<<<<<< HEAD
## Neuron                                                                        

For the Neuron simulator installation instructions, see [here](Neuron.md).

                                                                                 
          
=======
This
```
pip install pip --upgrade
```
should install the latest version of pip.

Also make sure you managed to set up and activate a Python virtualenv.

## Neuron                                                                        

For all functionality work you need to have Neuron installed **with Python and X11 support**, and you need to be able to **compile MOD files**.
Instructions for different operating systems are provided [here](http://www.neuron.yale.edu/neuron/)

### Testing Neuron

Open a commandline utility, and type
```
python -c 'import neuron; soma = neuron.h.Section(); print soma.v'
```
which should print out the Neuron banner, and the value '-65'.

When you type
```
nrngui
```
the Neuron graphical user interface should pop up.
                                                                                 
You should be able to compile Neuron MOD using the command:
```
nrnivmodl
```
It's best to test your entire installation by running and downloading one the NMC portal models, 
as described in the 'Running NEURON model packages' section of https://bbp.epfl.ch/nmc-portal/tools
(the models should be able to be run using both Python and the GUI)

## Jupyter notebooks

Information is available [here](http://jupyter.org/)

Installing using
```
pip install jupyter
```

### Testing jupyter notebooks

When you run 
```
jupyter notebook
```
it should open your browser on a page connected to the jupyter notebook kernel.

## BluePyOpt and eFEL

You can install BluePyOpt using
```
pip install bluepyopt
```
this should also automatically install eFEL as a dependency.

### Testing eFEL

Running
```
python -c 'import efel; print efel.getFeatureNames()'
```
should print a list of all the eFeature names

### Testing BluePyOpt

Running
```
 python -c 'import bluepyopt; print bluepyopt.__version__'
```
should print the BluePyOpt version installed
