from collections.abc import Iterator
from contextlib import contextmanager
from functools import cache
from sys import maxsize


def matrix_chain_multiply(arr: list[int]) -> int:
    if len(arr) < 2:
        return 0
    # initialising 2D dp matrix
    n = len(arr)
    dp = [[maxsize for j in range(n)] for i in range(n)]
    # we want minimum cost of multiplication of matrices
    # of dimension (i*k) and (k*j). This cost is arr[i-1]*arr[k]*arr[j].
    for i in range(n - 1, 0, -1):
        for j in range(i, n):
            if i == j:
                dp[i][j] = 0
                continue
            for k in range(i, j):
                dp[i][j] = min(
                    dp[i][j], dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j]
                )

    return dp[1][n - 1]


def matrix_chain_order(dims: list[int]) -> int:
    @cache
    def a(i: int, j: int) -> int:
        return min(
            (a(i, k) + dims[i] * dims[k] * dims[j] + a(k, j) for k in range(i + 1, j)),
            default=0,
        )

    return a(0, len(dims) - 1)


@contextmanager
def elapsed_time(msg: str) -> Iterator:
    # print(f"Starting: {msg}")
    from time import perf_counter_ns

    start = perf_counter_ns()
    yield
    print(f"Finished: {msg} in {(perf_counter_ns() - start) / 10 ** 9} seconds.")


if __name__ == "__main__":
    import doctest

    doctest.testmod()
    with elapsed_time("matrix_chain_order"):
        print(f"{matrix_chain_order(list(range(1, 251))) = }")
    with elapsed_time("matrix_chain_multiply"):
        print(f"{matrix_chain_multiply(list(range(1, 251))) = }")
    with elapsed_time("matrix_chain_order"):
        print(f"{matrix_chain_order(list(range(1, 251))) = }")
    with elapsed_time("matrix_chain_multiply"):
        print(f"{matrix_chain_multiply(list(range(1, 251))) = }")