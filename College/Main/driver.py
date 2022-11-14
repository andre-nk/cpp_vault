def MergeSort(argShuffledList):
    intNumOfComp = 0

    if len(argShuffledList) > 1:
        intMidValue = len(argShuffledList)//2
        listLeftHalf = argShuffledList[:intMidValue]
        listRightHalf = argShuffledList[intMidValue:]

        left_part = MergeSort(listLeftHalf)
        right_part = MergeSort(listRightHalf)

        intNumOfComp += left_part[1] + right_part[1]

        i = 0
        j = 0
        k = 0
        while i < len(listLeftHalf) and j < len(listRightHalf):
            intNumOfComp += 1
            if listLeftHalf[i] < listRightHalf[j]:
                argShuffledList[k] = listLeftHalf[i]
                i = i+1

            else:
                argShuffledList[k] = listRightHalf[j]
                j = j+1

            k = k+1

        while i < len(listLeftHalf):
            argShuffledList[k] = listLeftHalf[i]
            i = i+1
            k = k+1
            intNumOfComp += 1

        while j < len(listRightHalf):
            argShuffledList[k] = listRightHalf[j]
            j = j+1
            k = k+1
            intNumOfComp += 1

    return argShuffledList, intNumOfComp
