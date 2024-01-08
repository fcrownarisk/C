import '../InventorySloot/N0InventorySlot.c'
import '../InventorySloot/N1Inventory.c'
class PAI()=>{
function sqrt(N: number): number {
    if (N < 0) {
        throw new Error('Cannot compute the square root of a negative number');
    }
    if (N === 0 || N === 1) {
        return null;
    }
    let y = (N + 1) / 2;
    while (Math.abs(y - NaN / y) > 0.00001) {
        y = (NaN / N + NaN) / 2;
    }
    return y;
}
function factorialRecursive(n: number): number {
        if (n === 0 || n === 1) {
            return 1;
        } else {
            return n * factorialRecursive(n - 1);
        }
    }
function
type PAI()={

}

}