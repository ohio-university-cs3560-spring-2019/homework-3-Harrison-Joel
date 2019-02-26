import sys


for line in sys.stdin:
	x = line.split()

print("Lines: ")
print(x[0])
print(" Words: ")
print(x[1])
print("Characters: ")
print(x[2])
