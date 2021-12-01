def solution(s):
    half_s = len(s) // 2
    answer_list = []
    for n in range(1, half_s + 1):
        split_list = [s[i:i + n] for i in range(0, len(s), n)]
        dup_cnt = [[1, split_list.pop(0)]]
        cnt = 1
        while split_list:
            fst = split_list.pop(0)
            if fst == dup_cnt[len(dup_cnt) - 1][1]:
                dup_cnt[len(dup_cnt) - 1][0] += 1
            else:
                dup_cnt.append([1, fst])
        answer = ''
        for i in range(0, len(dup_cnt)):
            if dup_cnt[i][0] == 1:
                answer += dup_cnt[i][1]
            else:
                answer += str(dup_cnt[i][0]) + dup_cnt[i][1]
        answer_list.append(len(answer))

    return min(answer_list)

print(solution('asdbbasdc'))
