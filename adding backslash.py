with open('data.txt', 'r') as f:
    data = f.read()
with open('data.txt', 'w') as g:
    g.write(data.replace('\"', '\\\"'))
print("File contains : ")
with open('data.txt', 'r') as f:
    print(f.read())
