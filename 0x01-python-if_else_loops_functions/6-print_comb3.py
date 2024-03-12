#!/usr/bin/python3
for F_N in range(0, 10):
    for S_N in range(F_N + 1, 10):
        if F_N == 8 and S_N == 9:
            print("{}{}".format(F_N, S_N))
        else:
            print("{}{}, ".format(F_N, S_N), end='')
