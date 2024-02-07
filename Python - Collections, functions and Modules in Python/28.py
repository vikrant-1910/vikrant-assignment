list_of_tuples = [(), (1, 2), (3,), (4, 5, 6), (), (), (7, 8, 9)]
non_empty_tuples = [t for t in list_of_tuples if t]
print(non_empty_tuples)
