
var skip= document.getElementById('skip');
var score= document.getElementById('score');
var totalscore= document.getElementById('totalscore');
var countdown= document.getElementById('countdown');
var count= 0;
var scoreCount= 0;
var duration= 0;

var qaSet = document.querySelectorAll('.qa_set');//select all qa-set element on the document

var qaAnsRow = document.querySelectorAll('.qa_set .qa_ans_row input');

skip.addEventListener('click', function(){//addEventListener add event to the button ann call the function step;

	step();
	duration =10
})

qaAnsRow.forEach( function(qaAnsRowSingle)// function name
{
	qaAnsRowSingle.addEventListener('click',function(){
		setTimeout(function()//The setTimeout() method calls a function or evaluates an expression after a specified number of milliseconds.
		{ 
			step();
			duration =10;
		},500)
		var valid = this.getAttribute("valid");
		if (valid == "valid")
			{
				scoreCount +=20;
				score.innerHTML = scoreCount;
				totalscore.innerHTML = scoreCount;
			}
			else
			{
				scoreCount -=20;
				score.innerHTML = scoreCount;
				totalscore.innerHTML = scoreCount;
			}

	})
});


function step()
{

	count += 1;
	for(var i = 0; i < qaSet.length; i++)
	{

		qaSet[i].className= 'qa_set';/* to be able to change the value of q setbto active */
	}

	qaSet[count].className= 'qa_set active';
	if(count == 4){
		skip.style.display = 'none';
		clearInterval(durationTime);// stop timer
		countdown.innerHTML = 0;
	}


}

var durationTime = setInterval(function()

{
	if(duration == 10){

		duration = 0;
	}
	duration +=1;
	countdown.innerHTML=duration;
	if(countdown.innerHTML =="10"){
		step()
	}

},1000);