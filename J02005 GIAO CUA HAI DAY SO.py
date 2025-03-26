
n, m = map(int, input().split())
a = set(map(int, input().split()))
b = set(map(int, input().split()))
intersection = sorted(a & b)


print(*intersection)