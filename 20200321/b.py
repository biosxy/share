with open("./temp","r") as fi, open("./b.txt","w") as fo:
    for line in fi:
        tmp = line.split("\t")
        print(">"+'|'.join(tmp[:3])+"\n"+tmp[3],file=fo)