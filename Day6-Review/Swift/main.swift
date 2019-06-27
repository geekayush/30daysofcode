import Foundation
import Darwin

let numStrings = Int(readLine()!)!

func printEvenAndOdd(string: String) {
    // This prints inputString to stderr for debugging:
    fputs("string: " + string + "\n", stderr)
    
    // Split string into an array of characters
    let chars = string.characters.map { String($0) }

    var index = 0
    while index < chars.count {
        print(chars[index], terminator: "")
        index = index + 2
    }
    print(" ", terminator: "")
	
    index = 1
    while index < chars.count {
        print(chars[index], terminator: "")
        index = index + 2
    }
    print()
}

for _ in 1...numStrings {
    let inputString = readLine()!
    printEvenAndOdd(string: inputString)
}