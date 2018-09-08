
import sys


def climbingLeaderboard(scores, alice):
    scores.extend(alice)
    scores.sort()
    result = []
    index = 1
    prev = scores[0]


    while(scores):
        s = scores.pop()
        if (s in alice):
            alice.remove(s)
            result.append(index)
        elif (s != prev):
            index += 1
            prev = s


    result.reverse()
    return result



if __name__ == "__main__":
    n = int(input().strip())
    scores = list(map(int, input().strip().split(' ')))
    m = int(input().strip())
    alice = list(map(int, input().strip().split(' ')))
    result = climbingLeaderboard(scores, alice)
    print ("\n".join(map(str, result)))

