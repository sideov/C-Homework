import os
import matplotlib.pyplot as plt

link = '/Users/maximvasilev/CLionProjects/PR/HW2/f.txt'

file = open(link)
X = []
Y = []

for line in file:
    X.append(int(line.strip().split(' ')[0]))
    Y.append(int(line.strip().split(' ')[1]))


print(X[0:1])
plt.figure()
plt.grid()
plt.plot(X, Y, '*')
for x,y in zip(X,Y):
    plt.plot([0,x], [0,y], 'r-')

plt.plot([0,X[0]], [0, Y[0]], 'g')

plt.show()