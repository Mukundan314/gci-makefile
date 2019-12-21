import matplotlib.pyplot as plt

x = []
y = []

with open('points') as f:
    for point in map(lambda x: x.split(), f.readlines()):
        x.append(int(point[0]))
        y.append(int(point[1]))

plt.scatter(x, y)
plt.show()
