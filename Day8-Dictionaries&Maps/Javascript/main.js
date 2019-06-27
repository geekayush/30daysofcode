process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});

/** SOLUTION ***/

function processData(input) {
    input = input.trim().split("\n");
    var phoneBook = {};
    
    // Add entries
    for (i = 1; i <= input[0]; i++) {
        let line = input[i].trim().split(" ");
        
        phoneBook[line[0]] = line[1];
    }
    
    // Search
    for (; i < input.length; i++) {
        let result = phoneBook[input[i]];
        console.log( 
            (result != undefined)
            ? input[i] + "=" + result
            : "Not found"
        );
    }
} 