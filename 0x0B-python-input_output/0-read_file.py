#!/usr/bin/python3
"""
read_file module
"""


def read_file(filename=""):
    """Function that reads from a text file (UTF8) and prints it to stdout
    Returns none
    """
    with open(filename, "r", encoding="utf-8") as f:
        print(f.read(), end="")
