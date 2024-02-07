'''
A List is a data structure that stores a collection of items in a specific order.  
Lists are widely used because they allow for easy access, insertion, and deletion of elements.
'''

#reversing a list

my_list = [1, 2, 3, 4, 5]

# Method 1: Using the reverse() method
my_list.reverse()
print(my_list)  # Output: [5, 4, 3, 2, 1]

# Method 2: Using slicing
reversed_list = my_list[::-1]
print(reversed_list)  # Output: [5, 4, 3, 2, 1]

# Method 3: Using the reversed() function
reversed_list = list(reversed(my_list))
print(reversed_list)  # Output: [5, 4, 3, 2, 1]
