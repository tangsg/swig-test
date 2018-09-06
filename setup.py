#!/usr/bin/env python

"""
setup.py file for SWIG C\+\+/Python example
"""
from distutils.core import setup, Extension
import numpy
import os

example_module = Extension('_example',
    sources=['example.cpp', 'example_wrap.cxx',],
)
setup (
    name = 'example',
    version = '0.1',
    author = "Frank Tang",
    description = """Simple swig C\+\+/Python example""",
    ext_modules = [example_module],
    py_modules = ["example"],
)
