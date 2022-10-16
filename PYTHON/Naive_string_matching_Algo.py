def NaiveAlgorithm(pat, txt):
	M = len(pat)
	N = len(txt)

	# A loop to slide pattern
	for i in range(N - M + 1):
		j = 0

		# checking pattern for i
		while(j < M):
			if (txt[i + j] != pat[j]):
				break
			j += 1

		if (j == M):
			print("Pattern found at index ", i)


txt = "This is a Naive String Matching Algorithm"
pat = "Naive"
NaiveAlgorithm(pat, txt)  
