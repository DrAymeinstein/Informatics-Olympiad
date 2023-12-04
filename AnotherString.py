# https://arena.moi/problem/mcpc18acestring

import random

def change_order(word):
    char_list = list(word)

    random.shuffle(char_list)
    shuffled_word = ''.join(char_list)

    return shuffled_word


num_cases = int(input())

for i in range (num_cases):
    original_word = str(input())
    shuffled_word = change_order(original_word)
    print(shuffled_word)
