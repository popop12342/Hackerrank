
def resultado(a):
	a.sort()
	occ = []
	freq = []

	for n in a:
		if (occ[size(occ)-1] != n):
			occ.append(n)
			freq.append(1)
		else:
			freq[size(occ)-1] += 1
		

	print(occ)
	print(freq)

def run():
	n = input()
	a = [int(n) for n in input().strip().split(' ')]
	print(resultado(a))

if (__name__ == "__main__"):
	run()