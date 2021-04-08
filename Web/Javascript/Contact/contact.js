

function validate()
{
var mailformat = /^(([^<>()[\]\\.,;:\s@"]+(\.[^<>()[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
var name= document.getElementById("name").value;
var email= document.getElementById("email").value;
var subject= document.getElementById("subject").value;
var message= document.getElementById("message").value;
if(email.match(mailformat) && !(name =="") && !(subject=="") && !(message=="")) 
{   
	alert("Your message sent successfully!");
return true;
}

	



else
{
alert("Please check your information!");    
return false;
}
}

