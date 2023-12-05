/*
https://adventofcode.com/2023/day/3

Day 3, Part 1:

The engineer explains that an engine part seems to be missing from the engine, but nobody can figure out which one. If you can add up all the part numbers in the engine schematic, it should be easy to work out which part is missing.

The engine schematic (your puzzle input) consists of a visual representation of the engine. There are lots of numbers and symbols you don't really understand, but apparently any number adjacent to a symbol, even diagonally, is a "part number" and should be included in your sum. (Periods (.) do not count as a symbol.)

Here is an example engine schematic:

467..114..
...*......
..35..633.
......#...
617*......
.....+.58.
..592.....
......755.
...$.*....
.664.598..

In this schematic, two numbers are not part numbers because they are not adjacent to a symbol: 114 (top right) and 58 (middle right). Every other number is adjacent to a symbol and so is a part number; their sum is 4361.

Of course, the actual engine schematic is much larger. What is the sum of all of the part numbers in the engine schematic?
*/

const fs = require("fs");
const input = fs
  .readFileSync("html-sandbox/advent-of-code-2023/day3/input.txt")
  .toString()
  .split("\n");

// console.log(input);

const exampleInput = [
  "467..114..",
  "...*......",
  "..35..633.",
  "......#...",
  "617*......",
  ".....+.58.",
  "..592.....",
  "......755.",
  "...$.*....",
  ".664.598..",
];

/*
Returns an array of coords for any symbols 
[ [x,y], ... ]
*/
function findSymbolLocations(input) {
  const symbols = "@$#%^&*+=-_";
  let symbolLocations = [];

  for (let rowIndex = 0; rowIndex < input.length; rowIndex++) {
    let row = input[rowIndex];

    for (let colIndex = 0; colIndex < row.length; colIndex++) {
      let char = row[colIndex];
      let rowVal = row.indexOf(rowIndex[colIndex]);
      if (symbols.includes(char)) {
        symbolLocations.push([rowIndex, colIndex]);
      }
    }
  }
  return symbolLocations;
}

console.log(findSymbolLocations(exampleInput));
