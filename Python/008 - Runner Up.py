# Find the runner up score given n scores.

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr = sorted(set(arr)) # Sort the scores
    print(arr[-2])         # Grab the second to highest score