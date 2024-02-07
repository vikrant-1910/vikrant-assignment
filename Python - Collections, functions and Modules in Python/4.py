def get_stats(lst):
    if not lst:
        return None, None, 0  # Return None for largest and smallest if the list is empty
    
    largest = max(lst)
    smallest = min(lst)
    total_sum = sum(lst)
    
    return largest, smallest, total_sum

# Example usage:
my_list = [5, 2, 9, 1, 7]
largest_num, smallest_num, sum_all = get_stats(my_list)

print("Largest number:", largest_num)
print("Smallest number:", smallest_num)
print("Sum of all numbers:", sum_all)
