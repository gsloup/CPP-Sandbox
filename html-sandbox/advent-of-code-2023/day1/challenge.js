/*
This file is for the 2023 advent of code December challenge
https://adventofcode.com/2023

Day 1, Part 1:
On each line, the calibration value can be found by combining the first digit and the last digit (in that order) to form a single two-digit number.

For example:

1abc2
pqr3stu8vwx
a1b2c3d4e5f
treb7uchet
In this example, the calibration values of these four lines are 12, 38, 15, and 77. Adding these together produces 142.

Consider your entire calibration document. What is the sum of all of the calibration values?
*/

// const codes = ["1abc2", "pqr3stu8vwx", "a1b2c3d4e5f", "treb7uchet"]; // example

const codes = require("./codes");

let sum = 0;

function calibrationValue(code) {
  let leftmost;
  let rightmost;
  for (let i = 0; i < code.length; i++) {
    if (parseInt(code[i])) {
      leftmost = leftmost ? leftmost : code[i];
      rightmost = code[i];
    }
  }
  // console.log("leftmost", leftmost);
  // console.log("rightmost", rightmost);
  return parseInt(leftmost + rightmost); // these are still string values, so can just add them -> '1' + '2' = '12'
}

// iterate through the list of codes, adding up the sums
for (code in codes) {
  sum += calibrationValue(codes[code]);
}
console.log(sum); // returns 142 from example code, 55386 (correct) for the actual answer

// ----------------------------------------------------------------------------------------

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
