from collections import Counter

list_of_dicts = [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount': 300},
                 {'item': 'item1', 'amount': 750}]

combined_dict = Counter()
for d in list_of_dicts:
    combined_dict[d['item']] += d['amount']
print(dict(combined_dict))
