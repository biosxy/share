with open("./temp","r") as fi, open("./c.txt","w") as fo:
    for line in fi:
        tmp = line.split("\t")
        print(">"+'|'.join(tmp[:3]),file=fo)
        for i in range(len(tmp[3])//100):
            print(tmp[3][i*100:(i+1)*100],file=fo)
        print(tmp[3][(len(tmp[3])//100)*100:],file=fo)