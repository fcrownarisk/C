let display = document.querySelector('.display');
let currentOperator = null;
let currentNumber = '';
let previousNumber = '';
function clearDisplay() {
    display.value = '';
    currentNumber = '';
    previousNumber = '';
    currentOperator = null;
}
function appendToDisplay(value) {
    if (currentOperator) {
        if (currentNumber === '') {
            currentNumber = previousNumber + value;
        } else {
            currentNumber += value;
        }
        display.value = currentNumber;
    } else {
        if (display.value === '') {
            display.value = value;
        } else {
            display.value += value;
        }
        currentNumber = display.value;
        previousNumber = '';
    }
}

