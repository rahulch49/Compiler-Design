a = open("ICG.txt")
print("OP\tARG1\tARG2\tRES")
keys = ["OP", "ARG1", "ARG2", "RES"]
d = dict.fromkeys(keys)
# print(d)
for i in a:
    d.clear()
    temp = i.split()
    if len(temp) == 3:
        d["OP"] = temp[1]
        d["RES"] = temp[0]
        d["ARG1"] = temp[2]
        d["ARG2"] = " "
        print(d["OP"], d["ARG1"], d["ARG2"], d["RES"], sep="\t")
        continue
    if len(temp) == 4:
        d["OP"] = temp[0]
        d["RES"] = temp[3]
        d["ARG1"] = temp[1]
        d["ARG2"] = " "
        print(d["OP"], d["ARG1"], d["ARG2"], d["RES"], sep="\t")
        continue
    if len(temp) == 5:
        d["OP"] = temp[3]
        d["ARG1"] = temp[2]
        d["ARG2"] = temp[4]
        d["RES"] = temp[0]
        print(d["OP"], d["ARG1"], d["ARG2"], d["RES"], sep="\t")
        continue
    if len(temp) == 1:
        d["OP"] = "label"
        d["RES"] = str(temp[0])[:-1]
        print(d["OP"], " ", " ", d["RES"], sep="\t")
        continue
