with open("./test.faa") as fi:
    for line in fi:
        if ">" in line:
            file_name = line.split(":")[0][1:]
        with open(file_name,'a') as fo:
            print(line.strip(), file=fo)

