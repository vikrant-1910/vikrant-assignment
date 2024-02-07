list_of_tuples = [(1, 2), (3, 4), (5, 6)]
updated_list = [t[:-1] + (10,) for t in list_of_tuples]
print(updated_list)
