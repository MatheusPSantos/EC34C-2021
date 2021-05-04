# 🇺🇸 Algorithm to make search in sorted list
# 🇧🇷 Algoritmo de busca em uma lista ordenada

def linear_sort_search(arr, key):
    for i in arr:
        if arr[i] == key:
            return i
    return -1


def main():
    n = int(input(f"Number of elements >>> "))
    sorted_arr = []
    for i in range(0, n):
        sorted_arr.append(i)

    print(f">>> {sorted_arr}")

    elem = int(input(f"Element to search >>> "))

    position = linear_sort_search(sorted_arr, elem)
    if position >= 0:
        print(f">>> {elem} has in position {position} in the list.")
        return

    print(f">>> {elem} not exists in the list.")
    return


if __name__ == "__main__":
    main()
