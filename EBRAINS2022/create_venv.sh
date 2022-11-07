deactivate

export VENV=myvenv
python3 -m venv $VENV
source $VENV/bin/activate

./$VENV/bin/pip install --upgrade setuptools pip
./$VENV/bin/pip install wheel
./$VENV/bin/pip install jupyter
./$VENV/bin/pip install neurom
./$VENV/bin/pip install bluepyopt
./$VENV/bin/pip install git+https://github.com/BlueBrain/BluePyEfe

./$VENV/bin/ipython kernel install --name "EBRAINS2022" --user
