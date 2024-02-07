def second_smallest(lst):
    unique_sorted = sorted(set(lst))
    if len(unique_sorted) < 2:
        return "List doesn't have a second smallest element"
    return unique_sorted[1]

list1 = [1, 2, 3, 4, 5]
print(second_smallest(list1))
