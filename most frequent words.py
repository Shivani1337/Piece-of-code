from collections import Counter
file = open('file.txt', 'w')
file.write('We live in Dark to serve the light, We are programmers')
file.close()
file_name = input("Enter the file name: ")
file = open(file_name, 'r')
for line in file:
    words = line.split()
    counter = Counter(words).most_common()
print('The Most Frequent Words are:', counter)
