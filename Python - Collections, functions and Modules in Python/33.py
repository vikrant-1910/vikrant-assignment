d1 = {'a': 100, 'b': 200}
d2 = {'x': 300, 'y': 200}
d3 = {'p': 200, 'q': 400}

concatenated_dict = {}
for d in (d1, d2, d3):
    concatenated_dict.update(d)

print(concatenated_dict)
