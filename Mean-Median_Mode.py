import collections
def calculations(x):
    def max_of_elements(x):
        print("Maximum element in the list :", max(x))

    def min_of_elements(x):
        print("Minimum element in the list :", min(x))

    def mean_of_list(x):
        sum=0
        for i in range(0,len(x)):
            sum= sum + x[i]
        mean = sum//len(x)
        print("Mean :",mean)

    def median_of_list(x):
        x.sort()
        if(len(x)%2!=0):
            median = (len(x)+1)//2
            print("Median :",median)
        elif(len(x)%2==0):
            median = ((len(x)//2)+(len(x)//2)+1)//2
            print("Median :",median)

    def mode_of_list(x):
        data = collections.Counter(x)
        data_list = dict(data)
        max_value = max(list(data.values()))
        mode_val = [num for num, freq in data_list.items() if freq == max_value]
        if len(mode_val) == len(x):
            print("No mode is Avaialble")
        else:
            print("Mode :" + ', '.join(map(str, mode_val)))


    max_of_elements(x)
    min_of_elements(x)
    mean_of_list(x)
    median_of_list(x)
    mode_of_list(x)

x = [4,6,2,2,9,7,1,2]
print("The list is : ",x)
calculations(x)
