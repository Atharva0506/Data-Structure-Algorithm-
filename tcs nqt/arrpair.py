# Write a program to calculate  the pairs count in an array such thar the pair is divisble by 2 


def pair_div_by2(arr):
    pair = []
    count = 0
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if (arr[i] + arr[j]) % 2 == 0:
                pair.append((arr[i],arr[j]))
                count += 1

    return (count,pair)

print(pair_div_by2([2,4,1,5,1,23,4,2,2,1]))