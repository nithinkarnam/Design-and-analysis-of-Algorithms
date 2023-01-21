
n=1000000  //creates 1000000 descendingnumbersforsorting
fp = open("descending_1000000.txt","w")
fp.write(str(n)+" ")  
for i in range(n,1,-1):
    fp.write(str(i)+" ")  
fp.write(str(1))
fp.close()
