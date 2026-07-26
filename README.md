# FizzBuzz Word Replacer

## Task

Given a string, replace every **3rd** word with `Fizz`, every **5th**
word with `Buzz`, and every **15th** word (divisible by both 3 and 5)
with `FizzBuzz`. Only alphanumeric words are counted — punctuation-only
tokens are skipped. Report the total number of replacements.

**Constraints:** `7 <= |s| <= 100`, input cannot be null.

**Example**

Input:
```
Mary had a little lamb
Little lamb, little lamb
Mary had a little lamb
It's fleece was white as snow
```

Output:
```
Mary had Fizz little Buzz
Fizz lamb, little Fizz
Buzz had Fizz little lamb
FizzBuzz fleece was Fizz as Buzz
count: 9
```

## Approach

Scan the input once, character by character:
- Whitespace is copied straight to the output (preserves spacing/line breaks).
- Non-whitespace runs are collected as tokens. A token counts as a
  "word" only if it has at least one alphanumeric character.
- Each word is numbered in order; depending on divisibility by 3/5, it's
  replaced or left as-is.

## Complexity

**Time: O(n)**, where `n` is the length of the input string.
Every character is visited exactly once — reading the input, scanning
tokens, and building the output are all single linear passes with no
re-scanning.

**Space: O(n)**.
The input is stored in one string and the output is built in another,
both proportional to the input length.

(Given the task's own constraint `|s| <= 100`, this is effectively O(1)
in practice — the O(n) above is the general bound if that cap were
lifted.)

## Build & Run

```bash
g++ -std=c++17 -O2 -o main main.cpp
./main
```
