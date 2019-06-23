'use strict';

var _input = '';
var _index = 0;
process.stdin.on('data', (data) => { _input += data; });
process.stdin.on('end', () => {
	_input = _input.split(new RegExp('[\n ]+'));
	main(+(_input[0]), +(_input[1]), +(_input[2]));    
});

function main(mealCost, tipPercent, taxPercent) {
    let tip = mealCost * tipPercent / 100;
    let tax = mealCost * taxPercent / 100;
        
    let totalCost = Math.round(mealCost + tax + tip); 

    console.log("The total meal cost is " + totalCost + " dollars.");
}