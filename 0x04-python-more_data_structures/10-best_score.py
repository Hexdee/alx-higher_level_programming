#!/usr/bin/python3


def best_score(a_dictionary):
    if a_dictionary is None:
        return None
    maxnum = 0
    maxkey = None
    for k, v in a_dictionary.items():
        if v > maxnum:
            maxnum = v
            maxval = k
    return maxkey
