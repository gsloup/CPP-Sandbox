/*
Part 2
Your calculation isn't quite right. It looks like some of the digits are actually spelled out with letters: one, two, three, four, five, six, seven, eight, and nine also count as valid "digits".

Equipped with this new information, you now need to find the real first and last digit on each line. For example:

two1nine
eightwothree
abcone2threexyz
xtwone3four
4nineeightseven2
zoneight234
7pqrstsixteen
In this example, the calibration values are 29, 83, 13, 24, 42, 14, and 76. Adding these together produces 281.

What is the sum of all of the calibration values?
*/
const codes = [
  "two1nine",
  "eightwothree",
  "abcone2threexyz",
  "xtwone3four",
  "4nineeightseven2",
  "zoneight234",
  "7pqrstsixteen",
];
// const codes = require("./codes");

let sum = 0;
const stringNums = {
  one: 1,
  two: 2,
  three: 3,
  four: 4,
  five: 5,
  six: 6,
  seven: 7,
  eight: 8,
  nine: 9,
};

if ("one" in stringNums) {
  console.log("HELL YEAH");
}

function calibrationValue(code) {
  let leftmost;
  let rightmost;
  for (let i = 0; i < code.length; i++) {
    if (parseInt(code[i])) {
      leftmost = leftmost ? leftmost : code[i];
      rightmost = code[i];
    }
  }

  return parseInt(leftmost + rightmost); // these are still string values, so can just add them -> '1' + '2' = '12'
}

for (code in codes) {
  sum += calibrationValue(codes[code]);
}
console.log(sum);

// ----------------------------------------------------------------------------------------
