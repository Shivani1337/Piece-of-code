from collections import Counter
file = open('file3.txt', 'w')
file.write('Don’t let your trash become someone else’s treasure.')
file.close()
fname = input("Enter the file name: ")
number_of_words = 0
characters = 0
lines = 0
f = open(fname, 'r')
for line in f:
    words = line.split()
    number_of_words += len(words)
    characters = characters + len(line)
    lines = lines + 1
print('Total number of words in text:', number_of_words)
print('Total number of characters in text:', characters)
print('Total number of lines in text:', lines)
