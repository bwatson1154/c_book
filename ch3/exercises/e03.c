/*
For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent. If they're not, show how they can be distinguished.

(a) "%d"        versus  " %d"
    These strings are equivalent in scanf, because scanf will look past whitespace until it encounters the proper character.
(b) "%d-%d-%d"  versus  "%d -%d -%d"
    These strings are not equivalent, the second one will halt after getting the first format specifier.
(c) "%f"        versus  "%f "
    These strings are not equivalent, the second will hang after reading the first format specifier until another is entered.
(d) "%f,%f"     versus  "%f, %f"
    These strings are equivalent.
*/
