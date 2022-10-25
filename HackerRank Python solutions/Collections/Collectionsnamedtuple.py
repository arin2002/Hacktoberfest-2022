
n = int(input())
col_list = list(input().split())
marks_col = col_list.index("MARKS")
marks_list = []
for i in range(n):
    info_list = list(input().split())
    marks_list.append(float(info_list[marks_col]))
print(sum(marks_list)/n)
