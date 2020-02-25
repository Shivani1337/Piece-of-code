def matrix_multi(M1,M2): 
    m=[[0,0,0],
       [0,0,0],
       [0,0,0]]
    for i in range(0, 3):  
        for j in range(0, 3): 
            for k in range(0, 3):  
                m[i][j] += M1[i][k] * M2[k][j]  
  
    for i in range(0,3):  
        for j in range(0,3):  
            print(m[i][j],end=" ") 
        print("\n",end="") 
  
 
M1 = [[2,4,1],
      [3,2,4],
      [3,2,9]] 
  
M2 = [[4,2,5],  
      [3,2,1],
      [4,6,8]]

print("Multiplication of two matrix is : ")
matrix_multi(M1,M2)
