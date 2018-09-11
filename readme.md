# Steps to run swig

## Using system python

swig -c\+\+ -python -py3 example.i  
python3 setup.py build_ext --inplace

## Using virtualenv python

swig -c++ -python example.i  
python setup.py build_ext --inplace