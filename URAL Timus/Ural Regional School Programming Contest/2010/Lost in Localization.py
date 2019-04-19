n = int(input())
k = {4: "few", 9: "several", 19: "pack", 49: "lots", 99: "horde",
     249: "throng", 499: "swarm", 999: "zounds", 1e9: "legion"}
for i in k.keys():
    if n <= i:
        print(k[i])
        break
