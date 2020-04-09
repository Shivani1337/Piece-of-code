file=open('file2.txt','w')
file.write('Think\nbefore\nyou\nclick.')
file.close()
filename=input('Enter the file name:')
for line in reversed(list(open(filename))):
    print(line.rstrip())
