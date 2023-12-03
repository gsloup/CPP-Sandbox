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
// const codes = [
//   "two1nine",
//   "eightwothree",
//   "abcone2threexyz",
//   "xtwone3four",
//   "4nineeightseven2",
//   "zoneight234",
//   "7pqrstsixteen",
// ];
const { calibrationValue } = require("./challenge1");

const codes = require("./codes");

let sum = 0;

const numberMappings = {
  one: "one1one",
  two: "two2two",
  three: "three3three",
  four: "four4four",
  five: "five5five",
  six: "six6six",
  seven: "seven7seven",
  eight: "eight8eight",
  nine: "nine9nine",
};

for (let code of codes) {
  for (let num of Object.keys(numberMappings)) {
    code = code.replaceAll(num, numberMappings[num]);
  }
  sum += calibrationValue(code);
}

console.log("Challenge 2 answer: ", sum); // 54824 (correct) from the codes.js list
