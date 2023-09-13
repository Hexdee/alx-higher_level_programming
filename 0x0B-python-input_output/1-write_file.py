#!/usr/bin/python3
""" write_file module
"""


def write_file(filename="", text=""):
    """ Function that writes a string to a text file (UTF8) and
Returns the number of characters written
    """
    with open(filename, 'w') as f:
        return f.write(text)
