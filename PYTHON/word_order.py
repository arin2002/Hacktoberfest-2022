from collections import Counter, OrderedDict


class OrderedCounter(Counter, OrderedDict):
    pass


ordered_counter = OrderedCounter(input() for _ in range(int(input())))
print(len(ordered_counter))
print(*ordered_counter.values())