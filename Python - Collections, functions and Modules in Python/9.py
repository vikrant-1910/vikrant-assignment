def has_common_element(list1, list2):
    return any(item in list2 for item in list1)

list1 = [1, 2, 3]
list2 = [3, 4, 5]
print(has_common_element(list1, list2))
