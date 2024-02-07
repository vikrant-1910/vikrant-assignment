#You can use the pop() method with the index of -1 or use slicing.

my_list = [2, 33, 222, 14, 25]
my_list.pop()  # Removes and returns the last item
print(my_list)  # Output: [2, 33, 222, 14]

# Alternatively, you can use slicing
my_list = my_list[:-1]
print(my_list)  # Output: [2, 33, 222, 14]


#The expression list1[-1] accesses the last element of the list, which is 25.