void main() {
var isLogin = false;
// isLogin = "deneme string" olarak değiştirilemez

if(isLogin == true){
print("Welcome to HomePage");
}
else
{
print("Please login!");
}

//--------

int mark = 25;

if(mark >=50)
{
print("Passed");
}
else if (mark >= 40)
{
print("make-up exam");
}
else{
print("Failed");
}

//---------

String not = "c";

switch(not)
{
  case "A": {print("super");}
  break;
  case "B": {print("good");}
  break;
  case "C": {print("middle");}
  break;
  case "D": {print("bad");}
  break;

  default: {print("Error");}

}

}
