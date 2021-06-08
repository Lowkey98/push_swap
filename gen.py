import random
import sys

print(' '.join(list(map(str, random.sample(range(int(sys.argv[1]), int(sys.argv[2])), int(sys.argv[3]))))))

