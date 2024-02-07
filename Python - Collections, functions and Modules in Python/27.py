tuple1 = (1, 2, 3, 2, 4, 2)
repeated_items = [item for item in set(tuple1) if tuple1.count(item) > 1]
print(repeated_items)
