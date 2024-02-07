def count_strings(strings):
    count = 0
    for string in strings:
        if len(string) >= 2 and string[0] == string[-1]:
            count += 1
    return count

string_list = ['abc', 'xyz', 'aba', '1221']
print(count_strings(string_list))
