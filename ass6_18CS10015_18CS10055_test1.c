// Calculate Force 
int main()

{
    printStr("_____________Dot product_____________\n");
    int err = 1, x1 = 1, y1 = 0, x2 = 0, y2 = 1, answer;
    printStr("Input the x1: ");
    x1 = readInt(&err);
    printStr("Input the y1: ");
    y1 = readInt(&err);
    printStr("Input the x2: ");
    x2 = readInt(&err);
    printStr("Input the y2: ");
    y2 = readInt(&err);

    answer = x1 * x2;
    answer = answer + y1 * y2;

    printStr("The value of dot product is ");
    printInt(answer);
    printStr("\n");
    printStr("\n__________________________\n");
    return 0;

}