def heaps(arr: list) -> list:
    if len(arr) <= 1:
        return [tuple(arr)]

    res = []

    def generate(n: int, arr: list):
        c = [0] * n
        res.append(tuple(arr))

        i = 0
        while i < n:
            if c[i] < i:
                if i % 2 == 0:
                    arr[0], arr[i] = arr[i], arr[0]
                else:
                    arr[c[i]], arr[i] = arr[i], arr[c[i]]
                res.append(tuple(arr))
                c[i] += 1
                i = 0
            else:
                c[i] = 0
                i += 1

    generate(len(arr), arr)
    return res


if __name__ == "__main__":
    user_input = input("Enter numbers separated by a comma:\n").strip()
    arr = [int(item) for item in user_input.split(",")]
    print(heaps(arr))