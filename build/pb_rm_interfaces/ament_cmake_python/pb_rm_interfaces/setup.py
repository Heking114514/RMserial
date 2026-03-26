from setuptools import find_packages
from setuptools import setup

setup(
    name='pb_rm_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('pb_rm_interfaces', 'pb_rm_interfaces.*')),
)
