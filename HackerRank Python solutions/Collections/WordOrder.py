
from collections import Counter, OrderedDict
class OrderedCounter(Counter,OrderedDict):
    pass

word_ar = []
n = int(input())
for i in range(n):
    word_ar.append(input().strip())
word_counter = OrderedCounter(word_ar)
print(len(word_counter))
for word in word_counter:
    print(word_counter[word],end=' ')
