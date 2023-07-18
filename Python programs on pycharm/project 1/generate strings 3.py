import random  # to generate random combinations

upper_case = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
              'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']  # upper case alphabets in the list
lower_case = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
              'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']  # lower case alphabets in the list
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']  # numeric list
all_characters = upper_case + lower_case + numbers  # merged list


def Alphanumeric_string():
    # function to create the combinations of alphanumeric strings
    upper_letter = random.choice(upper_case)
    lower_letter = random.choice(lower_case)
    digit = random.choice(numbers)
    lst = [lower_letter, digit]
    for i in range(1, 4):
        all = random.choice(all_characters)
        lst.append(all)
    random.shuffle(lst)
    final_list = [upper_letter]
    for i in lst:
        final_list.append(i)  # appending the final list
    str = ""
    for i in final_list:  # appending the string
        str += i
    return str


print(f"\n Alphanumeric string is : {Alphanumeric_string()}")
count = 0
print("\n Rest 50 Alphanumeric strings are :\n")
for j in range(1, 51):
    final_string = Alphanumeric_string()  # generating the random combos
    print(final_string)
    if final_string[4:5] == '0...9':
        count += 1
print(f"\nThe number of strings that ends with two digits is  {count}\n")  # printing the strings