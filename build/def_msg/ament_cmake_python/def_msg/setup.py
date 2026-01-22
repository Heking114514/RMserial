from setuptools import find_packages
from setuptools import setup

setup(
    name='def_msg',
    version='0.0.0',
    packages=find_packages(
        include=('def_msg', 'def_msg.*')),
)
