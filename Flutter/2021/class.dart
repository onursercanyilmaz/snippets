void main() {

//creating object
// Manager manager = new Manager();
var manager =  Manager();
manager.add();

var customer1 = Customer();
People personel = Personel.withInfo("Onur","Yilmaz", 1990);
customer1.add(personel);

var customer2 =  Customer();
personel.firstName = "Sercan";
personel.lastName = "Yilmaz";
customer2.add(personel);


var controller = controlPeople();

controller.operation(personel);


}


//Classes-----------
class controlPeople{
void operation(People person){
print(person.firstName);
}
}

class Manager extends People{
void add()
{
print("Manager Added!");
}

void update()
{

print("Manager Updated");}

void delete()
{
print("Manager Deleted");
}

}

class Customer extends People{
void add(People customer)
{
print("${customer.firstName} Added!");
}

void update()
{

print("Customer Updated");}

void delete()
{
print("Customer Deleted");
}

}


class Personel extends People //inheritance
{
String firstName;
String lastName;
int dateOfStart;
//this.firstName
//Constructor-----
//aynı isimde iki const olamaz
Personel(){}

Personel.withInfo(String firstName, String lastName, int dateOfStart){
this.firstName = firstName;
this.lastName = lastName;
this.dateOfStart = dateOfStart;
}
}


class People
{
String firstName;
String lastName;



//Cosntructor-----
//aynı isimde iki const olamaz
People(){}

People.withInfo(String firstName, String lastName){
this.firstName = firstName;
this.lastName = lastName;

}
}
