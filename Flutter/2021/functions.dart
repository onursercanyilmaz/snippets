void main() {

sayHi();
introYourself("Onur");

var accountResult = calc(1000, 15);
print(accountResult);

test1(1,2,3); //1,2,3
test1(1,2); //1,2 null

test2(); //null,null,null
//test(1); error

test2(num1:1, num3:5, num2:2);


}

void sayHi()
{
print("Hi");
}

void introYourself(String user)
{
print("I am " + user);
}

//void ile bir şey return edilemeyeceğini biliyoruz.
//we can not return any type of data by using void

double calc(double credit, double percent)
{
var result = credit * percent / 100;

return result;
}

//opsiyonel parametre
void test1(int num1, [int num2, int num3])
{
print(num1);
print(num2);
print(num3);
}


//named parameter
void test2({int num1, int num2, int num3})
{
print(num1);
print(num2);
print(num3);
}


