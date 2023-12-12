/*
The Elf leads you over to the pile of colorful cards. There, you discover dozens of scratchcards, all with their opaque covering already scratched off. Picking one up, it looks like each card has two lists of numbers separated by a vertical bar (|): a list of winning numbers and then a list of numbers you have. You organize the information into a table (your puzzle input).

As far as the Elf has been able to figure out, you have to figure out which of the numbers you have appear in the list of winning numbers. The first match makes the card worth one point and each match after the first doubles the point value of that card.

For example:

Card 1: 41 48 83 86 17 | 83 86  6 31 17  9 48 53
Card 2: 13 32 20 16 61 | 61 30 68 82 17 32 24 19
Card 3:  1 21 53 59 44 | 69 82 63 72 16 21 14  1
Card 4: 41 92 73 84 69 | 59 84 76 51 58  5 54 83
Card 5: 87 83 26 28 32 | 88 30 70 12 93 22 82 36
Card 6: 31 18 13 56 72 | 74 77 10 23 35 67 36 11
In the above example, card 1 has five winning numbers (41, 48, 83, 86, and 17) and eight numbers you have (83, 86, 6, 31, 17, 9, 48, and 53). Of the numbers you have, four of them (48, 83, 17, and 86) are winning numbers! That means card 1 is worth 8 cardScore (1 for the first match, then doubled three times for each of the three matches after the first).

Card 2 has two winning numbers (32 and 61), so it is worth 2 cardScore.
Card 3 has two winning numbers (1 and 21), so it is worth 2 cardScore.
Card 4 has one winning number (84), so it is worth 1 point.
Card 5 has no winning numbers, so it is worth no cardScore.
Card 6 has no winning numbers, so it is worth no cardScore.
So, in this example, the Elf's pile of scratchcards is worth 13 cardScore.

Take a seat in the large pile of colorful cards. How many cardScore are they worth in total?
*/

const fs = require("fs");
const input = fs
  .readFileSync("html-sandbox/advent-of-code-2023/day4/input.txt")
  .toString()
  .split("\n");

const processCardData = (input) => {
  totalScore = 0;
  for (let line of input) {
    let cardScore = 0;
    let [card, winningNums, actualNums] = line.split(/[:|]/);
    winningNums = winningNums.trim().split(/\s+/).map(Number);
    actualNums = actualNums.trim().split(/\s+/).map(Number);

    for (let num of actualNums) {
      if (winningNums.includes(num)) {
        if (cardScore === 0) {
          cardScore = 1;
        } else {
          cardScore *= 2;
        }
      }
    }
    console.log(card, ": ", cardScore, " points");
    totalScore += cardScore;
  }
  return totalScore;
};

let total = processCardData(input);
console.log("----------------------");
console.log("TOTAL SCORE: ", total);
