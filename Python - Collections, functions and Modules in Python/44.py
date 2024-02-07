from itertools import product

data = {'1': ['a', 'b'], '2': ['c', 'd']}
combinations = list(product(*data.values()))
for combo in combinations:
    print(''.join(combo))
