def contains_sublist(lst, sublist):
    if len(sublist) == 0:
        return True
    for i in range(len(lst)):
        if lst[i:i+len(sublist)] == sublist:
            return True
    return False

list1 = [1, 2, 3, 4, 5]
sublist = [2, 3]
print(contains_sublist(list1, sublist))
