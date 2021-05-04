#!/usr/bin/python3
# -*- coding: utf-8 -*-
# Binary search in list of numbers
# Busca binária em lista de números

def binary_search(arr, key):
    left = 0,
    right = len(arr)

    while left <= right:
        mid = int((left + right)/2)
        if arr[mid] == key:
            return mid
        elif key > arr[mid]:
            left = mid + 1
        else:
            right = mid - 1
    return -1


def main():
    n = int(input("Number os elements in the list <<< "))
    arr = []
    for i in range(0, n):
        arr.append(int(input("<<< ")))

    print(arr)
    elem = input("Element to search in the list >>> ")
    position = binary_search(arr, elem)

    if position >= 0:
        print(f"{elem} has in position {position} in the list.")
        return
    else:
        print(f"{elem} not exists in the list.")
        return


if __name__ == "__main__":
    main()
