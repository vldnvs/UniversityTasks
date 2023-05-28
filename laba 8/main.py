import matplotlib.pyplot as plt
import numpy as np

file = open("data.txt", "r")

indices = []
values = []


for string in file.readlines():
    key, value = string.split(' ')
    value = value.replace(',', '.')

    indices.append(int(key))
    values.append(float(value))

indices = [x * 10 for x in indices]


plt.plot(values, indices)

plt.xlabel("rA")

plt.ylabel("function values")

plt.show()



