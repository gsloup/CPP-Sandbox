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
